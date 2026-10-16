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

// Function: sub_00171308
// Address: 0x171308 - 0x171460
void sub_00171308_0x171308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171308_0x171308");
#endif

    switch (ctx->pc) {
        case 0x171324u: goto label_171324;
        case 0x171338u: goto label_171338;
        case 0x171350u: goto label_171350;
        case 0x171394u: goto label_171394;
        case 0x1713acu: goto label_1713ac;
        case 0x1713d8u: goto label_1713d8;
        case 0x171438u: goto label_171438;
        default: break;
    }

    ctx->pc = 0x171308u;

    // 0x171308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17130c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x171310: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x171310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x171314: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x171314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17131c: 0xc05c6d2  jal         func_171B48
    ctx->pc = 0x17131Cu;
    SET_GPR_U32(ctx, 31, 0x171324u);
    ctx->pc = 0x171320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17131Cu;
    // 0x171320: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171B48u, 0x17131Cu, 0x171324u)) {
        return;
    }
    ctx->pc = 0x171324u;
label_171324:
    // 0x171324: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x171328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17132c: 0x8c46f770  lw          $a2, -0x890($v0)
    ctx->pc = 0x17132cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF770u));
    // 0x171330: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x171330u;
    SET_GPR_U32(ctx, 31, 0x171338u);
    ctx->pc = 0x171334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171330u;
    // 0x171334: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x171330u, 0x171338u)) {
        return;
    }
    ctx->pc = 0x171338u;
label_171338:
    // 0x171338: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x171338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17133c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171340: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x171340u;
    {
        const bool branch_taken_0x171340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171340u;
        // 0x171344: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171340) {
            ctx->pc = 0x17144Cu;
            goto label_17144c;
        }
    }
    ctx->pc = 0x171348u;
    // 0x171348: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x171348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17134c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17134cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_171350:
    // 0x171350: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x171350u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x171354: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x171354u;
    {
        const bool branch_taken_0x171354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x171358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171354u;
        // 0x171358: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171354) {
            ctx->pc = 0x17141Cu;
            goto label_17141c;
        }
    }
    ctx->pc = 0x17135Cu;
    // 0x17135c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17135cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x171360: 0x24425540  addiu       $v0, $v0, 0x5540
    ctx->pc = 0x171360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21824));
    // 0x171364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x171364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171368: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x171368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17136c: 0x800008  jr          $a0
    ctx->pc = 0x17136Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171374u: goto label_171374;
            case 0x171380u: goto label_171380;
            case 0x17139Cu: goto label_17139c;
            case 0x1713B4u: goto label_1713b4;
            case 0x1713C8u: goto label_1713c8;
            case 0x1713E0u: goto label_1713e0;
            case 0x171400u: goto label_171400;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17136Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x171374u;
label_171374:
    // 0x171374: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x171374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171378: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171378u;
    {
        const bool branch_taken_0x171378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171378u;
        // 0x17137c: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171378) {
            ctx->pc = 0x171388u;
            goto label_171388;
        }
    }
    ctx->pc = 0x171380u;
label_171380:
    // 0x171380: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x171380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171384: 0x262400f8  addiu       $a0, $s1, 0xF8
    ctx->pc = 0x171384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
label_171388:
    // 0x171388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17138c: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x17138Cu;
    SET_GPR_U32(ctx, 31, 0x171394u);
    ctx->pc = 0x171390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17138Cu;
    // 0x171390: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x17138Cu, 0x171394u)) {
        return;
    }
    ctx->pc = 0x171394u;
label_171394:
    // 0x171394: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x171394u;
    {
        const bool branch_taken_0x171394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171394u;
        // 0x171398: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171394) {
            ctx->pc = 0x171420u;
            goto label_171420;
        }
    }
    ctx->pc = 0x17139Cu;
label_17139c:
    // 0x17139c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17139cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1713a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1713a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713a4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1713A4u;
    SET_GPR_U32(ctx, 31, 0x1713ACu);
    ctx->pc = 0x1713A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713A4u;
    // 0x1713a8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1713A4u, 0x1713ACu)) {
        return;
    }
    ctx->pc = 0x1713ACu;
