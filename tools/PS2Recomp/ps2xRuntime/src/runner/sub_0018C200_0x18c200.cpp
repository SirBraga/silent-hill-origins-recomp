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

// Function: sub_0018C200
// Address: 0x18c200 - 0x18c730
void sub_0018C200_0x18c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C200_0x18c200");
#endif

    switch (ctx->pc) {
        case 0x18c220u: goto label_18c220;
        case 0x18c234u: goto label_18c234;
        case 0x18c250u: goto label_18c250;
        case 0x18c660u: goto label_18c660;
        case 0x18c684u: goto label_18c684;
        case 0x18c698u: goto label_18c698;
        case 0x18c6bcu: goto label_18c6bc;
        case 0x18c6d8u: goto label_18c6d8;
        case 0x18c704u: goto label_18c704;
        default: break;
    }

    ctx->pc = 0x18c200u;

    // 0x18c200: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18c204: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18c204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18c208: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18c208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18c20c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c210: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18c210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18c214: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18c218: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x18C218u;
    SET_GPR_U32(ctx, 31, 0x18C220u);
    ctx->pc = 0x18C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C218u;
    // 0x18c21c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x18C218u, 0x18C220u)) {
        return;
    }
    ctx->pc = 0x18C220u;
label_18c220:
    // 0x18c220: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x18c224: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c228: 0x8c46bd70  lw          $a2, -0x4290($v0)
    ctx->pc = 0x18c228u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBD70u));
    // 0x18c22c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x18C22Cu;
    SET_GPR_U32(ctx, 31, 0x18C234u);
    ctx->pc = 0x18C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C22Cu;
    // 0x18c230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x18C22Cu, 0x18C234u)) {
        return;
    }
    ctx->pc = 0x18C234u;
label_18c234:
    // 0x18c234: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c23c: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
    ctx->pc = 0x18C23Cu;
    {
        const bool branch_taken_0x18c23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C23Cu;
        // 0x18c240: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c23c) {
            ctx->pc = 0x18C670u;
            goto label_18c670;
        }
    }
    ctx->pc = 0x18C244u;
    // 0x18c244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c248: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x18c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18c24c: 0x0  nop
    ctx->pc = 0x18c24cu;
    // NOP
label_18c250:
    // 0x18c250: 0x2c830025  sltiu       $v1, $a0, 0x25
    ctx->pc = 0x18c250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x18c254: 0x106000fb  beqz        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x18C254u;
    {
        const bool branch_taken_0x18c254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C254u;
        // 0x18c258: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c254) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C25Cu;
    // 0x18c25c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18c260: 0x24429150  addiu       $v0, $v0, -0x6EB0
    ctx->pc = 0x18c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938960));
    // 0x18c264: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c268: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c26c: 0x800008  jr          $a0
    ctx->pc = 0x18C26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C274u: goto label_18c274;
            case 0x18C284u: goto label_18c284;
            case 0x18C294u: goto label_18c294;
            case 0x18C2A4u: goto label_18c2a4;
            case 0x18C2B4u: goto label_18c2b4;
            case 0x18C2C4u: goto label_18c2c4;
            case 0x18C2D4u: goto label_18c2d4;
            case 0x18C2E4u: goto label_18c2e4;
            case 0x18C304u: goto label_18c304;
            case 0x18C324u: goto label_18c324;
            case 0x18C344u: goto label_18c344;
            case 0x18C364u: goto label_18c364;
            case 0x18C384u: goto label_18c384;
            case 0x18C394u: goto label_18c394;
            case 0x18C3A4u: goto label_18c3a4;
            case 0x18C3B4u: goto label_18c3b4;
            case 0x18C3C4u: goto label_18c3c4;
            case 0x18C3E4u: goto label_18c3e4;
            case 0x18C3F4u: goto label_18c3f4;
            case 0x18C404u: goto label_18c404;
            case 0x18C414u: goto label_18c414;
            case 0x18C424u: goto label_18c424;
            case 0x18C434u: goto label_18c434;
            case 0x18C444u: goto label_18c444;
            case 0x18C558u: goto label_18c558;
            case 0x18C568u: goto label_18c568;
            case 0x18C588u: goto label_18c588;
            case 0x18C598u: goto label_18c598;
            case 0x18C5B8u: goto label_18c5b8;
            case 0x18C5C8u: goto label_18c5c8;
            case 0x18C5D8u: goto label_18c5d8;
            case 0x18C5E8u: goto label_18c5e8;
            case 0x18C5F8u: goto label_18c5f8;
            case 0x18C608u: goto label_18c608;
            case 0x18C618u: goto label_18c618;
            case 0x18C638u: goto label_18c638;
            case 0x18C644u: goto label_18c644;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C26Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18C274u;
