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

// Function: sub_00297ED0
// Address: 0x297ed0 - 0x297f90
void sub_00297ED0_0x297ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297ED0_0x297ed0");
#endif

    switch (ctx->pc) {
        case 0x297f18u: goto label_297f18;
        case 0x297f3cu: goto label_297f3c;
        case 0x297f54u: goto label_297f54;
        default: break;
    }

    ctx->pc = 0x297ed0u;

    // 0x297ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297ed4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297edc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ee4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297ee8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297eec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297EECu;
    {
        const bool branch_taken_0x297eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EECu;
        // 0x297ef0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297eec) {
            ctx->pc = 0x297F04u;
            goto label_297f04;
        }
    }
    ctx->pc = 0x297EF4u;
    // 0x297ef4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x297ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x297ef8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x297ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297efc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x297EFCu;
    {
        const bool branch_taken_0x297efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EFCu;
        // 0x297f00: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297efc) {
            ctx->pc = 0x297F40u;
            goto label_297f40;
        }
    }
    ctx->pc = 0x297F04u;
label_297f04:
    // 0x297f04: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x297f08: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x297F08u;
    {
        const bool branch_taken_0x297f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297f08) {
            ctx->pc = 0x297F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297F08u;
            // 0x297f0c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297F20u;
            goto label_297f20;
        }
    }
    ctx->pc = 0x297F10u;
    // 0x297f10: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x297F10u;
    SET_GPR_U32(ctx, 31, 0x297F18u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x297F10u, 0x297F18u)) {
        return;
    }
    ctx->pc = 0x297F18u;
label_297f18:
    // 0x297f18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297f1c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x297f1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_297f20:
    // 0x297f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x297f24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297f28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297f28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x297f2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297F2Cu;
    {
        const bool branch_taken_0x297f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F2Cu;
        // 0x297f30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f2c) {
            ctx->pc = 0x297F40u;
            goto label_297f40;
        }
    }
    ctx->pc = 0x297F34u;
    // 0x297f34: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x297F34u;
    SET_GPR_U32(ctx, 31, 0x297F3Cu);
    ctx->pc = 0x297F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F34u;
    // 0x297f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x297F34u, 0x297F3Cu)) {
        return;
    }
    ctx->pc = 0x297F3Cu;
label_297f3c:
    // 0x297f3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297f40:
    // 0x297f40: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x297F40u;
    {
        const bool branch_taken_0x297f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F40u;
        // 0x297f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f40) {
            ctx->pc = 0x297F78u;
            goto label_297f78;
        }
    }
    ctx->pc = 0x297F48u;
    // 0x297f48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297f4c: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x297F4Cu;
    SET_GPR_U32(ctx, 31, 0x297F54u);
    ctx->pc = 0x297F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F4Cu;
    // 0x297f50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x297F4Cu, 0x297F54u)) {
        return;
    }
    ctx->pc = 0x297F54u;
label_297f54:
    // 0x297f54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x297f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297f5c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297F5Cu;
    {
        const bool branch_taken_0x297f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297f5c) {
            ctx->pc = 0x297F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297F5Cu;
            // 0x297f60: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297F74u;
            goto label_297f74;
        }
    }
    ctx->pc = 0x297F64u;
    // 0x297f64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297f68: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297f6c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x297f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x297f70: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x297f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_297f74:
    // 0x297f74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297f78:
    // 0x297f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x297f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297f7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297f84: 0x3e00008  jr          $ra
    ctx->pc = 0x297F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F84u;
        // 0x297f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297F8Cu;
    // 0x297f8c: 0x0  nop
    ctx->pc = 0x297f8cu;
    // NOP
    ctx->pc = 0x297f90u;
}
