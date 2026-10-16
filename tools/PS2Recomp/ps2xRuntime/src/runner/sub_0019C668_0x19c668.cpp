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

// Function: sub_0019C668
// Address: 0x19c668 - 0x19c810
void sub_0019C668_0x19c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C668_0x19c668");
#endif

    switch (ctx->pc) {
        case 0x19c668u: goto label_19c668;
        case 0x19c66cu: goto label_19c66c;
        case 0x19c670u: goto label_19c670;
        case 0x19c674u: goto label_19c674;
        case 0x19c678u: goto label_19c678;
        case 0x19c67cu: goto label_19c67c;
        case 0x19c680u: goto label_19c680;
        case 0x19c684u: goto label_19c684;
        case 0x19c688u: goto label_19c688;
        case 0x19c68cu: goto label_19c68c;
        case 0x19c690u: goto label_19c690;
        case 0x19c694u: goto label_19c694;
        case 0x19c698u: goto label_19c698;
        case 0x19c69cu: goto label_19c69c;
        case 0x19c6a0u: goto label_19c6a0;
        case 0x19c6a4u: goto label_19c6a4;
        case 0x19c6a8u: goto label_19c6a8;
        case 0x19c6acu: goto label_19c6ac;
        case 0x19c6b0u: goto label_19c6b0;
        case 0x19c6b4u: goto label_19c6b4;
        case 0x19c6b8u: goto label_19c6b8;
        case 0x19c6bcu: goto label_19c6bc;
        case 0x19c6c0u: goto label_19c6c0;
        case 0x19c6c4u: goto label_19c6c4;
        case 0x19c6c8u: goto label_19c6c8;
        case 0x19c6ccu: goto label_19c6cc;
        case 0x19c6d0u: goto label_19c6d0;
        case 0x19c6d4u: goto label_19c6d4;
        case 0x19c6d8u: goto label_19c6d8;
        case 0x19c6dcu: goto label_19c6dc;
        case 0x19c6e0u: goto label_19c6e0;
        case 0x19c6e4u: goto label_19c6e4;
        case 0x19c6e8u: goto label_19c6e8;
        case 0x19c6ecu: goto label_19c6ec;
        case 0x19c6f0u: goto label_19c6f0;
        case 0x19c6f4u: goto label_19c6f4;
        case 0x19c6f8u: goto label_19c6f8;
        case 0x19c6fcu: goto label_19c6fc;
        case 0x19c700u: goto label_19c700;
        case 0x19c704u: goto label_19c704;
        case 0x19c708u: goto label_19c708;
        case 0x19c70cu: goto label_19c70c;
        case 0x19c710u: goto label_19c710;
        case 0x19c714u: goto label_19c714;
        case 0x19c718u: goto label_19c718;
        case 0x19c71cu: goto label_19c71c;
        case 0x19c720u: goto label_19c720;
        case 0x19c724u: goto label_19c724;
        case 0x19c728u: goto label_19c728;
        case 0x19c72cu: goto label_19c72c;
        case 0x19c730u: goto label_19c730;
        case 0x19c734u: goto label_19c734;
        case 0x19c738u: goto label_19c738;
        case 0x19c73cu: goto label_19c73c;
        case 0x19c740u: goto label_19c740;
        case 0x19c744u: goto label_19c744;
        case 0x19c748u: goto label_19c748;
        case 0x19c74cu: goto label_19c74c;
        case 0x19c750u: goto label_19c750;
        case 0x19c754u: goto label_19c754;
        case 0x19c758u: goto label_19c758;
        case 0x19c75cu: goto label_19c75c;
        case 0x19c760u: goto label_19c760;
        case 0x19c764u: goto label_19c764;
        case 0x19c768u: goto label_19c768;
        case 0x19c76cu: goto label_19c76c;
        case 0x19c770u: goto label_19c770;
        case 0x19c774u: goto label_19c774;
        case 0x19c778u: goto label_19c778;
        case 0x19c77cu: goto label_19c77c;
        case 0x19c780u: goto label_19c780;
        case 0x19c784u: goto label_19c784;
        case 0x19c788u: goto label_19c788;
        case 0x19c78cu: goto label_19c78c;
        case 0x19c790u: goto label_19c790;
        case 0x19c794u: goto label_19c794;
        case 0x19c798u: goto label_19c798;
        case 0x19c79cu: goto label_19c79c;
        case 0x19c7a0u: goto label_19c7a0;
        case 0x19c7a4u: goto label_19c7a4;
        case 0x19c7a8u: goto label_19c7a8;
        case 0x19c7acu: goto label_19c7ac;
        case 0x19c7b0u: goto label_19c7b0;
        case 0x19c7b4u: goto label_19c7b4;
        case 0x19c7b8u: goto label_19c7b8;
        case 0x19c7bcu: goto label_19c7bc;
        case 0x19c7c0u: goto label_19c7c0;
        case 0x19c7c4u: goto label_19c7c4;
        case 0x19c7c8u: goto label_19c7c8;
        case 0x19c7ccu: goto label_19c7cc;
        case 0x19c7d0u: goto label_19c7d0;
        case 0x19c7d4u: goto label_19c7d4;
        case 0x19c7d8u: goto label_19c7d8;
        case 0x19c7dcu: goto label_19c7dc;
        case 0x19c7e0u: goto label_19c7e0;
        case 0x19c7e4u: goto label_19c7e4;
        case 0x19c7e8u: goto label_19c7e8;
        case 0x19c7ecu: goto label_19c7ec;
        case 0x19c7f0u: goto label_19c7f0;
        case 0x19c7f4u: goto label_19c7f4;
        case 0x19c7f8u: goto label_19c7f8;
        case 0x19c7fcu: goto label_19c7fc;
        case 0x19c800u: goto label_19c800;
        case 0x19c804u: goto label_19c804;
        case 0x19c808u: goto label_19c808;
        case 0x19c80cu: goto label_19c80c;
        default: break;
    }

    ctx->pc = 0x19c668u;

