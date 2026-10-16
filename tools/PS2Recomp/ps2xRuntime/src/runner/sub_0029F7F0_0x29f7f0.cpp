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

// Function: sub_0029F7F0
// Address: 0x29f7f0 - 0x29f8d8
void sub_0029F7F0_0x29f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F7F0_0x29f7f0");
#endif

    switch (ctx->pc) {
        case 0x29f7f0u: goto label_29f7f0;
        case 0x29f7f4u: goto label_29f7f4;
        case 0x29f7f8u: goto label_29f7f8;
        case 0x29f7fcu: goto label_29f7fc;
        case 0x29f800u: goto label_29f800;
        case 0x29f804u: goto label_29f804;
        case 0x29f808u: goto label_29f808;
        case 0x29f80cu: goto label_29f80c;
        case 0x29f810u: goto label_29f810;
        case 0x29f814u: goto label_29f814;
        case 0x29f818u: goto label_29f818;
        case 0x29f81cu: goto label_29f81c;
        case 0x29f820u: goto label_29f820;
        case 0x29f824u: goto label_29f824;
        case 0x29f828u: goto label_29f828;
        case 0x29f82cu: goto label_29f82c;
        case 0x29f830u: goto label_29f830;
        case 0x29f834u: goto label_29f834;
        case 0x29f838u: goto label_29f838;
        case 0x29f83cu: goto label_29f83c;
        case 0x29f840u: goto label_29f840;
        case 0x29f844u: goto label_29f844;
        case 0x29f848u: goto label_29f848;
        case 0x29f84cu: goto label_29f84c;
        case 0x29f850u: goto label_29f850;
        case 0x29f854u: goto label_29f854;
        case 0x29f858u: goto label_29f858;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f860u: goto label_29f860;
        case 0x29f864u: goto label_29f864;
        case 0x29f868u: goto label_29f868;
        case 0x29f86cu: goto label_29f86c;
        case 0x29f870u: goto label_29f870;
        case 0x29f874u: goto label_29f874;
        case 0x29f878u: goto label_29f878;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f880u: goto label_29f880;
        case 0x29f884u: goto label_29f884;
        case 0x29f888u: goto label_29f888;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f890u: goto label_29f890;
        case 0x29f894u: goto label_29f894;
        case 0x29f898u: goto label_29f898;
        case 0x29f89cu: goto label_29f89c;
        case 0x29f8a0u: goto label_29f8a0;
        case 0x29f8a4u: goto label_29f8a4;
        case 0x29f8a8u: goto label_29f8a8;
        case 0x29f8acu: goto label_29f8ac;
        case 0x29f8b0u: goto label_29f8b0;
        case 0x29f8b4u: goto label_29f8b4;
        case 0x29f8b8u: goto label_29f8b8;
        case 0x29f8bcu: goto label_29f8bc;
        case 0x29f8c0u: goto label_29f8c0;
        case 0x29f8c4u: goto label_29f8c4;
        case 0x29f8c8u: goto label_29f8c8;
        case 0x29f8ccu: goto label_29f8cc;
        case 0x29f8d0u: goto label_29f8d0;
        case 0x29f8d4u: goto label_29f8d4;
        default: break;
    }

    ctx->pc = 0x29f7f0u;

label_29f7f0:
    // 0x29f7f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_29f7f4:
    // 0x29f7f4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29f7f8:
    // 0x29f7f8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x29f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_29f7fc:
    // 0x29f7fc: 0x8c423030  lw          $v0, 0x3030($v0)
    ctx->pc = 0x29f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12336)));
label_29f800:
    // 0x29f800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29f800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f804:
    // 0x29f804: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x29f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_29f808:
    // 0x29f808: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x29f808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_29f80c:
    // 0x29f80c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f810:
    if (ctx->pc == 0x29F810u) {
        ctx->pc = 0x29F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F80Cu;
        // 0x29f810: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F814u;
        goto label_29f814;
    }
    ctx->pc = 0x29F80Cu;
    {
        const bool branch_taken_0x29f80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F80Cu;
        // 0x29f810: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f80c) {
            ctx->pc = 0x29F81Cu;
            goto label_29f81c;
        }
    }
    ctx->pc = 0x29F814u;
