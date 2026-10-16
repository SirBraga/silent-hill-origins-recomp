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

// Function: sub_0020F668
// Address: 0x20f668 - 0x20f8b8
void sub_0020F668_0x20f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F668_0x20f668");
#endif

    switch (ctx->pc) {
        case 0x20f668u: goto label_20f668;
        case 0x20f66cu: goto label_20f66c;
        case 0x20f670u: goto label_20f670;
        case 0x20f674u: goto label_20f674;
        case 0x20f678u: goto label_20f678;
        case 0x20f67cu: goto label_20f67c;
        case 0x20f680u: goto label_20f680;
        case 0x20f684u: goto label_20f684;
        case 0x20f688u: goto label_20f688;
        case 0x20f68cu: goto label_20f68c;
        case 0x20f690u: goto label_20f690;
        case 0x20f694u: goto label_20f694;
        case 0x20f698u: goto label_20f698;
        case 0x20f69cu: goto label_20f69c;
        case 0x20f6a0u: goto label_20f6a0;
        case 0x20f6a4u: goto label_20f6a4;
        case 0x20f6a8u: goto label_20f6a8;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6b0u: goto label_20f6b0;
        case 0x20f6b4u: goto label_20f6b4;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6bcu: goto label_20f6bc;
        case 0x20f6c0u: goto label_20f6c0;
        case 0x20f6c4u: goto label_20f6c4;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6ccu: goto label_20f6cc;
        case 0x20f6d0u: goto label_20f6d0;
        case 0x20f6d4u: goto label_20f6d4;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f6dcu: goto label_20f6dc;
        case 0x20f6e0u: goto label_20f6e0;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f6e8u: goto label_20f6e8;
        case 0x20f6ecu: goto label_20f6ec;
        case 0x20f6f0u: goto label_20f6f0;
        case 0x20f6f4u: goto label_20f6f4;
        case 0x20f6f8u: goto label_20f6f8;
        case 0x20f6fcu: goto label_20f6fc;
        case 0x20f700u: goto label_20f700;
        case 0x20f704u: goto label_20f704;
        case 0x20f708u: goto label_20f708;
        case 0x20f70cu: goto label_20f70c;
        case 0x20f710u: goto label_20f710;
        case 0x20f714u: goto label_20f714;
        case 0x20f718u: goto label_20f718;
        case 0x20f71cu: goto label_20f71c;
        case 0x20f720u: goto label_20f720;
        case 0x20f724u: goto label_20f724;
        case 0x20f728u: goto label_20f728;
        case 0x20f72cu: goto label_20f72c;
        case 0x20f730u: goto label_20f730;
        case 0x20f734u: goto label_20f734;
        case 0x20f738u: goto label_20f738;
        case 0x20f73cu: goto label_20f73c;
        case 0x20f740u: goto label_20f740;
        case 0x20f744u: goto label_20f744;
        case 0x20f748u: goto label_20f748;
        case 0x20f74cu: goto label_20f74c;
        case 0x20f750u: goto label_20f750;
        case 0x20f754u: goto label_20f754;
        case 0x20f758u: goto label_20f758;
        case 0x20f75cu: goto label_20f75c;
        case 0x20f760u: goto label_20f760;
        case 0x20f764u: goto label_20f764;
        case 0x20f768u: goto label_20f768;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f770u: goto label_20f770;
        case 0x20f774u: goto label_20f774;
        case 0x20f778u: goto label_20f778;
        case 0x20f77cu: goto label_20f77c;
        case 0x20f780u: goto label_20f780;
        case 0x20f784u: goto label_20f784;
        case 0x20f788u: goto label_20f788;
        case 0x20f78cu: goto label_20f78c;
        case 0x20f790u: goto label_20f790;
        case 0x20f794u: goto label_20f794;
        case 0x20f798u: goto label_20f798;
        case 0x20f79cu: goto label_20f79c;
        case 0x20f7a0u: goto label_20f7a0;
        case 0x20f7a4u: goto label_20f7a4;
        case 0x20f7a8u: goto label_20f7a8;
        case 0x20f7acu: goto label_20f7ac;
        case 0x20f7b0u: goto label_20f7b0;
        case 0x20f7b4u: goto label_20f7b4;
        case 0x20f7b8u: goto label_20f7b8;
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7c4u: goto label_20f7c4;
        case 0x20f7c8u: goto label_20f7c8;
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f7d0u: goto label_20f7d0;
        case 0x20f7d4u: goto label_20f7d4;
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        default: break;
    }

    ctx->pc = 0x20f668u;