label_19c668:
    // 0x19c668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19c66c:
    // 0x19c66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c670:
    // 0x19c670: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19c670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_19c674:
    // 0x19c674: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19c674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c678:
    // 0x19c678: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19c678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c67c:
    // 0x19c67c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19c67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_19c680:
    // 0x19c680: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19c680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_19c684:
    // 0x19c684: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19c684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_19c688:
    // 0x19c688: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19c688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c68c:
    // 0x19c68c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19c690:
    // 0x19c690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19c694:
    // 0x19c694: 0xc081444  jal         func_205110
label_19c698:
    if (ctx->pc == 0x19C698u) {
        ctx->pc = 0x19C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C694u;
        // 0x19c698: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C69Cu;
        goto label_19c69c;
    }
    ctx->pc = 0x19C694u;
    SET_GPR_U32(ctx, 31, 0x19C69Cu);
    ctx->pc = 0x19C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C694u;
    // 0x19c698: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x19C694u, 0x19C69Cu)) {
        return;
    }
    ctx->pc = 0x19C69Cu;
label_19c69c:
    // 0x19c69c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19c69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c6a0:
    // 0x19c6a0: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_19c6a4:
    if (ctx->pc == 0x19C6A4u) {
        ctx->pc = 0x19C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6A0u;
        // 0x19c6a4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6A8u;
        goto label_19c6a8;
    }
    ctx->pc = 0x19C6A0u;
    {
        const bool branch_taken_0x19c6a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6A0u;
        // 0x19c6a4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6a0) {
            ctx->pc = 0x19C7E8u;
            goto label_19c7e8;
        }
    }
    ctx->pc = 0x19C6A8u;
label_19c6a8:
    // 0x19c6a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c6ac:
    // 0x19c6ac: 0x2453a348  addiu       $s3, $v0, -0x5CB8
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943560));
label_19c6b0:
    // 0x19c6b0: 0xc0800da  jal         func_200368
label_19c6b4:
    if (ctx->pc == 0x19C6B4u) {
        ctx->pc = 0x19C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6B0u;
        // 0x19c6b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6B8u;
        goto label_19c6b8;
    }
    ctx->pc = 0x19C6B0u;
    SET_GPR_U32(ctx, 31, 0x19C6B8u);
    ctx->pc = 0x19C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6B0u;
    // 0x19c6b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200368u, 0x19C6B0u, 0x19C6B8u)) {
        return;
    }
    ctx->pc = 0x19C6B8u;
label_19c6b8:
    // 0x19c6b8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x19c6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_19c6bc:
    // 0x19c6bc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_19c6c0:
    // 0x19c6c0: 0x24a5a4b0  addiu       $a1, $a1, -0x5B50
    ctx->pc = 0x19c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943920));
label_19c6c4:
    // 0x19c6c4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x19c6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c6c8:
    // 0x19c6c8: 0x84e40020  lh          $a0, 0x20($a3)
    ctx->pc = 0x19c6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
