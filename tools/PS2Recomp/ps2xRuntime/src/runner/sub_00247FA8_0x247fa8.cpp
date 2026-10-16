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

// Function: sub_00247FA8
// Address: 0x247fa8 - 0x248058
void sub_00247FA8_0x247fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247FA8_0x247fa8");
#endif

    switch (ctx->pc) {
        case 0x247fdcu: goto label_247fdc;
        case 0x247fe8u: goto label_247fe8;
        case 0x248034u: goto label_248034;
        default: break;
    }

    ctx->pc = 0x247fa8u;

    // 0x247fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247fac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x247facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x247fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x247fb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x247fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x247fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fc0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x247fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x247fc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x247FC4u;
    {
        const bool branch_taken_0x247fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FC4u;
        // 0x247fc8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fc4) {
            ctx->pc = 0x247FF0u;
            goto label_247ff0;
        }
    }
    ctx->pc = 0x247FCCu;
    // 0x247fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247fd0: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x247fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x247fd4: 0xc092848  jal         func_24A120
    ctx->pc = 0x247FD4u;
    SET_GPR_U32(ctx, 31, 0x247FDCu);
    ctx->pc = 0x247FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FD4u;
    // 0x247fd8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x247FD4u, 0x247FDCu)) {
        return;
    }
    ctx->pc = 0x247FDCu;
label_247fdc:
    // 0x247fdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fe0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x247FE0u;
    SET_GPR_U32(ctx, 31, 0x247FE8u);
    ctx->pc = 0x247FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FE0u;
    // 0x247fe4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x247FE0u, 0x247FE8u)) {
        return;
    }
    ctx->pc = 0x247FE8u;
label_247fe8:
    // 0x247fe8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x247FE8u;
    {
        const bool branch_taken_0x247fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FE8u;
        // 0x247fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fe8) {
            ctx->pc = 0x248044u;
            goto label_248044;
        }
    }
    ctx->pc = 0x247FF0u;
label_247ff0:
    // 0x247ff0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x247ff4: 0x8cc64188  lw          $a2, 0x4188($a2)
    ctx->pc = 0x247ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4188u));
    // 0x247ff8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x247ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x247ffc: 0x24a50fc8  addiu       $a1, $a1, 0xFC8
    ctx->pc = 0x247ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
    // 0x248000: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x248000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x248004: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x248004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x248008: 0x34e70018  ori         $a3, $a3, 0x18
    ctx->pc = 0x248008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24);
    // 0x24800c: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x24800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x248010: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x248010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248014: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x248014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x248018: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x248018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x24801c: 0xa4480048  sh          $t0, 0x48($v0)
    ctx->pc = 0x24801cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 8));
    // 0x248020: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248024: 0xac490058  sw          $t1, 0x58($v0)
    ctx->pc = 0x248024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 9));
    // 0x248028: 0xac470054  sw          $a3, 0x54($v0)
    ctx->pc = 0x248028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 7));
    // 0x24802c: 0xc09240e  jal         func_249038
    ctx->pc = 0x24802Cu;
    SET_GPR_U32(ctx, 31, 0x248034u);
    ctx->pc = 0x248030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24802Cu;
    // 0x248030: 0xac50004c  sw          $s0, 0x4C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x24802Cu, 0x248034u)) {
        return;
    }
    ctx->pc = 0x248034u;
label_248034:
    // 0x248034: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x248034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248038: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x248038u;
    {
        const bool branch_taken_0x248038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248038u;
        // 0x24803c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248038) {
            ctx->pc = 0x248044u;
            goto label_248044;
        }
    }
    ctx->pc = 0x248040u;
    // 0x248040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248044:
    // 0x248044: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x248044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24804c: 0x3e00008  jr          $ra
    ctx->pc = 0x24804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24804Cu;
        // 0x248050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24804Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248054u;
    // 0x248054: 0x0  nop
    ctx->pc = 0x248054u;
    // NOP
    ctx->pc = 0x248058u;
}