label_20f668:
    // 0x20f668: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x20f668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_20f66c:
    // 0x20f66c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x20f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_20f670:
    // 0x20f670: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x20f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_20f674:
    // 0x20f674: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20f674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f678:
    // 0x20f678: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x20f678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_20f67c:
    // 0x20f67c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x20f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_20f680:
    // 0x20f680: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x20f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_20f684:
    // 0x20f684: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x20f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_20f688:
    // 0x20f688: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x20f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_20f68c:
    // 0x20f68c: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x20f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_20f690:
    // 0x20f690: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20f694:
    // 0x20f694: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_20f698:
    // 0x20f698: 0x8e7701cc  lw          $s7, 0x1CC($s3)
    ctx->pc = 0x20f698u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
label_20f69c:
    // 0x20f69c: 0xc083d2e  jal         func_20F4B8
label_20f6a0:
    if (ctx->pc == 0x20F6A0u) {
        ctx->pc = 0x20F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F69Cu;
        // 0x20f6a0: 0x26e50020  addiu       $a1, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6A4u;
        goto label_20f6a4;
    }
    ctx->pc = 0x20F69Cu;
    SET_GPR_U32(ctx, 31, 0x20F6A4u);
    ctx->pc = 0x20F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F69Cu;
    // 0x20f6a0: 0x26e50020  addiu       $a1, $s7, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F4B8u, 0x20F69Cu, 0x20F6A4u)) {
        return;
    }
    ctx->pc = 0x20F6A4u;
label_20f6a4:
    // 0x20f6a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20f6a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f6a8:
    // 0x20f6a8: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x20f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_20f6ac:
    // 0x20f6ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20f6b0:
    // 0x20f6b0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_20f6b4:
    if (ctx->pc == 0x20F6B4u) {
        ctx->pc = 0x20F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6B0u;
        // 0x20f6b4: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6B8u;
        goto label_20f6b8;
    }
    ctx->pc = 0x20F6B0u;
    {
        const bool branch_taken_0x20f6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6B0u;
        // 0x20f6b4: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6b0) {
            ctx->pc = 0x20F700u;
            goto label_20f700;
        }
    }
    ctx->pc = 0x20F6B8u;
label_20f6b8:
    // 0x20f6b8: 0x2407005e  addiu       $a3, $zero, 0x5E
    ctx->pc = 0x20f6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_20f6bc:
    // 0x20f6bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20f6c0:
    // 0x20f6c0: 0xacd50018  sw          $s5, 0x18($a2)
    ctx->pc = 0x20f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 21));
label_20f6c4:
    // 0x20f6c4: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x20f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_20f6c8:
    // 0x20f6c8: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x20f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_20f6cc:
    // 0x20f6cc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x20f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_20f6d0:
    // 0x20f6d0: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x20f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_20f6d4:
    // 0x20f6d4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x20f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_20f6d8:
    // 0x20f6d8: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x20f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_20f6dc:
    // 0x20f6dc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x20f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_20f6e0:
    // 0x20f6e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x20f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20f6e4:
    // 0x20f6e4: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x20f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
label_20f6e8:
    // 0x20f6e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20f6ec:
    // 0x20f6ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20f6f0:
    // 0x20f6f0: 0x60f809  jalr        $v1
label_20f6f4:
    if (ctx->pc == 0x20F6F4u) {
        ctx->pc = 0x20F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F0u;
        // 0x20f6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6F8u;
        goto label_20f6f8;
    }
    ctx->pc = 0x20F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20F6F8u);
        ctx->pc = 0x20F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F0u;
        // 0x20f6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F6F0u, 0x20F6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F6F8u;
label_20f6f8:
    // 0x20f6f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_20f6fc:
    if (ctx->pc == 0x20F6FCu) {
        ctx->pc = 0x20F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F8u;
        // 0x20f6fc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F700u;
        goto label_20f700;
    }
    ctx->pc = 0x20F6F8u;
    {
        const bool branch_taken_0x20f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F8u;
        // 0x20f6fc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6f8) {
            ctx->pc = 0x20F728u;
            goto label_20f728;
        }
    }
    ctx->pc = 0x20F700u;
label_20f700:
    // 0x20f700: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x20f700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_20f704:
    // 0x20f704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20f704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20f708:
    // 0x20f708: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x20f708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_20f70c:
    // 0x20f70c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20f710:
    // 0x20f710: 0xac550018  sw          $s5, 0x18($v0)
    ctx->pc = 0x20f710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 21));