label_19c6cc:
    // 0x19c6cc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x19c6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c6d0:
    // 0x19c6d0: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x19c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_19c6d4:
    // 0x19c6d4: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x19c6d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c6d8:
    // 0x19c6d8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x19c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19c6dc:
    // 0x19c6dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19c6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c6e0:
    // 0x19c6e0: 0x60f809  jalr        $v1
label_19c6e4:
    if (ctx->pc == 0x19C6E4u) {
        ctx->pc = 0x19C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6E0u;
        // 0x19c6e4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6E8u;
        goto label_19c6e8;
    }
    ctx->pc = 0x19C6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19C6E8u);
        ctx->pc = 0x19C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6E0u;
        // 0x19c6e4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C6E0u, 0x19C6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C6E8u;
label_19c6e8:
    // 0x19c6e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c6ec:
    // 0x19c6ec: 0xc0817e6  jal         func_205F98
label_19c6f0:
    if (ctx->pc == 0x19C6F0u) {
        ctx->pc = 0x19C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6ECu;
        // 0x19c6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6F4u;
        goto label_19c6f4;
    }
    ctx->pc = 0x19C6ECu;
    SET_GPR_U32(ctx, 31, 0x19C6F4u);
    ctx->pc = 0x19C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6ECu;
    // 0x19c6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F98u, 0x19C6ECu, 0x19C6F4u)) {
        return;
    }
    ctx->pc = 0x19C6F4u;
label_19c6f4:
    // 0x19c6f4: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_19c6f8:
    if (ctx->pc == 0x19C6F8u) {
        ctx->pc = 0x19C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6F4u;
        // 0x19c6f8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6FCu;
        goto label_19c6fc;
    }
    ctx->pc = 0x19C6F4u;
    {
        const bool branch_taken_0x19c6f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6F4u;
        // 0x19c6f8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6f4) {
            ctx->pc = 0x19C7ECu;
            goto label_19c7ec;
        }
    }
    ctx->pc = 0x19C6FCu;
label_19c6fc:
    // 0x19c6fc: 0xc067680  jal         func_19DA00
label_19c700:
    if (ctx->pc == 0x19C700u) {
        ctx->pc = 0x19C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6FCu;
        // 0x19c700: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C704u;
        goto label_19c704;
    }
    ctx->pc = 0x19C6FCu;
    SET_GPR_U32(ctx, 31, 0x19C704u);
    ctx->pc = 0x19C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6FCu;
    // 0x19c700: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DA00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19DA00u, 0x19C6FCu, 0x19C704u)) {
        return;
    }
    ctx->pc = 0x19C704u;
label_19c704:
    // 0x19c704: 0xc0808b8  jal         func_2022E0
label_19c708:
    if (ctx->pc == 0x19C708u) {
        ctx->pc = 0x19C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C704u;
        // 0x19c708: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C70Cu;
        goto label_19c70c;
    }
    ctx->pc = 0x19C704u;
    SET_GPR_U32(ctx, 31, 0x19C70Cu);
    ctx->pc = 0x19C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C704u;
    // 0x19c708: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19C704u, 0x19C70Cu)) {
        return;
    }
    ctx->pc = 0x19C70Cu;
label_19c70c:
    // 0x19c70c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_19c710:
    if (ctx->pc == 0x19C710u) {
        ctx->pc = 0x19C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C70Cu;
        // 0x19c710: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C714u;
        goto label_19c714;
    }
    ctx->pc = 0x19C70Cu;
    {
        const bool branch_taken_0x19c70c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C70Cu;
        // 0x19c710: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c70c) {
            ctx->pc = 0x19C760u;
            goto label_19c760;
        }
    }
    ctx->pc = 0x19C714u;
label_19c714:
    // 0x19c714: 0x2451108c  addiu       $s1, $v0, 0x108C
    ctx->pc = 0x19c714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_19c718:
    // 0x19c718: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_19c71c:
    // 0x19c71c: 0x40f809  jalr        $v0
label_19c720:
    if (ctx->pc == 0x19C720u) {
        ctx->pc = 0x19C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C71Cu;
        // 0x19c720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C724u;
        goto label_19c724;
    }
    ctx->pc = 0x19C71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C724u);
        ctx->pc = 0x19C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C71Cu;
        // 0x19c720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C71Cu, 0x19C724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C724u;
