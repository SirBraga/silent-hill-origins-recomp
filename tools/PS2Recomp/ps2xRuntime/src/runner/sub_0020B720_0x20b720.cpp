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

// Function: sub_0020B720
// Address: 0x20b720 - 0x20b7e8
void sub_0020B720_0x20b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B720_0x20b720");
#endif

    switch (ctx->pc) {
        case 0x20b720u: goto label_20b720;
        case 0x20b724u: goto label_20b724;
        case 0x20b728u: goto label_20b728;
        case 0x20b72cu: goto label_20b72c;
        case 0x20b730u: goto label_20b730;
        case 0x20b734u: goto label_20b734;
        case 0x20b738u: goto label_20b738;
        case 0x20b73cu: goto label_20b73c;
        case 0x20b740u: goto label_20b740;
        case 0x20b744u: goto label_20b744;
        case 0x20b748u: goto label_20b748;
        case 0x20b74cu: goto label_20b74c;
        case 0x20b750u: goto label_20b750;
        case 0x20b754u: goto label_20b754;
        case 0x20b758u: goto label_20b758;
        case 0x20b75cu: goto label_20b75c;
        case 0x20b760u: goto label_20b760;
        case 0x20b764u: goto label_20b764;
        case 0x20b768u: goto label_20b768;
        case 0x20b76cu: goto label_20b76c;
        case 0x20b770u: goto label_20b770;
        case 0x20b774u: goto label_20b774;
        case 0x20b778u: goto label_20b778;
        case 0x20b77cu: goto label_20b77c;
        case 0x20b780u: goto label_20b780;
        case 0x20b784u: goto label_20b784;
        case 0x20b788u: goto label_20b788;
        case 0x20b78cu: goto label_20b78c;
        case 0x20b790u: goto label_20b790;
        case 0x20b794u: goto label_20b794;
        case 0x20b798u: goto label_20b798;
        case 0x20b79cu: goto label_20b79c;
        case 0x20b7a0u: goto label_20b7a0;
        case 0x20b7a4u: goto label_20b7a4;
        case 0x20b7a8u: goto label_20b7a8;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b7b0u: goto label_20b7b0;
        case 0x20b7b4u: goto label_20b7b4;
        case 0x20b7b8u: goto label_20b7b8;
        case 0x20b7bcu: goto label_20b7bc;
        case 0x20b7c0u: goto label_20b7c0;
        case 0x20b7c4u: goto label_20b7c4;
        case 0x20b7c8u: goto label_20b7c8;
        case 0x20b7ccu: goto label_20b7cc;
        case 0x20b7d0u: goto label_20b7d0;
        case 0x20b7d4u: goto label_20b7d4;
        case 0x20b7d8u: goto label_20b7d8;
        case 0x20b7dcu: goto label_20b7dc;
        case 0x20b7e0u: goto label_20b7e0;
        case 0x20b7e4u: goto label_20b7e4;
        default: break;
    }

    ctx->pc = 0x20b720u;

label_20b720:
    // 0x20b720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b724:
    // 0x20b724: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x20b724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20b728:
    // 0x20b728: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20b72c:
    // 0x20b72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20b730:
    // 0x20b730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b734:
    // 0x20b734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b738:
    // 0x20b738: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20b73c:
    // 0x20b73c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b740:
    // 0x20b740: 0x40f809  jalr        $v0
label_20b744:
    if (ctx->pc == 0x20B744u) {
        ctx->pc = 0x20B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B740u;
        // 0x20b744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B748u;
        goto label_20b748;
    }
    ctx->pc = 0x20B740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B748u);
        ctx->pc = 0x20B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B740u;
        // 0x20b744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B740u, 0x20B748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B748u;
label_20b748:
    // 0x20b748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b74c:
    // 0x20b74c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b750:
    // 0x20b750: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20b754:
    // 0x20b754: 0xae3001c4  sw          $s0, 0x1C4($s1)
    ctx->pc = 0x20b754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
label_20b758:
    // 0x20b758: 0x2442b7e8  addiu       $v0, $v0, -0x4818
    ctx->pc = 0x20b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948840));