label_20f714:
    // 0x20f714: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x20f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20f718:
    // 0x20f718: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20f71c:
    // 0x20f71c: 0x40f809  jalr        $v0
label_20f720:
    if (ctx->pc == 0x20F720u) {
        ctx->pc = 0x20F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F71Cu;
        // 0x20f720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F724u;
        goto label_20f724;
    }
    ctx->pc = 0x20F71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F724u);
        ctx->pc = 0x20F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F71Cu;
        // 0x20f720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F71Cu, 0x20F724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F724u;
label_20f724:
    // 0x20f724: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x20f724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20f728:
    // 0x20f728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20f728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20f72c:
    // 0x20f72c: 0x8e670078  lw          $a3, 0x78($s3)
    ctx->pc = 0x20f72cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_20f730:
    // 0x20f730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f734:
    // 0x20f734: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20f738:
    // 0x20f738: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x20f738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20f73c:
    // 0x20f73c: 0x40f809  jalr        $v0
label_20f740:
    if (ctx->pc == 0x20F740u) {
        ctx->pc = 0x20F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F73Cu;
        // 0x20f740: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F744u;
        goto label_20f744;
    }
    ctx->pc = 0x20F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F744u);
        ctx->pc = 0x20F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F73Cu;
        // 0x20f740: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F73Cu, 0x20F744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F744u;
label_20f744:
    // 0x20f744: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x20f744u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f748:
    // 0x20f748: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_20f74c:
    // 0x20f74c: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
label_20f750:
    if (ctx->pc == 0x20F750u) {
        ctx->pc = 0x20F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F74Cu;
        // 0x20f750: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F754u;
        goto label_20f754;
    }
    ctx->pc = 0x20F74Cu;
    {
        const bool branch_taken_0x20f74c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F74Cu;
        // 0x20f750: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f74c) {
            ctx->pc = 0x20F880u;
            goto label_20f880;
        }
    }
    ctx->pc = 0x20F754u;
label_20f754:
    // 0x20f754: 0x26e20020  addiu       $v0, $s7, 0x20
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_20f758:
    // 0x20f758: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20f758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20f75c:
    // 0x20f75c: 0x0  nop
    ctx->pc = 0x20f75cu;
    // NOP
label_20f760:
    // 0x20f760: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20f760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20f764:
    // 0x20f764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20f764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f768:
    // 0x20f768: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20f76c:
    // 0x20f76c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x20f76cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f770:
    // 0x20f770: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x20f770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_20f774:
    // 0x20f774: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20f778:
    // 0x20f778: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f77c:
    // 0x20f77c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20f77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f780:
    // 0x20f780: 0x291001a  div         $zero, $s4, $s1
    ctx->pc = 0x20f780u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20f784:
    // 0x20f784: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_20f788:
    if (ctx->pc == 0x20F788u) {
        ctx->pc = 0x20F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F784u;
        // 0x20f788: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F78Cu;
        goto label_20f78c;
    }
    ctx->pc = 0x20F784u;
    {
        const bool branch_taken_0x20f784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f784) {
            ctx->pc = 0x20F788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F784u;
            // 0x20f788: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F78Cu;
            goto label_20f78c;
        }
    }
    ctx->pc = 0x20F78Cu;
label_20f78c:
    // 0x20f78c: 0x9012  mflo        $s2
    ctx->pc = 0x20f78cu;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_20f790:
    // 0x20f790: 0x1a200036  blez        $s1, . + 4 + (0x36 << 2)
label_20f794:
    if (ctx->pc == 0x20F794u) {
        ctx->pc = 0x20F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F790u;
        // 0x20f794: 0x240602d  daddu       $t4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F798u;
        goto label_20f798;
    }
    ctx->pc = 0x20F790u;
    {
        const bool branch_taken_0x20f790 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x20F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F790u;
        // 0x20f794: 0x240602d  daddu       $t4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f790) {
            ctx->pc = 0x20F86Cu;
            goto label_20f86c;
        }
    }
    ctx->pc = 0x20F798u;
label_20f798:
    // 0x20f798: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x20f798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_20f79c:
    // 0x20f79c: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x20f79cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20f7a0:
    // 0x20f7a0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x20f7a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20f7a4:
    // 0x20f7a4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x20f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_20f7a8:
    // 0x20f7a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f7ac:
    // 0x20f7ac: 0x3b043  sra         $s6, $v1, 1
    ctx->pc = 0x20f7acu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 1));
