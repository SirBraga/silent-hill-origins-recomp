#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205ED0
// Address: 0x205ed0 - 0x205f68
void sub_00205ED0_0x205ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205ED0_0x205ed0");
#endif

    switch (ctx->pc) {
        case 0x205f00u: goto label_205f00;
        case 0x205f20u: goto label_205f20;
        case 0x205f30u: goto label_205f30;
        case 0x205f40u: goto label_205f40;
        default: break;
    }

    ctx->pc = 0x205ed0u;

    // 0x205ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205ed4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x205ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x205ed8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x205ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x205edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205ee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ee4: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x205ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0288u));
    // 0x205ee8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205eec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x205EECu;
    {
        const bool branch_taken_0x205eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EECu;
        // 0x205ef0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205eec) {
            ctx->pc = 0x205F20u;
            goto label_205f20;
        }
    }
    ctx->pc = 0x205EF4u;
    // 0x205ef4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x205ef8: 0xc09cc68  jal         func_2731A0
    ctx->pc = 0x205EF8u;
    SET_GPR_U32(ctx, 31, 0x205F00u);
    ctx->pc = 0x205EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EF8u;
    // 0x205efc: 0x24a53eb0  addiu       $a1, $a1, 0x3EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2731A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2731A0u, 0x205EF8u, 0x205F00u)) {
        return;
    }
    ctx->pc = 0x205F00u;
label_205f00:
    // 0x205f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205F04u;
    {
        const bool branch_taken_0x205f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f04) {
            ctx->pc = 0x205F20u;
            goto label_205f20;
        }
    }
    ctx->pc = 0x205F0Cu;
    // 0x205f0c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x205f0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205f10: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x205f10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x205f14: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x205f14u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x205f18: 0xc09cca4  jal         func_273290
    ctx->pc = 0x205F18u;
    SET_GPR_U32(ctx, 31, 0x205F20u);
    ctx->pc = 0x273290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273290u, 0x205F18u, 0x205F20u)) {
        return;
    }
    ctx->pc = 0x205F20u;
label_205f20:
    // 0x205f20: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x205F20u;
    {
        const bool branch_taken_0x205f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F20u;
        // 0x205f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f20) {
            ctx->pc = 0x205F4Cu;
            goto label_205f4c;
        }
    }
    ctx->pc = 0x205F28u;
    // 0x205f28: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x205F28u;
    SET_GPR_U32(ctx, 31, 0x205F30u);
    ctx->pc = 0x205F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F28u;
    // 0x205f2c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205F28u, 0x205F30u)) {
        return;
    }
    ctx->pc = 0x205F30u;
label_205f30:
    // 0x205f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f38: 0xc0813f2  jal         func_204FC8
    ctx->pc = 0x205F38u;
    SET_GPR_U32(ctx, 31, 0x205F40u);
    ctx->pc = 0x205F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F38u;
    // 0x205f3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204FC8u, 0x205F38u, 0x205F40u)) {
        return;
    }
    ctx->pc = 0x205F40u;
label_205f40:
    // 0x205f40: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x205F40u;
    {
        const bool branch_taken_0x205f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f40) {
            ctx->pc = 0x205F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F40u;
            // 0x205f44: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F48u;
            goto label_205f48;
        }
    }
    ctx->pc = 0x205F48u;
label_205f48:
    // 0x205f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205f4c:
    // 0x205f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205f50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x205f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205f58: 0x3e00008  jr          $ra
    ctx->pc = 0x205F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F58u;
        // 0x205f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205F60u;
    // 0x205f60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x205f64: 0x0  nop
    ctx->pc = 0x205f64u;
    // NOP
    ctx->pc = 0x205f68u;
}