label_20b75c:
    // 0x20b75c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20b760:
    // 0x20b760: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20b764:
    // 0x20b764: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x20b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_20b768:
    // 0x20b768: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x20b768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_20b76c:
    // 0x20b76c: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x20b76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_20b770:
    // 0x20b770: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x20b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_20b774:
    // 0x20b774: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x20b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_20b778:
    // 0x20b778: 0x1444000e  bne         $v0, $a0, . + 4 + (0xE << 2)
label_20b77c:
    if (ctx->pc == 0x20B77Cu) {
        ctx->pc = 0x20B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B778u;
        // 0x20b77c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B780u;
        goto label_20b780;
    }
    ctx->pc = 0x20B778u;
    {
        const bool branch_taken_0x20b778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B778u;
        // 0x20b77c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b778) {
            ctx->pc = 0x20B7B4u;
            goto label_20b7b4;
        }
    }
    ctx->pc = 0x20B780u;
label_20b780:
    // 0x20b780: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20b784:
    // 0x20b784: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20b784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_20b788:
    // 0x20b788: 0x2442b800  addiu       $v0, $v0, -0x4800
    ctx->pc = 0x20b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
label_20b78c:
    // 0x20b78c: 0x2463b490  addiu       $v1, $v1, -0x4B70
    ctx->pc = 0x20b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947984));
label_20b790:
    // 0x20b790: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20b790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_20b794:
    // 0x20b794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b798:
    // 0x20b798: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20b798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_20b79c:
    // 0x20b79c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20b7a0:
    // 0x20b7a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20b7a4:
    // 0x20b7a4: 0x40f809  jalr        $v0
label_20b7a8:
    if (ctx->pc == 0x20B7A8u) {
        ctx->pc = 0x20B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7A4u;
        // 0x20b7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7ACu;
        goto label_20b7ac;
    }
    ctx->pc = 0x20B7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B7ACu);
        ctx->pc = 0x20B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7A4u;
        // 0x20b7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B7A4u, 0x20B7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B7ACu;
label_20b7ac:
    // 0x20b7ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_20b7b0:
    if (ctx->pc == 0x20B7B0u) {
        ctx->pc = 0x20B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7ACu;
        // 0x20b7b0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7B4u;
        goto label_20b7b4;
    }
    ctx->pc = 0x20B7ACu;
    {
        const bool branch_taken_0x20b7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7ACu;
        // 0x20b7b0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7ac) {
            ctx->pc = 0x20B7CCu;
            goto label_20b7cc;
        }
    }
    ctx->pc = 0x20B7B4u;
label_20b7b4:
    // 0x20b7b4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_20b7b8:
    // 0x20b7b8: 0x2442b918  addiu       $v0, $v0, -0x46E8
    ctx->pc = 0x20b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949144));
label_20b7bc:
    // 0x20b7bc: 0x2463b2c0  addiu       $v1, $v1, -0x4D40
    ctx->pc = 0x20b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947520));
label_20b7c0:
    // 0x20b7c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_20b7c4:
    // 0x20b7c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_20b7c8:
    // 0x20b7c8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_20b7cc:
    // 0x20b7cc: 0xc082c62  jal         func_20B188
label_20b7d0:
    if (ctx->pc == 0x20B7D0u) {
        ctx->pc = 0x20B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7CCu;
        // 0x20b7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7D4u;
        goto label_20b7d4;
    }
    ctx->pc = 0x20B7CCu;
    SET_GPR_U32(ctx, 31, 0x20B7D4u);
    ctx->pc = 0x20B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7CCu;
    // 0x20b7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20B188u, 0x20B7CCu, 0x20B7D4u)) {
        return;
    }
    ctx->pc = 0x20B7D4u;
label_20b7d4:
    // 0x20b7d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b7d8:
    // 0x20b7d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b7dc:
    // 0x20b7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b7e0:
    // 0x20b7e0: 0x3e00008  jr          $ra
label_20b7e4:
    if (ctx->pc == 0x20B7E4u) {
        ctx->pc = 0x20B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E0u;
        // 0x20b7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B7E8u;
        goto label_fallthrough_0x20b7e0;
    }
    ctx->pc = 0x20B7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E0u;
        // 0x20b7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b7e0:
    ctx->pc = 0x20B7E8u;
}