label_1713ac:
    // 0x1713ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1713ACu;
    {
        const bool branch_taken_0x1713ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713ACu;
        // 0x1713b0: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713ac) {
            ctx->pc = 0x17141Cu;
            goto label_17141c;
        }
    }
    ctx->pc = 0x1713B4u;
label_1713b4:
    // 0x1713b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1713b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1713b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1713b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1713bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1713bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1713c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1713C0u;
    {
        const bool branch_taken_0x1713c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713C0u;
        // 0x1713c4: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713c0) {
            ctx->pc = 0x17141Cu;
            goto label_17141c;
        }
    }
    ctx->pc = 0x1713C8u;
label_1713c8:
    // 0x1713c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1713c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1713cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1713ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713d0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1713D0u;
    SET_GPR_U32(ctx, 31, 0x1713D8u);
    ctx->pc = 0x1713D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713D0u;
    // 0x1713d4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1713D0u, 0x1713D8u)) {
        return;
    }
    ctx->pc = 0x1713D8u;
label_1713d8:
    // 0x1713d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1713D8u;
    {
        const bool branch_taken_0x1713d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D8u;
        // 0x1713dc: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713d8) {
            ctx->pc = 0x17141Cu;
            goto label_17141c;
        }
    }
    ctx->pc = 0x1713E0u;
label_1713e0:
    // 0x1713e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1713e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1713e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1713e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1713e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1713E8u;
    {
        const bool branch_taken_0x1713e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713E8u;
        // 0x1713ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713e8) {
            ctx->pc = 0x1713F8u;
            goto label_1713f8;
        }
    }
    ctx->pc = 0x1713F0u;
    // 0x1713f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1713F0u;
    {
        const bool branch_taken_0x1713f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713F0u;
        // 0x1713f4: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713f0) {
            ctx->pc = 0x17141Cu;
            goto label_17141c;
        }
    }
    ctx->pc = 0x1713F8u;
label_1713f8:
    // 0x1713f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1713F8u;
    {
        const bool branch_taken_0x1713f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713F8u;
        // 0x1713fc: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713f8) {
            ctx->pc = 0x17141Cu;
            goto label_17141c;
        }
    }
    ctx->pc = 0x171400u;
label_171400:
    // 0x171400: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x171400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171404: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171408: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x171408u;
    {
        const bool branch_taken_0x171408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171408u;
        // 0x17140c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171408) {
            ctx->pc = 0x171418u;
            goto label_171418;
        }
    }
    ctx->pc = 0x171410u;
    // 0x171410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171410u;
    {
        const bool branch_taken_0x171410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171410u;
        // 0x171414: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171410) {
            ctx->pc = 0x17141Cu;
            goto label_17141c;
        }
    }
    ctx->pc = 0x171418u;
label_171418:
    // 0x171418: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x171418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_17141c:
    // 0x17141c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17141cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_171420:
    // 0x171420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x171428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17142c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17142cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171430: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x171430u;
    SET_GPR_U32(ctx, 31, 0x171438u);
    ctx->pc = 0x171434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171430u;
    // 0x171434: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x171430u, 0x171438u)) {
        return;
    }
    ctx->pc = 0x171438u;
label_171438:
    // 0x171438: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x171438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17143c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171440: 0x5460ffc3  bnel        $v1, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x171440u;
    {
        const bool branch_taken_0x171440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171440) {
            ctx->pc = 0x171444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171440u;
            // 0x171444: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171350;
        }
    }
    ctx->pc = 0x171448u;
    // 0x171448: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x171448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17144c:
    // 0x17144c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17144cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171454: 0x3e00008  jr          $ra
    ctx->pc = 0x171454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171454u;
        // 0x171458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17145Cu;
    // 0x17145c: 0x0  nop
    ctx->pc = 0x17145cu;
    // NOP
    ctx->pc = 0x171460u;
}