label_29f814:
    // 0x29f814: 0x40f809  jalr        $v0
label_29f818:
    if (ctx->pc == 0x29F818u) {
        ctx->pc = 0x29F81Cu;
        goto label_29f81c;
    }
    ctx->pc = 0x29F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F81Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F814u, 0x29F81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F81Cu;
label_29f81c:
    // 0x29f81c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x29f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_29f820:
    // 0x29f820: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_29f824:
    if (ctx->pc == 0x29F824u) {
        ctx->pc = 0x29F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F820u;
        // 0x29f824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F828u;
        goto label_29f828;
    }
    ctx->pc = 0x29F820u;
    {
        const bool branch_taken_0x29f820 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F820u;
        // 0x29f824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f820) {
            ctx->pc = 0x29F840u;
            goto label_29f840;
        }
    }
    ctx->pc = 0x29F828u;
label_29f828:
    // 0x29f828: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29f828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29f82c:
    // 0x29f82c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x29f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_29f830:
    // 0x29f830: 0x40f809  jalr        $v0
label_29f834:
    if (ctx->pc == 0x29F834u) {
        ctx->pc = 0x29F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F830u;
        // 0x29f834: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F838u;
        goto label_29f838;
    }
    ctx->pc = 0x29F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F838u);
        ctx->pc = 0x29F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F830u;
        // 0x29f834: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F830u, 0x29F838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F838u;
label_29f838:
    // 0x29f838: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_29f83c:
    if (ctx->pc == 0x29F83Cu) {
        ctx->pc = 0x29F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F838u;
        // 0x29f83c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F840u;
        goto label_29f840;
    }
    ctx->pc = 0x29F838u;
    {
        const bool branch_taken_0x29f838 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F838u;
        // 0x29f83c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f838) {
            ctx->pc = 0x29F84Cu;
            goto label_29f84c;
        }
    }
    ctx->pc = 0x29F840u;
label_29f840:
    // 0x29f840: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f844:
    // 0x29f844: 0x1000000a  b           . + 4 + (0xA << 2)
label_29f848:
    if (ctx->pc == 0x29F848u) {
        ctx->pc = 0x29F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F844u;
        // 0x29f848: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F84Cu;
        goto label_29f84c;
    }
    ctx->pc = 0x29F844u;
    {
        const bool branch_taken_0x29f844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F844u;
        // 0x29f848: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f844) {
            ctx->pc = 0x29F870u;
            goto label_29f870;
        }
    }
    ctx->pc = 0x29F84Cu;
label_29f84c:
    // 0x29f84c: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x29f84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_29f850:
    // 0x29f850: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x29f850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29f854:
    // 0x29f854: 0x3071f000  andi        $s1, $v1, 0xF000
    ctx->pc = 0x29f854u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_29f858:
    // 0x29f858: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x29f858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_29f85c:
    // 0x29f85c: 0x3a242000  xori        $a0, $s1, 0x2000
    ctx->pc = 0x29f85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
label_29f860:
    // 0x29f860: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29f860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_29f864:
    // 0x29f864: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29f864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_29f868:
    // 0x29f868: 0x2c910001  sltiu       $s1, $a0, 0x1
    ctx->pc = 0x29f868u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29f86c:
    // 0x29f86c: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x29f86cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
label_29f870:
    // 0x29f870: 0xc0c5472  jal         func_3151C8
label_29f874:
    if (ctx->pc == 0x29F874u) {
        ctx->pc = 0x29F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F870u;
        // 0x29f874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F878u;
        goto label_29f878;
    }
    ctx->pc = 0x29F870u;
    SET_GPR_U32(ctx, 31, 0x29F878u);
    ctx->pc = 0x29F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F870u;
    // 0x29f874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x29F870u, 0x29F878u)) {
        return;
    }
    ctx->pc = 0x29F878u;
