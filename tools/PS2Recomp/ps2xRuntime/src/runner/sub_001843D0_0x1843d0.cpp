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

// Function: sub_001843D0
// Address: 0x1843d0 - 0x1844f8
void sub_001843D0_0x1843d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001843D0_0x1843d0");
#endif

    switch (ctx->pc) {
        case 0x1843ecu: goto label_1843ec;
        case 0x184400u: goto label_184400;
        case 0x184418u: goto label_184418;
        case 0x1844d4u: goto label_1844d4;
        default: break;
    }

    ctx->pc = 0x1843d0u;

    // 0x1843d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1843d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1843d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1843d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1843d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1843d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1843dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1843dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1843e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1843e4: 0xc048080  jal         func_120200
    ctx->pc = 0x1843E4u;
    SET_GPR_U32(ctx, 31, 0x1843ECu);
    ctx->pc = 0x1843E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843E4u;
    // 0x1843e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120200u, 0x1843E4u, 0x1843ECu)) {
        return;
    }
    ctx->pc = 0x1843ECu;
label_1843ec:
    // 0x1843ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1843ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1843f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1843f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843f4: 0x8c463c18  lw          $a2, 0x3C18($v0)
    ctx->pc = 0x1843f4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6C3C18u));
    // 0x1843f8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1843F8u;
    SET_GPR_U32(ctx, 31, 0x184400u);
    ctx->pc = 0x1843FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843F8u;
    // 0x1843fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1843F8u, 0x184400u)) {
        return;
    }
    ctx->pc = 0x184400u;
label_184400:
    // 0x184400: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x184400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184404: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184408: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x184408u;
    {
        const bool branch_taken_0x184408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184408u;
        // 0x18440c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184408) {
            ctx->pc = 0x1844E8u;
            goto label_1844e8;
        }
    }
    ctx->pc = 0x184410u;
    // 0x184410: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x184410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184414: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x184414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_184418:
    // 0x184418: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x184418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x18441c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x18441Cu;
    {
        const bool branch_taken_0x18441c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18441Cu;
        // 0x184420: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18441c) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x184424u;
    // 0x184424: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x184424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x184428: 0x24428100  addiu       $v0, $v0, -0x7F00
    ctx->pc = 0x184428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x18442c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184430: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x184430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184434: 0x800008  jr          $a0
    ctx->pc = 0x184434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18443Cu: goto label_18443c;
            case 0x18445Cu: goto label_18445c;
            case 0x18446Cu: goto label_18446c;
            case 0x18448Cu: goto label_18448c;
            case 0x18449Cu: goto label_18449c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184434u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18443Cu;
label_18443c:
    // 0x18443c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184440: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x184440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x184444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184444u;
    {
        const bool branch_taken_0x184444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184444u;
        // 0x184448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184444) {
            ctx->pc = 0x184454u;
            goto label_184454;
        }
    }
    ctx->pc = 0x18444Cu;
    // 0x18444c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18444Cu;
    {
        const bool branch_taken_0x18444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18444Cu;
        // 0x184450: 0xae2214c0  sw          $v0, 0x14C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18444c) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x184454u;
label_184454:
    // 0x184454: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x184454u;
    {
        const bool branch_taken_0x184454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184454u;
        // 0x184458: 0xae2014c0  sw          $zero, 0x14C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184454) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x18445Cu;
label_18445c:
    // 0x18445c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184460: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x184460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x184464: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x184464u;
    {
        const bool branch_taken_0x184464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184464u;
        // 0x184468: 0xae2214c4  sw          $v0, 0x14C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184464) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x18446Cu;
label_18446c:
    // 0x18446c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184470: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x184470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x184474: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184474u;
    {
        const bool branch_taken_0x184474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184474u;
        // 0x184478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184474) {
            ctx->pc = 0x184484u;
            goto label_184484;
        }
    }
    ctx->pc = 0x18447Cu;
    // 0x18447c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18447Cu;
    {
        const bool branch_taken_0x18447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18447Cu;
        // 0x184480: 0xae2214c8  sw          $v0, 0x14C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18447c) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x184484u;
label_184484:
    // 0x184484: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x184484u;
    {
        const bool branch_taken_0x184484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184484u;
        // 0x184488: 0xae2014c8  sw          $zero, 0x14C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184484) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x18448Cu;
label_18448c:
    // 0x18448c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184490: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x184490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x184494: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184494u;
    {
        const bool branch_taken_0x184494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184494u;
        // 0x184498: 0xae2214cc  sw          $v0, 0x14CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184494) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x18449Cu;
label_18449c:
    // 0x18449c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1844a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1844a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1844a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1844A4u;
    {
        const bool branch_taken_0x1844a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1844A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844A4u;
        // 0x1844a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844a4) {
            ctx->pc = 0x1844B4u;
            goto label_1844b4;
        }
    }
    ctx->pc = 0x1844ACu;
    // 0x1844ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1844ACu;
    {
        const bool branch_taken_0x1844ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1844B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844ACu;
        // 0x1844b0: 0xae2214d0  sw          $v0, 0x14D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844ac) {
            ctx->pc = 0x1844B8u;
            goto label_1844b8;
        }
    }
    ctx->pc = 0x1844B4u;
label_1844b4:
    // 0x1844b4: 0xae2014d0  sw          $zero, 0x14D0($s1)
    ctx->pc = 0x1844b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5328), GPR_U32(ctx, 0));
label_1844b8:
    // 0x1844b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1844b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1844bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1844bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1844c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1844c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1844c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1844c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1844c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1844c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1844cc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1844CCu;
    SET_GPR_U32(ctx, 31, 0x1844D4u);
    ctx->pc = 0x1844D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1844CCu;
    // 0x1844d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1844CCu, 0x1844D4u)) {
        return;
    }
    ctx->pc = 0x1844D4u;
label_1844d4:
    // 0x1844d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1844d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1844d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1844dc: 0x5460ffce  bnel        $v1, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1844DCu;
    {
        const bool branch_taken_0x1844dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1844dc) {
            ctx->pc = 0x1844E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1844DCu;
            // 0x1844e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184418;
        }
    }
    ctx->pc = 0x1844E4u;
    // 0x1844e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1844e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1844e8:
    // 0x1844e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1844e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1844ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1844ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1844f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1844F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1844F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844F0u;
        // 0x1844f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1844F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1844F8u;
}
