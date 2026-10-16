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

// Function: sub_00182ED0
// Address: 0x182ed0 - 0x182f78
void sub_00182ED0_0x182ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182ED0_0x182ed0");
#endif

    switch (ctx->pc) {
        case 0x182f10u: goto label_182f10;
        case 0x182f34u: goto label_182f34;
        case 0x182f4cu: goto label_182f4c;
        default: break;
    }

    ctx->pc = 0x182ed0u;

    // 0x182ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182ed4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x182ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x182ed8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x182ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x182edc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x182edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182ee4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ee8: 0x8c433bc0  lw          $v1, 0x3BC0($v0)
    ctx->pc = 0x182ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6C3BC0u));
    // 0x182eec: 0x24523bc0  addiu       $s2, $v0, 0x3BC0
    ctx->pc = 0x182eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15296));
    // 0x182ef0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x182ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x182ef4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x182EF4u;
    {
        const bool branch_taken_0x182ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EF4u;
        // 0x182ef8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ef4) {
            ctx->pc = 0x182F18u;
            goto label_182f18;
        }
    }
    ctx->pc = 0x182EFCu;
    // 0x182efc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x182efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f00: 0x1022c3  sra         $a0, $s0, 11
    ctx->pc = 0x182f00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 11));
    // 0x182f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f08: 0xc0a5bd8  jal         func_296F60
    ctx->pc = 0x182F08u;
    SET_GPR_U32(ctx, 31, 0x182F10u);
    ctx->pc = 0x182F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F08u;
    // 0x182f0c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296F60u, 0x182F08u, 0x182F10u)) {
        return;
    }
    ctx->pc = 0x182F10u;
label_182f10:
    // 0x182f10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x182F10u;
    {
        const bool branch_taken_0x182f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F10u;
        // 0x182f14: 0x212c0  sll         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f10) {
            ctx->pc = 0x182F60u;
            goto label_182f60;
        }
    }
    ctx->pc = 0x182F18u;
label_182f18:
    // 0x182f18: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x182f18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x182f1c: 0x8e228a18  lw          $v0, -0x75E8($s1)
    ctx->pc = 0x182f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338A18u));
    // 0x182f20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182F20u;
    {
        const bool branch_taken_0x182f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F20u;
        // 0x182f24: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f20) {
            ctx->pc = 0x182F40u;
            goto label_182f40;
        }
    }
    ctx->pc = 0x182F28u;
    // 0x182f28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x182f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f2c: 0xc0c9788  jal         func_325E20
    ctx->pc = 0x182F2Cu;
    SET_GPR_U32(ctx, 31, 0x182F34u);
    ctx->pc = 0x182F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F2Cu;
    // 0x182f30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325E20u, 0x182F2Cu, 0x182F34u)) {
        return;
    }
    ctx->pc = 0x182F34u;
label_182f34:
    // 0x182f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182f38: 0xae238a18  sw          $v1, -0x75E8($s1)
    ctx->pc = 0x182f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937112), GPR_U32(ctx, 3));
    // 0x182f3c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x182f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_182f40:
    // 0x182f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182f44: 0xc0c9824  jal         func_326090
    ctx->pc = 0x182F44u;
    SET_GPR_U32(ctx, 31, 0x182F4Cu);
    ctx->pc = 0x182F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F44u;
    // 0x182f48: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x326090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326090u, 0x182F44u, 0x182F4Cu)) {
        return;
    }
    ctx->pc = 0x182F4Cu;
label_182f4c:
    // 0x182f4c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x182f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x182f50: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182F50u;
    {
        const bool branch_taken_0x182f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F50u;
        // 0x182f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f50) {
            ctx->pc = 0x182F60u;
            goto label_182f60;
        }
    }
    ctx->pc = 0x182F58u;
    // 0x182f58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f5c: 0xae208a18  sw          $zero, -0x75E8($s1)
    ctx->pc = 0x182f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937112), GPR_U32(ctx, 0));
label_182f60:
    // 0x182f60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x182f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182f64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x182f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182f70: 0x3e00008  jr          $ra
    ctx->pc = 0x182F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F70u;
        // 0x182f74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182F78u;
}