label_19c724:
    // 0x19c724: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_19c728:
    if (ctx->pc == 0x19C728u) {
        ctx->pc = 0x19C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C724u;
        // 0x19c728: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C72Cu;
        goto label_19c72c;
    }
    ctx->pc = 0x19C724u;
    {
        const bool branch_taken_0x19c724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c724) {
            ctx->pc = 0x19C728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C724u;
            // 0x19c728: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C764u;
            goto label_19c764;
        }
    }
    ctx->pc = 0x19C72Cu;
label_19c72c:
    // 0x19c72c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x19c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_19c730:
    // 0x19c730: 0x40f809  jalr        $v0
label_19c734:
    if (ctx->pc == 0x19C734u) {
        ctx->pc = 0x19C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C730u;
        // 0x19c734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C738u;
        goto label_19c738;
    }
    ctx->pc = 0x19C730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C738u);
        ctx->pc = 0x19C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C730u;
        // 0x19c734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C730u, 0x19C738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C738u;
label_19c738:
    // 0x19c738: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x19c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c73c:
    // 0x19c73c: 0xc0808f0  jal         func_2023C0
label_19c740:
    if (ctx->pc == 0x19C740u) {
        ctx->pc = 0x19C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C73Cu;
        // 0x19c740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C744u;
        goto label_19c744;
    }
    ctx->pc = 0x19C73Cu;
    SET_GPR_U32(ctx, 31, 0x19C744u);
    ctx->pc = 0x19C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C73Cu;
    // 0x19c740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19C73Cu, 0x19C744u)) {
        return;
    }
    ctx->pc = 0x19C744u;
label_19c744:
    // 0x19c744: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x19c744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_19c748:
    // 0x19c748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c74c:
    // 0x19c74c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x19c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19c750:
    // 0x19c750: 0x40f809  jalr        $v0
label_19c754:
    if (ctx->pc == 0x19C754u) {
        ctx->pc = 0x19C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C750u;
        // 0x19c754: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C758u;
        goto label_19c758;
    }
    ctx->pc = 0x19C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C758u);
        ctx->pc = 0x19C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C750u;
        // 0x19c754: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C750u, 0x19C758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C758u;
label_19c758:
    // 0x19c758: 0x10000002  b           . + 4 + (0x2 << 2)
label_19c75c:
    if (ctx->pc == 0x19C75Cu) {
        ctx->pc = 0x19C760u;
        goto label_19c760;
    }
    ctx->pc = 0x19C758u;
    {
        const bool branch_taken_0x19c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c758) {
            ctx->pc = 0x19C764u;
            goto label_19c764;
        }
    }
    ctx->pc = 0x19C760u;
label_19c760:
    // 0x19c760: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x19c760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_19c764:
    // 0x19c764: 0xc0808b8  jal         func_2022E0
label_19c768:
    if (ctx->pc == 0x19C768u) {
        ctx->pc = 0x19C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C764u;
        // 0x19c768: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C76Cu;
        goto label_19c76c;
    }
    ctx->pc = 0x19C764u;
    SET_GPR_U32(ctx, 31, 0x19C76Cu);
    ctx->pc = 0x19C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C764u;
    // 0x19c768: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19C764u, 0x19C76Cu)) {
        return;
    }
    ctx->pc = 0x19C76Cu;
label_19c76c:
    // 0x19c76c: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_19c770:
    if (ctx->pc == 0x19C770u) {
        ctx->pc = 0x19C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C76Cu;
        // 0x19c770: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C774u;
        goto label_19c774;
    }
    ctx->pc = 0x19C76Cu;
    {
        const bool branch_taken_0x19c76c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C76Cu;
        // 0x19c770: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c76c) {
            ctx->pc = 0x19C7C0u;
            goto label_19c7c0;
        }
    }
    ctx->pc = 0x19C774u;
label_19c774:
    // 0x19c774: 0x2451108c  addiu       $s1, $v0, 0x108C
    ctx->pc = 0x19c774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_19c778:
    // 0x19c778: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_19c77c:
    // 0x19c77c: 0x40f809  jalr        $v0
label_19c780:
    if (ctx->pc == 0x19C780u) {
        ctx->pc = 0x19C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C77Cu;
        // 0x19c780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C784u;
        goto label_19c784;
    }
    ctx->pc = 0x19C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C784u);
        ctx->pc = 0x19C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C77Cu;
        // 0x19c780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C77Cu, 0x19C784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C784u;
