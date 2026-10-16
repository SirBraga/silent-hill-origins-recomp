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

// Function: sub_001D3BC8
// Address: 0x1d3bc8 - 0x1d3c88
void sub_001D3BC8_0x1d3bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3BC8_0x1d3bc8");
#endif

    switch (ctx->pc) {
        case 0x1d3becu: goto label_1d3bec;
        case 0x1d3c08u: goto label_1d3c08;
        default: break;
    }

    ctx->pc = 0x1d3bc8u;

    // 0x1d3bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d3bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3bdc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d3be0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d3be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d3be4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D3BE4u;
    SET_GPR_U32(ctx, 31, 0x1D3BECu);
    ctx->pc = 0x1D3BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BE4u;
    // 0x1d3be8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D3BE4u, 0x1D3BECu)) {
        return;
    }
    ctx->pc = 0x1D3BECu;
label_1d3bec:
    // 0x1d3bec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d3becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d3bf0: 0x8c43883c  lw          $v1, -0x77C4($v0)
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F883Cu));
    // 0x1d3bf4: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D3BF4u;
    {
        const bool branch_taken_0x1d3bf4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1D3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BF4u;
        // 0x1d3bf8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3bf4) {
            ctx->pc = 0x1D3C70u;
            goto label_1d3c70;
        }
    }
    ctx->pc = 0x1D3BFCu;
    // 0x1d3bfc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d3c00: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1d3c00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c04: 0x8c488834  lw          $t0, -0x77CC($v0)
    ctx->pc = 0x1d3c04u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6F8834u));
label_1d3c08:
    // 0x1d3c08: 0x9502000e  lhu         $v0, 0xE($t0)
    ctx->pc = 0x1d3c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x1d3c0c: 0x9103000d  lbu         $v1, 0xD($t0)
    ctx->pc = 0x1d3c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x1d3c10: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1d3c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1d3c14: 0x9104000c  lbu         $a0, 0xC($t0)
    ctx->pc = 0x1d3c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1d3c18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d3c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d3c1c: 0x9105000b  lbu         $a1, 0xB($t0)
    ctx->pc = 0x1d3c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x1d3c20: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1d3c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1d3c24: 0x9106000a  lbu         $a2, 0xA($t0)
    ctx->pc = 0x1d3c24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1d3c28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d3c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d3c2c: 0x91070009  lbu         $a3, 0x9($t0)
    ctx->pc = 0x1d3c2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x1d3c30: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x1d3c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x1d3c34: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x1d3c34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c38: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1d3c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1d3c3c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1d3c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1d3c40: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1d3c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1d3c44: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x1d3c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x1d3c48: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x1d3c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1d3c4c: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x1d3c4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d3c50: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3C50u;
    {
        const bool branch_taken_0x1d3c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c50) {
            ctx->pc = 0x1D3C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3C50u;
            // 0x1d3c54: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3C64u;
            goto label_1d3c64;
        }
    }
    ctx->pc = 0x1D3C58u;
    // 0x1d3c58: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d3c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1d3c5c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1d3c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1d3c64:
    // 0x1d3c64: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x1d3c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1d3c68: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D3C68u;
    {
        const bool branch_taken_0x1d3c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C68u;
        // 0x1d3c6c: 0x25080038  addiu       $t0, $t0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c68) {
            ctx->pc = 0x1D3C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3c08;
        }
    }
    ctx->pc = 0x1D3C70u;
label_1d3c70:
    // 0x1d3c70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d3c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3c78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C7Cu;
        // 0x1d3c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C84u;
    // 0x1d3c84: 0x0  nop
    ctx->pc = 0x1d3c84u;
    // NOP
    ctx->pc = 0x1d3c88u;
}
