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

// Function: sub_002314E8
// Address: 0x2314e8 - 0x231560
void sub_002314E8_0x2314e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002314E8_0x2314e8");
#endif

    switch (ctx->pc) {
        case 0x231504u: goto label_231504;
        case 0x23150cu: goto label_23150c;
        case 0x231538u: goto label_231538;
        case 0x231540u: goto label_231540;
        default: break;
    }

    ctx->pc = 0x2314e8u;

    // 0x2314e8: 0x8f828428  lw          $v0, -0x7BD8($gp)
    ctx->pc = 0x2314e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x2314ec: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2314ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2314f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2314f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2314f4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2314F4u;
    {
        const bool branch_taken_0x2314f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2314F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314F4u;
        // 0x2314f8: 0x8f828eb0  lw          $v0, -0x7150($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314f4) {
            ctx->pc = 0x231504u;
            goto label_231504;
        }
    }
    ctx->pc = 0x2314FCu;
    // 0x2314fc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2314FCu;
    {
        const bool branch_taken_0x2314fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314FCu;
        // 0x231500: 0x8f828eb4  lw          $v0, -0x714C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314fc) {
            ctx->pc = 0x231564u;
            return;
        }
    }
    ctx->pc = 0x231504u;
label_231504:
    // 0x231504: 0x3e00008  jr          $ra
    ctx->pc = 0x231504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231504u;
        // 0x231508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23150Cu;
label_23150c:
    // 0x23150c: 0xdf828490  ld          $v0, -0x7B70($gp)
    ctx->pc = 0x23150cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x231510: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x231510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x231514: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x231514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x231518: 0x21a3b  dsra        $v1, $v0, 8
    ctx->pc = 0x231518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 8);
    // 0x23151c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x231520: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x231520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x231524: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x231524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x231528: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x231528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23152c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23152cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x231530: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x231530u;
    {
        const bool branch_taken_0x231530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231530u;
        // 0x231534: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231530) {
            ctx->pc = 0x231568u;
            return;
        }
    }
    ctx->pc = 0x231538u;
label_231538:
    // 0x231538: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x231538u;
    {
        const bool branch_taken_0x231538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231538u;
        // 0x23153c: 0x8f828460  lw          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231538) {
            ctx->pc = 0x231564u;
            return;
        }
    }
    ctx->pc = 0x231540u;
label_231540:
    // 0x231540: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x231544: 0x8c424180  lw          $v0, 0x4180($v0)
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4180u));
    // 0x231548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231548u;
    {
        const bool branch_taken_0x231548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231548u;
        // 0x23154c: 0xc7809114  lwc1        $f0, -0x6EEC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231548) {
            ctx->pc = 0x231558u;
            goto label_231558;
        }
    }
    ctx->pc = 0x231550u;
    // 0x231550: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x231550u;
    {
        const bool branch_taken_0x231550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231550u;
        // 0x231554: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231550) {
            ctx->pc = 0x231568u;
            return;
        }
    }
    ctx->pc = 0x231558u;
label_231558:
    // 0x231558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231558u;
    {
        const bool branch_taken_0x231558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231558u;
        // 0x23155c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231558) {
            ctx->pc = 0x231568u;
            return;
        }
    }
    ctx->pc = 0x231560u;
}