label_20f7b0:
    // 0x20f7b0: 0x20f0018  mult        $zero, $s0, $t7
    ctx->pc = 0x20f7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20f7b4:
    // 0x20f7b4: 0x0  nop
    ctx->pc = 0x20f7b4u;
    // NOP
label_20f7b8:
    // 0x20f7b8: 0x7fac0010  sq          $t4, 0x10($sp)
    ctx->pc = 0x20f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 12));
label_20f7bc:
    // 0x20f7bc: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x20f7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_20f7c0:
    // 0x20f7c0: 0x7fae0030  sq          $t6, 0x30($sp)
    ctx->pc = 0x20f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 14));
label_20f7c4:
    // 0x20f7c4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x20f7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20f7c8:
    // 0x20f7c8: 0x7faf0040  sq          $t7, 0x40($sp)
    ctx->pc = 0x20f7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 15));
label_20f7cc:
    // 0x20f7cc: 0x1012  mflo        $v0
    ctx->pc = 0x20f7ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_20f7d0:
    // 0x20f7d0: 0x2010  mfhi        $a0
    ctx->pc = 0x20f7d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_20f7d4:
    // 0x20f7d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20f7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20f7d8:
    // 0x20f7d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20f7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_20f7dc:
    // 0x20f7dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20f7e0:
    // 0x20f7e0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20f7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_20f7e4:
    // 0x20f7e4: 0xc0ca2b8  jal         func_328AE0
label_20f7e8:
    if (ctx->pc == 0x20F7E8u) {
        ctx->pc = 0x20F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7E4u;
        // 0x20f7e8: 0x2c4202d  daddu       $a0, $s6, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7ECu;
        goto label_20f7ec;
    }
    ctx->pc = 0x20F7E4u;
    SET_GPR_U32(ctx, 31, 0x20F7ECu);
    ctx->pc = 0x20F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F7E4u;
    // 0x20f7e8: 0x2c4202d  daddu       $a0, $s6, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20F7E4u, 0x20F7ECu)) {
        return;
    }
    ctx->pc = 0x20F7ECu;
label_20f7ec:
    // 0x20f7ec: 0x7bac0010  lq          $t4, 0x10($sp)
    ctx->pc = 0x20f7ecu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f7f0:
    // 0x20f7f0: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x20f7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
label_20f7f4:
    // 0x20f7f4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x20f7f4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_20f7f8:
    // 0x20f7f8: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x20f7f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20f7fc:
    // 0x20f7fc: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x20f7fcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f800:
    // 0x20f800: 0x20c3018  mult        $a2, $s0, $t4
    ctx->pc = 0x20f800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_20f804:
    // 0x20f804: 0x7bae0030  lq          $t6, 0x30($sp)
    ctx->pc = 0x20f804u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f808:
    // 0x20f808: 0xd5102a  slt         $v0, $a2, $s5
    ctx->pc = 0x20f808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_20f80c:
    // 0x20f80c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_20f810:
    if (ctx->pc == 0x20F810u) {
        ctx->pc = 0x20F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F80Cu;
        // 0x20f810: 0x7baf0040  lq          $t7, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F814u;
        goto label_20f814;
    }
    ctx->pc = 0x20F80Cu;
    {
        const bool branch_taken_0x20f80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F80Cu;
        // 0x20f810: 0x7baf0040  lq          $t7, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f80c) {
            ctx->pc = 0x20F85Cu;
            goto label_20f85c;
        }
    }
    ctx->pc = 0x20F814u;
label_20f814:
    // 0x20f814: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x20f814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_20f818:
    // 0x20f818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f81c:
    // 0x20f81c: 0x0  nop
    ctx->pc = 0x20f81cu;
    // NOP
label_20f820:
    // 0x20f820: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_20f824:
    if (ctx->pc == 0x20F824u) {
        ctx->pc = 0x20F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F820u;
        // 0x20f824: 0xd44021  addu        $t0, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F828u;
        goto label_20f828;
    }
    ctx->pc = 0x20F820u;
    {
        const bool branch_taken_0x20f820 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x20F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F820u;
        // 0x20f824: 0xd44021  addu        $t0, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f820) {
            ctx->pc = 0x20F84Cu;
            goto label_20f84c;
        }
    }
    ctx->pc = 0x20F828u;
