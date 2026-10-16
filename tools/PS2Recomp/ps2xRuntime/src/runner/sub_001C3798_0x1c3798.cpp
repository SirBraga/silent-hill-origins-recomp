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

// Function: sub_001C3798
// Address: 0x1c3798 - 0x1c3838
void sub_001C3798_0x1c3798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3798_0x1c3798");
#endif

    switch (ctx->pc) {
        case 0x1c3798u: goto label_1c3798;
        case 0x1c379cu: goto label_1c379c;
        case 0x1c37a0u: goto label_1c37a0;
        case 0x1c37a4u: goto label_1c37a4;
        case 0x1c37a8u: goto label_1c37a8;
        case 0x1c37acu: goto label_1c37ac;
        case 0x1c37b0u: goto label_1c37b0;
        case 0x1c37b4u: goto label_1c37b4;
        case 0x1c37b8u: goto label_1c37b8;
        case 0x1c37bcu: goto label_1c37bc;
        case 0x1c37c0u: goto label_1c37c0;
        case 0x1c37c4u: goto label_1c37c4;
        case 0x1c37c8u: goto label_1c37c8;
        case 0x1c37ccu: goto label_1c37cc;
        case 0x1c37d0u: goto label_1c37d0;
        case 0x1c37d4u: goto label_1c37d4;
        case 0x1c37d8u: goto label_1c37d8;
        case 0x1c37dcu: goto label_1c37dc;
        case 0x1c37e0u: goto label_1c37e0;
        case 0x1c37e4u: goto label_1c37e4;
        case 0x1c37e8u: goto label_1c37e8;
        case 0x1c37ecu: goto label_1c37ec;
        case 0x1c37f0u: goto label_1c37f0;
        case 0x1c37f4u: goto label_1c37f4;
        case 0x1c37f8u: goto label_1c37f8;
        case 0x1c37fcu: goto label_1c37fc;
        case 0x1c3800u: goto label_1c3800;
        case 0x1c3804u: goto label_1c3804;
        case 0x1c3808u: goto label_1c3808;
        case 0x1c380cu: goto label_1c380c;
        case 0x1c3810u: goto label_1c3810;
        case 0x1c3814u: goto label_1c3814;
        case 0x1c3818u: goto label_1c3818;
        case 0x1c381cu: goto label_1c381c;
        case 0x1c3820u: goto label_1c3820;
        case 0x1c3824u: goto label_1c3824;
        case 0x1c3828u: goto label_1c3828;
        case 0x1c382cu: goto label_1c382c;
        case 0x1c3830u: goto label_1c3830;
        case 0x1c3834u: goto label_1c3834;
        default: break;
    }

    ctx->pc = 0x1c3798u;

label_1c3798:
    // 0x1c3798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c379c:
    // 0x1c379c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c37a0:
    // 0x1c37a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c37a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c37a4:
    // 0x1c37a4: 0xa28018  mult        $s0, $a1, $v0
    ctx->pc = 0x1c37a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1c37a8:
    // 0x1c37a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c37a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c37ac:
    // 0x1c37ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c37acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c37b0:
    // 0x1c37b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c37b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c37b4:
    // 0x1c37b4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1c37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c37b8:
    // 0x1c37b8: 0x8862085b  lwl         $v0, 0x85B($v1)
    ctx->pc = 0x1c37b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 2139); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1c37bc:
    // 0x1c37bc: 0x98620858  lwr         $v0, 0x858($v1)
    ctx->pc = 0x1c37bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 2136); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1c37c0:
    // 0x1c37c0: 0xaa220253  swl         $v0, 0x253($s1)
    ctx->pc = 0x1c37c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 595); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1c37c4:
    // 0x1c37c4: 0xba220250  swr         $v0, 0x250($s1)
    ctx->pc = 0x1c37c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 592); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1c37c8:
    // 0x1c37c8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1c37c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c37cc:
    // 0x1c37cc: 0x26100858  addiu       $s0, $s0, 0x858
    ctx->pc = 0x1c37ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2136));
label_1c37d0:
    // 0x1c37d0: 0x8e260818  lw          $a2, 0x818($s1)
    ctx->pc = 0x1c37d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
label_1c37d4:
    // 0x1c37d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c37d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c37d8:
    // 0x1c37d8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c37dc:
    // 0x1c37dc: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1c37dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1c37e0:
    // 0x1c37e0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1c37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1c37e4:
    // 0x1c37e4: 0x60f809  jalr        $v1
label_1c37e8:
    if (ctx->pc == 0x1C37E8u) {
        ctx->pc = 0x1C37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37E4u;
        // 0x1c37e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37ECu;
        goto label_1c37ec;
    }
    ctx->pc = 0x1C37E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C37ECu);
        ctx->pc = 0x1C37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37E4u;
        // 0x1c37e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C37E4u, 0x1C37ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C37ECu;
label_1c37ec:
    // 0x1c37ec: 0x8e26081c  lw          $a2, 0x81C($s1)
    ctx->pc = 0x1c37ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
label_1c37f0:
    // 0x1c37f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c37f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c37f4:
    // 0x1c37f4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c37f8:
    // 0x1c37f8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1c37f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1c37fc:
    // 0x1c37fc: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1c37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1c3800:
    // 0x1c3800: 0x60f809  jalr        $v1
label_1c3804:
    if (ctx->pc == 0x1C3804u) {
        ctx->pc = 0x1C3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3800u;
        // 0x1c3804: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3808u;
        goto label_1c3808;
    }
    ctx->pc = 0x1C3800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3808u);
        ctx->pc = 0x1C3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3800u;
        // 0x1c3804: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3800u, 0x1C3808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3808u;
label_1c3808:
    // 0x1c3808: 0x8e260820  lw          $a2, 0x820($s1)
    ctx->pc = 0x1c3808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
label_1c380c:
    // 0x1c380c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c380cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3810:
    // 0x1c3810: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c3810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c3814:
    // 0x1c3814: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1c3814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1c3818:
    // 0x1c3818: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1c3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1c381c:
    // 0x1c381c: 0x60f809  jalr        $v1
label_1c3820:
    if (ctx->pc == 0x1C3820u) {
        ctx->pc = 0x1C3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C381Cu;
        // 0x1c3820: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3824u;
        goto label_1c3824;
    }
    ctx->pc = 0x1C381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3824u);
        ctx->pc = 0x1C3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C381Cu;
        // 0x1c3820: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C381Cu, 0x1C3824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3824u;
label_1c3824:
    // 0x1c3824: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3828:
    // 0x1c3828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c382c:
    // 0x1c382c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c382cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3830:
    // 0x1c3830: 0x3e00008  jr          $ra
label_1c3834:
    if (ctx->pc == 0x1C3834u) {
        ctx->pc = 0x1C3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3830u;
        // 0x1c3834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3838u;
        goto label_fallthrough_0x1c3830;
    }
    ctx->pc = 0x1C3830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3830u;
        // 0x1c3834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3830:
    ctx->pc = 0x1C3838u;
}
