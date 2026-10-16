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

// Function: sub_00103090
// Address: 0x103090 - 0x1030f0
void sub_00103090_0x103090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103090_0x103090");
#endif

    switch (ctx->pc) {
        case 0x1030a8u: goto label_1030a8;
        default: break;
    }

    ctx->pc = 0x103090u;

    // 0x103090: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x103090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x103094: 0x8c438280  lw          $v1, -0x7D80($v0)
    ctx->pc = 0x103094u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338280u));
    // 0x103098: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x103098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10309c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10309Cu;
    {
        const bool branch_taken_0x10309c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10309Cu;
        // 0x1030a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10309c) {
            ctx->pc = 0x1030C4u;
            goto label_1030c4;
        }
    }
    ctx->pc = 0x1030A4u;
    // 0x1030a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1030a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1030a8:
    // 0x1030a8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1030A8u;
    {
        const bool branch_taken_0x1030a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1030a8) {
            ctx->pc = 0x1030ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1030A8u;
            // 0x1030ac: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1030B8u;
            goto label_1030b8;
        }
    }
    ctx->pc = 0x1030B0u;
    // 0x1030b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1030B0u;
    {
        const bool branch_taken_0x1030b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030B0u;
        // 0x1030b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030b0) {
            ctx->pc = 0x1030C4u;
            goto label_1030c4;
        }
    }
    ctx->pc = 0x1030B8u;
label_1030b8:
    // 0x1030b8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1030B8u;
    {
        const bool branch_taken_0x1030b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1030b8) {
            ctx->pc = 0x1030BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1030B8u;
            // 0x1030bc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1030A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1030a8;
        }
    }
    ctx->pc = 0x1030C0u;
    // 0x1030c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1030c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1030c4:
    // 0x1030c4: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1030c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x1030c8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1030c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1030CCu;
    {
        const bool branch_taken_0x1030cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1030cc) {
            ctx->pc = 0x1030E4u;
            goto label_1030e4;
        }
    }
    ctx->pc = 0x1030D4u;
    // 0x1030d4: 0xc4410300  lwc1        $f1, 0x300($v0)
    ctx->pc = 0x1030d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1030d8: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x1030d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1030dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1030dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1030e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1030e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1030e4:
    // 0x1030e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1030E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1030ECu;
    // 0x1030ec: 0x0  nop
    ctx->pc = 0x1030ecu;
    // NOP
    ctx->pc = 0x1030f0u;
}
