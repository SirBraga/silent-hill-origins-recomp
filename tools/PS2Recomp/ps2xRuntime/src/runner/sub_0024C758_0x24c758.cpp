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

// Function: sub_0024C758
// Address: 0x24c758 - 0x24c840
void sub_0024C758_0x24c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C758_0x24c758");
#endif

    switch (ctx->pc) {
        case 0x24c758u: goto label_24c758;
        case 0x24c75cu: goto label_24c75c;
        case 0x24c760u: goto label_24c760;
        case 0x24c764u: goto label_24c764;
        case 0x24c768u: goto label_24c768;
        case 0x24c76cu: goto label_24c76c;
        case 0x24c770u: goto label_24c770;
        case 0x24c774u: goto label_24c774;
        case 0x24c778u: goto label_24c778;
        case 0x24c77cu: goto label_24c77c;
        case 0x24c780u: goto label_24c780;
        case 0x24c784u: goto label_24c784;
        case 0x24c788u: goto label_24c788;
        case 0x24c78cu: goto label_24c78c;
        case 0x24c790u: goto label_24c790;
        case 0x24c794u: goto label_24c794;
        case 0x24c798u: goto label_24c798;
        case 0x24c79cu: goto label_24c79c;
        case 0x24c7a0u: goto label_24c7a0;
        case 0x24c7a4u: goto label_24c7a4;
        case 0x24c7a8u: goto label_24c7a8;
        case 0x24c7acu: goto label_24c7ac;
        case 0x24c7b0u: goto label_24c7b0;
        case 0x24c7b4u: goto label_24c7b4;
        case 0x24c7b8u: goto label_24c7b8;
        case 0x24c7bcu: goto label_24c7bc;
        case 0x24c7c0u: goto label_24c7c0;
        case 0x24c7c4u: goto label_24c7c4;
        case 0x24c7c8u: goto label_24c7c8;
        case 0x24c7ccu: goto label_24c7cc;
        case 0x24c7d0u: goto label_24c7d0;
        case 0x24c7d4u: goto label_24c7d4;
        case 0x24c7d8u: goto label_24c7d8;
        case 0x24c7dcu: goto label_24c7dc;
        case 0x24c7e0u: goto label_24c7e0;
        case 0x24c7e4u: goto label_24c7e4;
        case 0x24c7e8u: goto label_24c7e8;
        case 0x24c7ecu: goto label_24c7ec;
        case 0x24c7f0u: goto label_24c7f0;
        case 0x24c7f4u: goto label_24c7f4;
        case 0x24c7f8u: goto label_24c7f8;
        case 0x24c7fcu: goto label_24c7fc;
        case 0x24c800u: goto label_24c800;
        case 0x24c804u: goto label_24c804;
        case 0x24c808u: goto label_24c808;
        case 0x24c80cu: goto label_24c80c;
        case 0x24c810u: goto label_24c810;
        case 0x24c814u: goto label_24c814;
        case 0x24c818u: goto label_24c818;
        case 0x24c81cu: goto label_24c81c;
        case 0x24c820u: goto label_24c820;
        case 0x24c824u: goto label_24c824;
        case 0x24c828u: goto label_24c828;
        case 0x24c82cu: goto label_24c82c;
        case 0x24c830u: goto label_24c830;
        case 0x24c834u: goto label_24c834;
        case 0x24c838u: goto label_24c838;
        case 0x24c83cu: goto label_24c83c;
        default: break;
    }

    ctx->pc = 0x24c758u;

label_24c758:
    // 0x24c758: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_24c75c:
    // 0x24c75c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x24c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_24c760:
    // 0x24c760: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x24c760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_24c764:
    // 0x24c764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c768:
    // 0x24c768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24c76c:
    // 0x24c76c: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x24c76cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_24c770:
    // 0x24c770: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x24c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_24c774:
    // 0x24c774: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24c774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c778:
    // 0x24c778: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x24c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_24c77c:
    // 0x24c77c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x24c77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_24c780:
    // 0x24c780: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x24c780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_24c784:
    // 0x24c784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24c788:
    // 0x24c788: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x24c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_24c78c:
    // 0x24c78c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x24c78cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24c790:
    // 0x24c790: 0x1213001e  beq         $s0, $s3, . + 4 + (0x1E << 2)
label_24c794:
    if (ctx->pc == 0x24C794u) {
        ctx->pc = 0x24C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C790u;
        // 0x24c794: 0x8e360008  lw          $s6, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C798u;
        goto label_24c798;
    }
    ctx->pc = 0x24C790u;
    {
        const bool branch_taken_0x24c790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x24C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C790u;
        // 0x24c794: 0x8e360008  lw          $s6, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c790) {
            ctx->pc = 0x24C80Cu;
            goto label_24c80c;
        }
    }
    ctx->pc = 0x24C798u;
