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

// Function: sub_00307140
// Address: 0x307140 - 0x307200
void sub_00307140_0x307140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307140_0x307140");
#endif

    ctx->pc = 0x307140u;

    // 0x307140: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x307140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307144: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x307144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307148: 0x27828d00  addiu       $v0, $gp, -0x7300
    ctx->pc = 0x307148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937856));
    // 0x30714c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x30714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x307150: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x307150u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x307154: 0x24846950  addiu       $a0, $a0, 0x6950
    ctx->pc = 0x307154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26960));
    // 0x307158: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x307158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x30715c: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x30715cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
    // 0x307160: 0x24c60fc8  addiu       $a2, $a2, 0xFC8
    ctx->pc = 0x307160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
    // 0x307164: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x307164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x307168: 0x8d43002c  lw          $v1, 0x2C($t2)
    ctx->pc = 0x307168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x30716c: 0x34e7ff00  ori         $a3, $a3, 0xFF00
    ctx->pc = 0x30716cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65280);
    // 0x307170: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x307170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x686958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686958u, _value); } while (0);
    // 0x307174: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x307178: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x307178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x30717c: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x30717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x307180: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x307180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x307184: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x307188: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x307188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A8u));
    // 0x30718c: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x30718cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x307190: 0x91450024  lbu         $a1, 0x24($t2)
    ctx->pc = 0x307190u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x307194: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x307194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x307198: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x307198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30719c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3071a0: 0x90440047  lbu         $a0, 0x47($v0)
    ctx->pc = 0x3071a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 71)));
    // 0x3071a4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3071a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x3071a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3071a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3071ac: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x3071acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x3071b0: 0x8d420028  lw          $v0, 0x28($t2)
    ctx->pc = 0x3071b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x3071b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3071B4u;
    {
        const bool branch_taken_0x3071b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3071b4) {
            ctx->pc = 0x3071B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3071B4u;
            // 0x3071b8: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3071D0u;
            goto label_3071d0;
        }
    }
    ctx->pc = 0x3071BCu;
    // 0x3071bc: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x3071bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3071c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3071c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3071c4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3071c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3071c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3071c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3071cc: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x3071ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_3071d0:
    // 0x3071d0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3071d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3071d4: 0x24636970  addiu       $v1, $v1, 0x6970
    ctx->pc = 0x3071d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26992));
    // 0x3071d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3071d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3071dc: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x3071dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3071e0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x3071e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3071e4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3071e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3071e8: 0x8d420028  lw          $v0, 0x28($t2)
    ctx->pc = 0x3071e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x3071ec: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3071ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3071f0: 0x8d43002c  lw          $v1, 0x2C($t2)
    ctx->pc = 0x3071f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x3071f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3071F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3071F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071F4u;
        // 0x3071f8: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3071F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3071FCu;
    // 0x3071fc: 0x0  nop
    ctx->pc = 0x3071fcu;
    // NOP
    ctx->pc = 0x307200u;
}