label_19c784:
    // 0x19c784: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_19c788:
    if (ctx->pc == 0x19C788u) {
        ctx->pc = 0x19C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C784u;
        // 0x19c788: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C78Cu;
        goto label_19c78c;
    }
    ctx->pc = 0x19C784u;
    {
        const bool branch_taken_0x19c784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c784) {
            ctx->pc = 0x19C788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C784u;
            // 0x19c788: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C7C4u;
            goto label_19c7c4;
        }
    }
    ctx->pc = 0x19C78Cu;
label_19c78c:
    // 0x19c78c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x19c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_19c790:
    // 0x19c790: 0x40f809  jalr        $v0
label_19c794:
    if (ctx->pc == 0x19C794u) {
        ctx->pc = 0x19C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C790u;
        // 0x19c794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C798u;
        goto label_19c798;
    }
    ctx->pc = 0x19C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C798u);
        ctx->pc = 0x19C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C790u;
        // 0x19c794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C790u, 0x19C798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C798u;
label_19c798:
    // 0x19c798: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x19c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c79c:
    // 0x19c79c: 0xc0808f0  jal         func_2023C0
label_19c7a0:
    if (ctx->pc == 0x19C7A0u) {
        ctx->pc = 0x19C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C79Cu;
        // 0x19c7a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7A4u;
        goto label_19c7a4;
    }
    ctx->pc = 0x19C79Cu;
    SET_GPR_U32(ctx, 31, 0x19C7A4u);
    ctx->pc = 0x19C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C79Cu;
    // 0x19c7a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19C79Cu, 0x19C7A4u)) {
        return;
    }
    ctx->pc = 0x19C7A4u;
label_19c7a4:
    // 0x19c7a4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x19c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_19c7a8:
    // 0x19c7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c7ac:
    // 0x19c7ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x19c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19c7b0:
    // 0x19c7b0: 0x40f809  jalr        $v0
label_19c7b4:
    if (ctx->pc == 0x19C7B4u) {
        ctx->pc = 0x19C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7B0u;
        // 0x19c7b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7B8u;
        goto label_19c7b8;
    }
    ctx->pc = 0x19C7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C7B8u);
        ctx->pc = 0x19C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7B0u;
        // 0x19c7b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C7B0u, 0x19C7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C7B8u;
label_19c7b8:
    // 0x19c7b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_19c7bc:
    if (ctx->pc == 0x19C7BCu) {
        ctx->pc = 0x19C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7B8u;
        // 0x19c7bc: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7C0u;
        goto label_19c7c0;
    }
    ctx->pc = 0x19C7B8u;
    {
        const bool branch_taken_0x19c7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7B8u;
        // 0x19c7bc: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7b8) {
            ctx->pc = 0x19C7C8u;
            goto label_19c7c8;
        }
    }
    ctx->pc = 0x19C7C0u;
label_19c7c0:
    // 0x19c7c0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x19c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_19c7c4:
    // 0x19c7c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19c7c8:
    // 0x19c7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c7cc:
    // 0x19c7cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c7d0:
    // 0x19c7d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c7d4:
    // 0x19c7d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c7d8:
    // 0x19c7d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c7dc:
    // 0x19c7dc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x19c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_19c7e0:
    // 0x19c7e0: 0xc080608  jal         func_201820
label_19c7e4:
    if (ctx->pc == 0x19C7E4u) {
        ctx->pc = 0x19C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E0u;
        // 0x19c7e4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7E8u;
        goto label_19c7e8;
    }
    ctx->pc = 0x19C7E0u;
    SET_GPR_U32(ctx, 31, 0x19C7E8u);
    ctx->pc = 0x19C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C7E0u;
    // 0x19c7e4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201820u, 0x19C7E0u, 0x19C7E8u)) {
        return;
    }
    ctx->pc = 0x19C7E8u;
label_19c7e8:
    // 0x19c7e8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x19c7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19c7ec:
    // 0x19c7ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19c7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19c7f0:
    // 0x19c7f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19c7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19c7f4:
    // 0x19c7f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19c7f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c7f8:
    // 0x19c7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c7fc:
    // 0x19c7fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19c7fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c800:
    // 0x19c800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c804:
    // 0x19c804: 0x3e00008  jr          $ra
label_19c808:
    if (ctx->pc == 0x19C808u) {
        ctx->pc = 0x19C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C804u;
        // 0x19c808: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C80Cu;
        goto label_19c80c;
    }
    ctx->pc = 0x19C804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C804u;
        // 0x19c808: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C80Cu;
label_19c80c:
    // 0x19c80c: 0x0  nop
    ctx->pc = 0x19c80cu;
    // NOP
    ctx->pc = 0x19c810u;
}