label_20f828:
    // 0x20f828: 0x14e3821  addu        $a3, $t2, $t6
    ctx->pc = 0x20f828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_20f82c:
    // 0x20f82c: 0x0  nop
    ctx->pc = 0x20f82cu;
    // NOP
label_20f830:
    // 0x20f830: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20f830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20f834:
    // 0x20f834: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x20f834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_20f838:
    // 0x20f838: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20f83c:
    // 0x20f83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f840:
    // 0x20f840: 0xb2202a  slt         $a0, $a1, $s2
    ctx->pc = 0x20f840u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_20f844:
    // 0x20f844: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_20f848:
    if (ctx->pc == 0x20F848u) {
        ctx->pc = 0x20F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F844u;
        // 0x20f848: 0xa0490000  sb          $t1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F84Cu;
        goto label_20f84c;
    }
    ctx->pc = 0x20F844u;
    {
        const bool branch_taken_0x20f844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F844u;
        // 0x20f848: 0xa0490000  sb          $t1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f844) {
            ctx->pc = 0x20F830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f830;
        }
    }
    ctx->pc = 0x20F84Cu;
label_20f84c:
    // 0x20f84c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x20f84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20f850:
    // 0x20f850: 0xd5102a  slt         $v0, $a2, $s5
    ctx->pc = 0x20f850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_20f854:
    // 0x20f854: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_20f858:
    if (ctx->pc == 0x20F858u) {
        ctx->pc = 0x20F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F854u;
        // 0x20f858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F85Cu;
        goto label_20f85c;
    }
    ctx->pc = 0x20F854u;
    {
        const bool branch_taken_0x20f854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f854) {
            ctx->pc = 0x20F858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F854u;
            // 0x20f858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f820;
        }
    }
    ctx->pc = 0x20F85Cu;
label_20f85c:
    // 0x20f85c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x20f85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_20f860:
    // 0x20f860: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x20f860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_20f864:
    // 0x20f864: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_20f868:
    if (ctx->pc == 0x20F868u) {
        ctx->pc = 0x20F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F864u;
        // 0x20f868: 0x20f0018  mult        $zero, $s0, $t7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F86Cu;
        goto label_20f86c;
    }
    ctx->pc = 0x20F864u;
    {
        const bool branch_taken_0x20f864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F864u;
        // 0x20f868: 0x20f0018  mult        $zero, $s0, $t7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f864) {
            ctx->pc = 0x20F7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f7b8;
        }
    }
    ctx->pc = 0x20F86Cu;
label_20f86c:
    // 0x20f86c: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x20f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_20f870:
    // 0x20f870: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20f874:
    // 0x20f874: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20f874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20f878:
    // 0x20f878: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_20f87c:
    if (ctx->pc == 0x20F87Cu) {
        ctx->pc = 0x20F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F878u;
        // 0x20f87c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F880u;
        goto label_20f880;
    }
    ctx->pc = 0x20F878u;
    {
        const bool branch_taken_0x20f878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F878u;
        // 0x20f87c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f878) {
            ctx->pc = 0x20F760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f760;
        }
    }
    ctx->pc = 0x20F880u;
label_20f880:
    // 0x20f880: 0xaef50014  sw          $s5, 0x14($s7)
    ctx->pc = 0x20f880u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 21));
label_20f884:
    // 0x20f884: 0xaeee0010  sw          $t6, 0x10($s7)
    ctx->pc = 0x20f884u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 14));
label_20f888:
    // 0x20f888: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x20f888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_20f88c:
    // 0x20f88c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x20f88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20f890:
    // 0x20f890: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x20f890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20f894:
    // 0x20f894: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x20f894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20f898:
    // 0x20f898: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x20f898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20f89c:
    // 0x20f89c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x20f89cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20f8a0:
    // 0x20f8a0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x20f8a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20f8a4:
    // 0x20f8a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20f8a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20f8a8:
    // 0x20f8a8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x20f8a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20f8ac:
    // 0x20f8ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20f8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20f8b0:
    // 0x20f8b0: 0x3e00008  jr          $ra
label_20f8b4:
    if (ctx->pc == 0x20F8B4u) {
        ctx->pc = 0x20F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B0u;
        // 0x20f8b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8B8u;
        goto label_fallthrough_0x20f8b0;
    }
    ctx->pc = 0x20F8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B0u;
        // 0x20f8b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20f8b0:
    ctx->pc = 0x20F8B8u;
}