label_18c274:
    // 0x18c274: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c278: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c27c: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x18C27Cu;
    {
        const bool branch_taken_0x18c27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C27Cu;
        // 0x18c280: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c27c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C284u;
label_18c284:
    // 0x18c284: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c288: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c28c: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x18C28Cu;
    {
        const bool branch_taken_0x18c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C28Cu;
        // 0x18c290: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c28c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C294u;
label_18c294:
    // 0x18c294: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c298: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c29c: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x18C29Cu;
    {
        const bool branch_taken_0x18c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C29Cu;
        // 0x18c2a0: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c29c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C2A4u;
label_18c2a4:
    // 0x18c2a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c2ac: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x18C2ACu;
    {
        const bool branch_taken_0x18c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2ACu;
        // 0x18c2b0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2ac) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C2B4u;
label_18c2b4:
    // 0x18c2b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c2bc: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x18C2BCu;
    {
        const bool branch_taken_0x18c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2BCu;
        // 0x18c2c0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2bc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C2C4u;
label_18c2c4:
    // 0x18c2c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c2cc: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x18C2CCu;
    {
        const bool branch_taken_0x18c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2CCu;
        // 0x18c2d0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2cc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C2D4u;
label_18c2d4:
    // 0x18c2d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c2dc: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x18C2DCu;
    {
        const bool branch_taken_0x18c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2DCu;
        // 0x18c2e0: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2dc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C2E4u;
label_18c2e4:
    // 0x18c2e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c2ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C2ECu;
    {
        const bool branch_taken_0x18c2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2ECu;
        // 0x18c2f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2ec) {
            ctx->pc = 0x18C2FCu;
            goto label_18c2fc;
        }
    }
    ctx->pc = 0x18C2F4u;
    // 0x18c2f4: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x18C2F4u;
    {
        const bool branch_taken_0x18c2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F4u;
        // 0x18c2f8: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2f4) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C2FCu;
label_18c2fc:
    // 0x18c2fc: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x18C2FCu;
    {
        const bool branch_taken_0x18c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2FCu;
        // 0x18c300: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2fc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C304u;
label_18c304:
    // 0x18c304: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c308: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c30c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C30Cu;
    {
        const bool branch_taken_0x18c30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C30Cu;
        // 0x18c310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c30c) {
            ctx->pc = 0x18C31Cu;
            goto label_18c31c;
        }
    }
    ctx->pc = 0x18C314u;
    // 0x18c314: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x18C314u;
    {
        const bool branch_taken_0x18c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C314u;
        // 0x18c318: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c314) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C31Cu;
label_18c31c:
    // 0x18c31c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x18C31Cu;
    {
        const bool branch_taken_0x18c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C31Cu;
        // 0x18c320: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c31c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C324u;
label_18c324:
    // 0x18c324: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c328: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c32c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C32Cu;
    {
        const bool branch_taken_0x18c32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C32Cu;
        // 0x18c330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c32c) {
            ctx->pc = 0x18C33Cu;
            goto label_18c33c;
        }
    }
    ctx->pc = 0x18C334u;
    // 0x18c334: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x18C334u;
    {
        const bool branch_taken_0x18c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C334u;
        // 0x18c338: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c334) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C33Cu;
label_18c33c:
    // 0x18c33c: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x18C33Cu;
    {
        const bool branch_taken_0x18c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C33Cu;
        // 0x18c340: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c33c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C344u;
label_18c344:
    // 0x18c344: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c348: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c34c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C34Cu;
    {
        const bool branch_taken_0x18c34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C34Cu;
        // 0x18c350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c34c) {
            ctx->pc = 0x18C35Cu;
            goto label_18c35c;
        }
    }
    ctx->pc = 0x18C354u;
    // 0x18c354: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x18C354u;
    {
        const bool branch_taken_0x18c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C354u;
        // 0x18c358: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c354) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C35Cu;
label_18c35c:
    // 0x18c35c: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x18C35Cu;
    {
        const bool branch_taken_0x18c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C35Cu;
        // 0x18c360: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c35c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C364u;
label_18c364:
    // 0x18c364: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c368: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c36c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C36Cu;
    {
        const bool branch_taken_0x18c36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C36Cu;
        // 0x18c370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c36c) {
            ctx->pc = 0x18C37Cu;
            goto label_18c37c;
        }
    }
    ctx->pc = 0x18C374u;
    // 0x18c374: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x18C374u;
    {
        const bool branch_taken_0x18c374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C374u;
        // 0x18c378: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c374) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C37Cu;
label_18c37c:
    // 0x18c37c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x18C37Cu;
    {
        const bool branch_taken_0x18c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C37Cu;
        // 0x18c380: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c37c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C384u;
label_18c384:
    // 0x18c384: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c388: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c38c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x18C38Cu;
    {
        const bool branch_taken_0x18c38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C38Cu;
        // 0x18c390: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c38c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C394u;
label_18c394:
    // 0x18c394: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c398: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c39c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x18C39Cu;
    {
        const bool branch_taken_0x18c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C39Cu;
        // 0x18c3a0: 0xae030088  sw          $v1, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c39c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C3A4u;
label_18c3a4:
    // 0x18c3a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c3ac: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x18C3ACu;
    {
        const bool branch_taken_0x18c3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3ACu;
        // 0x18c3b0: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3ac) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C3B4u;
label_18c3b4:
    // 0x18c3b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c3bc: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x18C3BCu;
    {
        const bool branch_taken_0x18c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3BCu;
        // 0x18c3c0: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3bc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C3C4u;
label_18c3c4:
    // 0x18c3c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c3cc: 0x1460009d  bnez        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x18C3CCu;
    {
        const bool branch_taken_0x18c3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3CCu;
        // 0x18c3d0: 0xae030094  sw          $v1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3cc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C3D4u;
    // 0x18c3d4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x18c3d8: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x18c3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x18c3dc: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x18C3DCu;
    {
        const bool branch_taken_0x18c3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3DCu;
        // 0x18c3e0: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3dc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C3E4u;
label_18c3e4:
    // 0x18c3e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c3ec: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x18C3ECu;
    {
        const bool branch_taken_0x18c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3ECu;
        // 0x18c3f0: 0xe60000b4  swc1        $f0, 0xB4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3ec) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C3F4u;
label_18c3f4:
    // 0x18c3f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c3fc: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x18C3FCu;
    {
        const bool branch_taken_0x18c3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3FCu;
        // 0x18c400: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3fc) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C404u;
label_18c404:
    // 0x18c404: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c408: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c40c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x18C40Cu;
    {
        const bool branch_taken_0x18c40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C40Cu;
        // 0x18c410: 0xe60000c4  swc1        $f0, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c40c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C414u;
label_18c414:
    // 0x18c414: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c418: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c41c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x18C41Cu;
    {
        const bool branch_taken_0x18c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C41Cu;
        // 0x18c420: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c41c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C424u;
label_18c424:
    // 0x18c424: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c428: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c42c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x18C42Cu;
    {
        const bool branch_taken_0x18c42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C42Cu;
        // 0x18c430: 0xe60000c0  swc1        $f0, 0xC0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c42c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C434u;
label_18c434:
    // 0x18c434: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c438: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c43c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x18C43Cu;
    {
        const bool branch_taken_0x18c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C43Cu;
        // 0x18c440: 0xae0300c8  sw          $v1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c43c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C444u;
label_18c444:
    // 0x18c444: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c448: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x18c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x18c44c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18c450: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x18c454: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x18c454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x18c458: 0x8865000b  lwl         $a1, 0xB($v1)
    ctx->pc = 0x18c458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x18c45c: 0x98650008  lwr         $a1, 0x8($v1)
    ctx->pc = 0x18c45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x18c460: 0xaba50023  swl         $a1, 0x23($sp)
    ctx->pc = 0x18c460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c464: 0xbba50020  swr         $a1, 0x20($sp)
    ctx->pc = 0x18c464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c468: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x18c468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x18c46c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x18c46cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x18c470: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x18c470u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x18c474: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x18c474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x18c478: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x18c478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x18c47c: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x18c47cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x18c480: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x18c480u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c484: 0x93a30021  lbu         $v1, 0x21($sp)
    ctx->pc = 0x18c484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x18c488: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c48c: 0x93a50022  lbu         $a1, 0x22($sp)
    ctx->pc = 0x18c48cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x18c490: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x18c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x18c494: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x18c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x18c498: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18c49c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x18c49cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x18c4a0: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x18c4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x18c4a4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x18c4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x18c4a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18c4ac: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x18c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x18c4b0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x18c4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x18c4b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c4b8: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x18c4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x18c4bc: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x18c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x18c4c0: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x18c4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x18c4c4: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x18c4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18c4c8: 0xa3a40022  sb          $a0, 0x22($sp)
    ctx->pc = 0x18c4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x18c4cc: 0xa3a50023  sb          $a1, 0x23($sp)
    ctx->pc = 0x18c4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x18c4d0: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x18c4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x18c4d4: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x18c4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x18c4d8: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x18c4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x18c4dc: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x18c4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c4e0: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x18c4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c4e4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x18c4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c4e8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x18c4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x18c4ec: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x18c4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x18c4f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18c4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c4f4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x18c4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18c4f8: 0x0  nop
    ctx->pc = 0x18c4f8u;
    // NOP
    // 0x18c4fc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18c4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18c500: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x18c500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x18c504: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x18c504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x18c508: 0x93a20013  lbu         $v0, 0x13($sp)
    ctx->pc = 0x18c508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x18c50c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18c50cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c510: 0x0  nop
    ctx->pc = 0x18c510u;
    // NOP
    // 0x18c514: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c518: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18c518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18c51c: 0x0  nop
    ctx->pc = 0x18c51cu;
    // NOP
    // 0x18c520: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18c520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18c524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c528: 0x0  nop
    ctx->pc = 0x18c528u;
    // NOP
    // 0x18c52c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c530: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x18c530u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x18c534: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18c534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18c538: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18c538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18c53c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x18c53cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18c540: 0xe60400d4  swc1        $f4, 0xD4($s0)
    ctx->pc = 0x18c540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x18c544: 0xe60100d8  swc1        $f1, 0xD8($s0)
    ctx->pc = 0x18c544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x18c548: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x18c548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x18c54c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x18C54Cu;
    {
        const bool branch_taken_0x18c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C54Cu;
        // 0x18c550: 0xe60300dc  swc1        $f3, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c54c) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C554u;
    // 0x18c554: 0x0  nop
    ctx->pc = 0x18c554u;
    // NOP
label_18c558:
    // 0x18c558: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c55c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c560: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x18C560u;
    {
        const bool branch_taken_0x18c560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C560u;
        // 0x18c564: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c560) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C568u;
label_18c568:
    // 0x18c568: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c56c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c570: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x18C570u;
    {
        const bool branch_taken_0x18c570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C570u;
        // 0x18c574: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c570) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C578u;
    // 0x18c578: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x18c578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x18c57c: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x18c57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x18c580: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18C580u;
    {
        const bool branch_taken_0x18c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C580u;
        // 0x18c584: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c580) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C588u;
label_18c588:
    // 0x18c588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c58c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c590: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18C590u;
    {
        const bool branch_taken_0x18c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C590u;
        // 0x18c594: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c590) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C598u;
label_18c598:
    // 0x18c598: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c59c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c5a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C5A0u;
    {
        const bool branch_taken_0x18c5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5A0u;
        // 0x18c5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5a0) {
            ctx->pc = 0x18C5B0u;
            goto label_18c5b0;
        }
    }
    ctx->pc = 0x18C5A8u;
    // 0x18c5a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18C5A8u;
    {
        const bool branch_taken_0x18c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5A8u;
        // 0x18c5ac: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5a8) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C5B0u;
label_18c5b0:
    // 0x18c5b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18C5B0u;
    {
        const bool branch_taken_0x18c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5B0u;
        // 0x18c5b4: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5b0) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C5B8u;
label_18c5b8:
    // 0x18c5b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c5bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c5c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18C5C0u;
    {
        const bool branch_taken_0x18c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C0u;
        // 0x18c5c4: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c0) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C5C8u;
label_18c5c8:
    // 0x18c5c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c5cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c5d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18C5D0u;
    {
        const bool branch_taken_0x18c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5D0u;
        // 0x18c5d4: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5d0) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C5D8u;
label_18c5d8:
    // 0x18c5d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c5dc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c5e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18C5E0u;
    {
        const bool branch_taken_0x18c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5E0u;
        // 0x18c5e4: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5e0) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C5E8u;
label_18c5e8:
    // 0x18c5e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c5ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c5f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18C5F0u;
    {
        const bool branch_taken_0x18c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5F0u;
        // 0x18c5f4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5f0) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C5F8u;
label_18c5f8:
    // 0x18c5f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c5fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c600: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18C600u;
    {
        const bool branch_taken_0x18c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C600u;
        // 0x18c604: 0xe60000cc  swc1        $f0, 0xCC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c600) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C608u;
label_18c608:
    // 0x18c608: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c60c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c610: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18C610u;
    {
        const bool branch_taken_0x18c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C610u;
        // 0x18c614: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c610) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C618u;
label_18c618:
    // 0x18c618: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c61c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18c620: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x18c620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c624: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x18c624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x18c628: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C628u;
    {
        const bool branch_taken_0x18c628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c628) {
            ctx->pc = 0x18C62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C628u;
            // 0x18c62c: 0xae0300e8  sw          $v1, 0xE8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C630u;
    // 0x18c630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18C630u;
    {
        const bool branch_taken_0x18c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C630u;
        // 0x18c634: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c630) {
            ctx->pc = 0x18C648u;
            goto label_18c648;
        }
    }
    ctx->pc = 0x18C638u;
label_18c638:
    // 0x18c638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c63c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c640: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x18c640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_18c644:
    // 0x18c644: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18c644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18c648:
    // 0x18c648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c64c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c654: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c658: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x18C658u;
    SET_GPR_U32(ctx, 31, 0x18C660u);
    ctx->pc = 0x18C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C658u;
    // 0x18c65c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x18C658u, 0x18C660u)) {
        return;
    }
    ctx->pc = 0x18C660u;
label_18c660:
    // 0x18c660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c664: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c668: 0x5460fef9  bnel        $v1, $zero, . + 4 + (-0x107 << 2)
    ctx->pc = 0x18C668u;
    {
        const bool branch_taken_0x18c668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c668) {
            ctx->pc = 0x18C66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C668u;
            // 0x18c66c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c250;
        }
    }
    ctx->pc = 0x18C670u;
label_18c670:
    // 0x18c670: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x18c670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x18c674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c678: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x18c678u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x18c67c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x18C67Cu;
    SET_GPR_U32(ctx, 31, 0x18C684u);
    ctx->pc = 0x18C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C67Cu;
    // 0x18c680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x18C67Cu, 0x18C684u)) {
        return;
    }
    ctx->pc = 0x18C684u;
label_18c684:
    // 0x18c684: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18c684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c688: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c68c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x18C68Cu;
    {
        const bool branch_taken_0x18c68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C68Cu;
        // 0x18c690: 0x3c12006a  lui         $s2, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c68c) {
            ctx->pc = 0x18C714u;
            goto label_18c714;
        }
    }
    ctx->pc = 0x18C694u;
    // 0x18c694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c698:
    // 0x18c698: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c69c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18C69Cu;
    {
        const bool branch_taken_0x18c69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C69Cu;
        // 0x18c6a0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c69c) {
            ctx->pc = 0x18C6ECu;
            goto label_18c6ec;
        }
    }
    ctx->pc = 0x18C6A4u;
    // 0x18c6a4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x18c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18c6a8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18c6ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c6b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6b4: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x18C6B4u;
    SET_GPR_U32(ctx, 31, 0x18C6BCu);
    ctx->pc = 0x18C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6B4u;
    // 0x18c6b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x18C6B4u, 0x18C6BCu)) {
        return;
    }
    ctx->pc = 0x18C6BCu;
label_18c6bc:
    // 0x18c6bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18c6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6c0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C6C0u;
    {
        const bool branch_taken_0x18c6c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6C0u;
        // 0x18c6c4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6c0) {
            ctx->pc = 0x18C6E8u;
            goto label_18c6e8;
        }
    }
    ctx->pc = 0x18C6C8u;
    // 0x18c6c8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C6C8u;
    {
        const bool branch_taken_0x18c6c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6C8u;
        // 0x18c6cc: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6c8) {
            ctx->pc = 0x18C6ECu;
            goto label_18c6ec;
        }
    }
    ctx->pc = 0x18C6D0u;
    // 0x18c6d0: 0xc065c58  jal         func_197160
    ctx->pc = 0x18C6D0u;
    SET_GPR_U32(ctx, 31, 0x18C6D8u);
    ctx->pc = 0x18C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6D0u;
    // 0x18c6d4: 0x26449138  addiu       $a0, $s2, -0x6EC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x18C6D0u, 0x18C6D8u)) {
        return;
    }
    ctx->pc = 0x18C6D8u;
label_18c6d8:
    // 0x18c6d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C6D8u;
    {
        const bool branch_taken_0x18c6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6D8u;
        // 0x18c6dc: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6d8) {
            ctx->pc = 0x18C6ECu;
            goto label_18c6ec;
        }
    }
    ctx->pc = 0x18C6E0u;
    // 0x18c6e0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x18c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18c6e4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x18c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_18c6e8:
    // 0x18c6e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18c6ec:
    // 0x18c6ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x18c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18c6f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c6f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c6f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c6fc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x18C6FCu;
    SET_GPR_U32(ctx, 31, 0x18C704u);
    ctx->pc = 0x18C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6FCu;
    // 0x18c700: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x18C6FCu, 0x18C704u)) {
        return;
    }
    ctx->pc = 0x18C704u;
label_18c704:
    // 0x18c704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c70c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x18C70Cu;
    {
        const bool branch_taken_0x18c70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C70Cu;
        // 0x18c710: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c70c) {
            ctx->pc = 0x18C698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c698;
        }
    }
    ctx->pc = 0x18C714u;
label_18c714:
    // 0x18c714: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18c714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18c718: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18c718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c71c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18c71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c720: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c724: 0x3e00008  jr          $ra
    ctx->pc = 0x18C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C724u;
        // 0x18c728: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C72Cu;
    // 0x18c72c: 0x0  nop
    ctx->pc = 0x18c72cu;
    // NOP
    ctx->pc = 0x18c730u;
}