label_29f878:
    // 0x29f878: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29f87c:
    if (ctx->pc == 0x29F87Cu) {
        ctx->pc = 0x29F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F878u;
        // 0x29f87c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F880u;
        goto label_29f880;
    }
    ctx->pc = 0x29F878u;
    {
        const bool branch_taken_0x29f878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F878u;
        // 0x29f87c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f878) {
            ctx->pc = 0x29F888u;
            goto label_29f888;
        }
    }
    ctx->pc = 0x29F880u;
label_29f880:
    // 0x29f880: 0x1000000f  b           . + 4 + (0xF << 2)
label_29f884:
    if (ctx->pc == 0x29F884u) {
        ctx->pc = 0x29F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F880u;
        // 0x29f884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F888u;
        goto label_29f888;
    }
    ctx->pc = 0x29F880u;
    {
        const bool branch_taken_0x29f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F880u;
        // 0x29f884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f880) {
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F888u;
label_29f888:
    // 0x29f888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f88c:
    // 0x29f88c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x29f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_29f890:
    // 0x29f890: 0xc0a72e0  jal         func_29CB80
label_29f894:
    if (ctx->pc == 0x29F894u) {
        ctx->pc = 0x29F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F890u;
        // 0x29f894: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F898u;
        goto label_29f898;
    }
    ctx->pc = 0x29F890u;
    SET_GPR_U32(ctx, 31, 0x29F898u);
    ctx->pc = 0x29F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F890u;
    // 0x29f894: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CB80u, 0x29F890u, 0x29F898u)) {
        return;
    }
    ctx->pc = 0x29F898u;
label_29f898:
    // 0x29f898: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_29f89c:
    if (ctx->pc == 0x29F89Cu) {
        ctx->pc = 0x29F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F898u;
        // 0x29f89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8A0u;
        goto label_29f8a0;
    }
    ctx->pc = 0x29F898u;
    {
        const bool branch_taken_0x29f898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F898u;
        // 0x29f89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f898) {
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F8A0u;
label_29f8a0:
    // 0x29f8a0: 0xc0c86b2  jal         func_321AC8
label_29f8a4:
    if (ctx->pc == 0x29F8A4u) {
        ctx->pc = 0x29F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8A0u;
        // 0x29f8a4: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8A8u;
        goto label_29f8a8;
    }
    ctx->pc = 0x29F8A0u;
    SET_GPR_U32(ctx, 31, 0x29F8A8u);
    ctx->pc = 0x29F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8A0u;
    // 0x29f8a4: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321AC8u, 0x29F8A0u, 0x29F8A8u)) {
        return;
    }
    ctx->pc = 0x29F8A8u;
label_29f8a8:
    // 0x29f8a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29f8ac:
    if (ctx->pc == 0x29F8ACu) {
        ctx->pc = 0x29F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8A8u;
        // 0x29f8ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8B0u;
        goto label_29f8b0;
    }
    ctx->pc = 0x29F8A8u;
    {
        const bool branch_taken_0x29f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8A8u;
        // 0x29f8ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f8a8) {
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F8B0u;
label_29f8b0:
    // 0x29f8b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f8b4:
    // 0x29f8b4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x29f8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_29f8b8:
    // 0x29f8b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29f8bc:
    // 0x29f8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f8c0:
    // 0x29f8c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29f8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_29f8c4:
    // 0x29f8c4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x29f8c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29f8c8:
    // 0x29f8c8: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x29f8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29f8cc:
    // 0x29f8cc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x29f8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29f8d0:
    // 0x29f8d0: 0x3e00008  jr          $ra
label_29f8d4:
    if (ctx->pc == 0x29F8D4u) {
        ctx->pc = 0x29F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8D0u;
        // 0x29f8d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8D8u;
        goto label_fallthrough_0x29f8d0;
    }
    ctx->pc = 0x29F8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8D0u;
        // 0x29f8d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f8d0:
    ctx->pc = 0x29F8D8u;
}