label_24c798:
    // 0x24c798: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24c798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24c79c:
    // 0x24c79c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x24c79cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c7a0:
    // 0x24c7a0: 0x24570fc8  addiu       $s7, $v0, 0xFC8
    ctx->pc = 0x24c7a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24c7a4:
    // 0x24c7a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c7a8:
    // 0x24c7a8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x24c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_24c7ac:
    // 0x24c7ac: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x24c7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24c7b0:
    // 0x24c7b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24c7b4:
    // 0x24c7b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x24c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_24c7b8:
    // 0x24c7b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c7bc:
    // 0x24c7bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24c7c0:
    // 0x24c7c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_24c7c4:
    // 0x24c7c4: 0xc093182  jal         func_24C608
label_24c7c8:
    if (ctx->pc == 0x24C7C8u) {
        ctx->pc = 0x24C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7C4u;
        // 0x24c7c8: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7CCu;
        goto label_24c7cc;
    }
    ctx->pc = 0x24C7C4u;
    SET_GPR_U32(ctx, 31, 0x24C7CCu);
    ctx->pc = 0x24C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7C4u;
    // 0x24c7c8: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C608u, 0x24C7C4u, 0x24C7CCu)) {
        return;
    }
    ctx->pc = 0x24C7CCu;
label_24c7cc:
    // 0x24c7cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24c7d0:
    if (ctx->pc == 0x24C7D0u) {
        ctx->pc = 0x24C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7CCu;
        // 0x24c7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7D4u;
        goto label_24c7d4;
    }
    ctx->pc = 0x24C7CCu;
    {
        const bool branch_taken_0x24c7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7CCu;
        // 0x24c7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7cc) {
            ctx->pc = 0x24C7E8u;
            goto label_24c7e8;
        }
    }
    ctx->pc = 0x24C7D4u;
label_24c7d4:
    // 0x24c7d4: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x24c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_24c7d8:
    // 0x24c7d8: 0x40f809  jalr        $v0
label_24c7dc:
    if (ctx->pc == 0x24C7DCu) {
        ctx->pc = 0x24C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7D8u;
        // 0x24c7dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7E0u;
        goto label_24c7e0;
    }
    ctx->pc = 0x24C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C7E0u);
        ctx->pc = 0x24C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7D8u;
        // 0x24c7dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C7D8u, 0x24C7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C7E0u;
label_24c7e0:
    // 0x24c7e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_24c7e4:
    if (ctx->pc == 0x24C7E4u) {
        ctx->pc = 0x24C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7E0u;
        // 0x24c7e4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7E8u;
        goto label_24c7e8;
    }
    ctx->pc = 0x24C7E0u;
    {
        const bool branch_taken_0x24c7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7E0u;
        // 0x24c7e4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7e0) {
            ctx->pc = 0x24C804u;
            goto label_24c804;
        }
    }
    ctx->pc = 0x24C7E8u;
label_24c7e8:
    // 0x24c7e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x24c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24c7ec:
    // 0x24c7ec: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x24c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_24c7f0:
    // 0x24c7f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_24c7f4:
    // 0x24c7f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24c7f8:
    // 0x24c7f8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x24c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_24c7fc:
    // 0x24c7fc: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x24c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_24c800:
    // 0x24c800: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x24c800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c804:
    // 0x24c804: 0x5613ffe8  bnel        $s0, $s3, . + 4 + (-0x18 << 2)
label_24c808:
    if (ctx->pc == 0x24C808u) {
        ctx->pc = 0x24C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C804u;
        // 0x24c808: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C80Cu;
        goto label_24c80c;
    }
    ctx->pc = 0x24C804u;
    {
        const bool branch_taken_0x24c804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x24c804) {
            ctx->pc = 0x24C808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C804u;
            // 0x24c808: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c7a8;
        }
    }
    ctx->pc = 0x24C80Cu;
label_24c80c:
    // 0x24c80c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24c810:
    // 0x24c810: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x24c810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24c814:
    // 0x24c814: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x24c814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24c818:
    // 0x24c818: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x24c818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24c81c:
    // 0x24c81c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x24c81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24c820:
    // 0x24c820: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x24c820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24c824:
    // 0x24c824: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24c824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24c828:
    // 0x24c828: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x24c828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24c82c:
    // 0x24c82c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x24c82cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c830:
    // 0x24c830: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x24c830u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c834:
    // 0x24c834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c838:
    // 0x24c838: 0x3e00008  jr          $ra
label_24c83c:
    if (ctx->pc == 0x24C83Cu) {
        ctx->pc = 0x24C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C838u;
        // 0x24c83c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C840u;
        goto label_fallthrough_0x24c838;
    }
    ctx->pc = 0x24C838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C838u;
        // 0x24c83c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c838:
    ctx->pc = 0x24C840u;
}
