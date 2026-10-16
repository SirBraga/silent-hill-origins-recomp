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

// Function: sub_001CA838
// Address: 0x1ca838 - 0x1ca8d0
void sub_001CA838_0x1ca838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA838_0x1ca838");
#endif

    switch (ctx->pc) {
        case 0x1ca838u: goto label_1ca838;
        case 0x1ca83cu: goto label_1ca83c;
        case 0x1ca840u: goto label_1ca840;
        case 0x1ca844u: goto label_1ca844;
        case 0x1ca848u: goto label_1ca848;
        case 0x1ca84cu: goto label_1ca84c;
        case 0x1ca850u: goto label_1ca850;
        case 0x1ca854u: goto label_1ca854;
        case 0x1ca858u: goto label_1ca858;
        case 0x1ca85cu: goto label_1ca85c;
        case 0x1ca860u: goto label_1ca860;
        case 0x1ca864u: goto label_1ca864;
        case 0x1ca868u: goto label_1ca868;
        case 0x1ca86cu: goto label_1ca86c;
        case 0x1ca870u: goto label_1ca870;
        case 0x1ca874u: goto label_1ca874;
        case 0x1ca878u: goto label_1ca878;
        case 0x1ca87cu: goto label_1ca87c;
        case 0x1ca880u: goto label_1ca880;
        case 0x1ca884u: goto label_1ca884;
        case 0x1ca888u: goto label_1ca888;
        case 0x1ca88cu: goto label_1ca88c;
        case 0x1ca890u: goto label_1ca890;
        case 0x1ca894u: goto label_1ca894;
        case 0x1ca898u: goto label_1ca898;
        case 0x1ca89cu: goto label_1ca89c;
        case 0x1ca8a0u: goto label_1ca8a0;
        case 0x1ca8a4u: goto label_1ca8a4;
        case 0x1ca8a8u: goto label_1ca8a8;
        case 0x1ca8acu: goto label_1ca8ac;
        case 0x1ca8b0u: goto label_1ca8b0;
        case 0x1ca8b4u: goto label_1ca8b4;
        case 0x1ca8b8u: goto label_1ca8b8;
        case 0x1ca8bcu: goto label_1ca8bc;
        case 0x1ca8c0u: goto label_1ca8c0;
        case 0x1ca8c4u: goto label_1ca8c4;
        case 0x1ca8c8u: goto label_1ca8c8;
        case 0x1ca8ccu: goto label_1ca8cc;
        default: break;
    }

    ctx->pc = 0x1ca838u;

label_1ca838:
    // 0x1ca838: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1ca838u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ca83c:
    // 0x1ca83c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1ca83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ca840:
    // 0x1ca840: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x1ca840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ca844:
    // 0x1ca844: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca848:
    // 0x1ca848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ca84c:
    // 0x1ca84c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca850:
    // 0x1ca850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca854:
    // 0x1ca854: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1ca854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_1ca858:
    // 0x1ca858: 0x24c6fa40  addiu       $a2, $a2, -0x5C0
    ctx->pc = 0x1ca858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965824));
label_1ca85c:
    // 0x1ca85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca860:
    // 0x1ca860: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1ca860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ca864:
    // 0x1ca864: 0xac4802d0  sw          $t0, 0x2D0($v0)
    ctx->pc = 0x1ca864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 8));
label_1ca868:
    // 0x1ca868: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1ca868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca86c:
    // 0x1ca86c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ca86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca870:
    // 0x1ca870: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ca870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca874:
    // 0x1ca874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ca874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca878:
    // 0x1ca878: 0x8c8203a8  lw          $v0, 0x3A8($a0)
    ctx->pc = 0x1ca878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 936)));
label_1ca87c:
    // 0x1ca87c: 0xad2202cc  sw          $v0, 0x2CC($t1)
    ctx->pc = 0x1ca87cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 716), GPR_U32(ctx, 2));
label_1ca880:
    // 0x1ca880: 0xe4e002e4  swc1        $f0, 0x2E4($a3)
    ctx->pc = 0x1ca880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 740), bits); }
label_1ca884:
    // 0x1ca884: 0xe50002e0  swc1        $f0, 0x2E0($t0)
    ctx->pc = 0x1ca884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 736), bits); }
label_1ca888:
    // 0x1ca888: 0x8c8203a8  lw          $v0, 0x3A8($a0)
    ctx->pc = 0x1ca888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 936)));
label_1ca88c:
    // 0x1ca88c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ca890:
    // 0x1ca890: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ca890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ca894:
    // 0x1ca894: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca898:
    // 0x1ca898: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x1ca898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
label_1ca89c:
    // 0x1ca89c: 0x8c8203a8  lw          $v0, 0x3A8($a0)
    ctx->pc = 0x1ca89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 936)));
label_1ca8a0:
    // 0x1ca8a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ca8a4:
    // 0x1ca8a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ca8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ca8a8:
    // 0x1ca8a8: 0xac4a03cc  sw          $t2, 0x3CC($v0)
    ctx->pc = 0x1ca8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 972), GPR_U32(ctx, 10));
label_1ca8ac:
    // 0x1ca8ac: 0x8c860268  lw          $a2, 0x268($a0)
    ctx->pc = 0x1ca8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
label_1ca8b0:
    // 0x1ca8b0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1ca8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1ca8b4:
    // 0x1ca8b4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ca8b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ca8b8:
    // 0x1ca8b8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ca8bc:
    // 0x1ca8bc: 0x60f809  jalr        $v1
label_1ca8c0:
    if (ctx->pc == 0x1CA8C0u) {
        ctx->pc = 0x1CA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8BCu;
        // 0x1ca8c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA8C4u;
        goto label_1ca8c4;
    }
    ctx->pc = 0x1CA8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA8C4u);
        ctx->pc = 0x1CA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8BCu;
        // 0x1ca8c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA8BCu, 0x1CA8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA8C4u;
label_1ca8c4:
    // 0x1ca8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca8c8:
    // 0x1ca8c8: 0x3e00008  jr          $ra
label_1ca8cc:
    if (ctx->pc == 0x1CA8CCu) {
        ctx->pc = 0x1CA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8C8u;
        // 0x1ca8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA8D0u;
        goto label_fallthrough_0x1ca8c8;
    }
    ctx->pc = 0x1CA8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8C8u;
        // 0x1ca8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ca8c8:
    ctx->pc = 0x1CA8D0u;
}
