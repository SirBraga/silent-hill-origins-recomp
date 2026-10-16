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

// Function: sub_0014A8B0
// Address: 0x14a8b0 - 0x14a9f0
void sub_0014A8B0_0x14a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A8B0_0x14a8b0");
#endif

    switch (ctx->pc) {
        case 0x14a8ccu: goto label_14a8cc;
        case 0x14a8e0u: goto label_14a8e0;
        case 0x14a8f8u: goto label_14a8f8;
        case 0x14a93cu: goto label_14a93c;
        case 0x14a98cu: goto label_14a98c;
        case 0x14a9ccu: goto label_14a9cc;
        default: break;
    }

    ctx->pc = 0x14a8b0u;

    // 0x14a8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a8b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14a8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14a8b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14a8bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14a8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a8c4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x14A8C4u;
    SET_GPR_U32(ctx, 31, 0x14A8CCu);
    ctx->pc = 0x14A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8C4u;
    // 0x14a8c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x14A8C4u, 0x14A8CCu)) {
        return;
    }
    ctx->pc = 0x14A8CCu;
label_14a8cc:
    // 0x14a8cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14a8d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8d4: 0x8c46ef40  lw          $a2, -0x10C0($v0)
    ctx->pc = 0x14a8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEF40u));
    // 0x14a8d8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x14A8D8u;
    SET_GPR_U32(ctx, 31, 0x14A8E0u);
    ctx->pc = 0x14A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8D8u;
    // 0x14a8dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x14A8D8u, 0x14A8E0u)) {
        return;
    }
    ctx->pc = 0x14A8E0u;
label_14a8e0:
    // 0x14a8e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a8e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a8e8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14A8E8u;
    {
        const bool branch_taken_0x14a8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8E8u;
        // 0x14a8ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8e8) {
            ctx->pc = 0x14A9E0u;
            goto label_14a9e0;
        }
    }
    ctx->pc = 0x14A8F0u;
    // 0x14a8f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a8f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a8f8:
    // 0x14a8f8: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x14a8f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a8fc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x14A8FCu;
    {
        const bool branch_taken_0x14a8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8FCu;
        // 0x14a900: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8fc) {
            ctx->pc = 0x14A9B0u;
            goto label_14a9b0;
        }
    }
    ctx->pc = 0x14A904u;
    // 0x14a904: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14a904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14a908: 0x24421bf0  addiu       $v0, $v0, 0x1BF0
    ctx->pc = 0x14a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7152));
    // 0x14a90c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a910: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a914: 0x800008  jr          $a0
    ctx->pc = 0x14A914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A91Cu: goto label_14a91c;
            case 0x14A92Cu: goto label_14a92c;
            case 0x14A944u: goto label_14a944;
            case 0x14A954u: goto label_14a954;
            case 0x14A974u: goto label_14a974;
            case 0x14A994u: goto label_14a994;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A914u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14A91Cu;
label_14a91c:
    // 0x14a91c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a920: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a924: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14A924u;
    {
        const bool branch_taken_0x14a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A924u;
        // 0x14a928: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a924) {
            ctx->pc = 0x14A9B0u;
            goto label_14a9b0;
        }
    }
    ctx->pc = 0x14A92Cu;
label_14a92c:
    // 0x14a92c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x14a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a934: 0xc081b56  jal         func_206D58
    ctx->pc = 0x14A934u;
    SET_GPR_U32(ctx, 31, 0x14A93Cu);
    ctx->pc = 0x14A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A934u;
    // 0x14a938: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x14A934u, 0x14A93Cu)) {
        return;
    }
    ctx->pc = 0x14A93Cu;
label_14a93c:
    // 0x14a93c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A93Cu;
    {
        const bool branch_taken_0x14a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A93Cu;
        // 0x14a940: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a93c) {
            ctx->pc = 0x14A9B0u;
            goto label_14a9b0;
        }
    }
    ctx->pc = 0x14A944u;
label_14a944:
    // 0x14a944: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a948: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14a948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a94c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14A94Cu;
    {
        const bool branch_taken_0x14a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A94Cu;
        // 0x14a950: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a94c) {
            ctx->pc = 0x14A9B0u;
            goto label_14a9b0;
        }
    }
    ctx->pc = 0x14A954u;
label_14a954:
    // 0x14a954: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a958: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a95c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A95Cu;
    {
        const bool branch_taken_0x14a95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A95Cu;
        // 0x14a960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a95c) {
            ctx->pc = 0x14A96Cu;
            goto label_14a96c;
        }
    }
    ctx->pc = 0x14A964u;
    // 0x14a964: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14A964u;
    {
        const bool branch_taken_0x14a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A964u;
        // 0x14a968: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a964) {
            ctx->pc = 0x14A9B0u;
            goto label_14a9b0;
        }
    }
    ctx->pc = 0x14A96Cu;
label_14a96c:
    // 0x14a96c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14A96Cu;
    {
        const bool branch_taken_0x14a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A96Cu;
        // 0x14a970: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a96c) {
            ctx->pc = 0x14A9B0u;
            goto label_14a9b0;
        }
    }
    ctx->pc = 0x14A974u;
label_14a974:
    // 0x14a974: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14a974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a978: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x14a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x14a97c: 0x2625005c  addiu       $a1, $s1, 0x5C
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x14a980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14a980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a984: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x14A984u;
    SET_GPR_U32(ctx, 31, 0x14A98Cu);
    ctx->pc = 0x14A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A984u;
    // 0x14a988: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x14A984u, 0x14A98Cu)) {
        return;
    }
    ctx->pc = 0x14A98Cu;
label_14a98c:
    // 0x14a98c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A98Cu;
    {
        const bool branch_taken_0x14a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A98Cu;
        // 0x14a990: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a98c) {
            ctx->pc = 0x14A9B4u;
            goto label_14a9b4;
        }
    }
    ctx->pc = 0x14A994u;
label_14a994:
    // 0x14a994: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a998: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a99c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A99Cu;
    {
        const bool branch_taken_0x14a99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A99Cu;
        // 0x14a9a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a99c) {
            ctx->pc = 0x14A9ACu;
            goto label_14a9ac;
        }
    }
    ctx->pc = 0x14A9A4u;
    // 0x14a9a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A9A4u;
    {
        const bool branch_taken_0x14a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A4u;
        // 0x14a9a8: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9a4) {
            ctx->pc = 0x14A9B0u;
            goto label_14a9b0;
        }
    }
    ctx->pc = 0x14A9ACu;
label_14a9ac:
    // 0x14a9ac: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x14a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_14a9b0:
    // 0x14a9b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14a9b4:
    // 0x14a9b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a9bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a9c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a9c4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x14A9C4u;
    SET_GPR_U32(ctx, 31, 0x14A9CCu);
    ctx->pc = 0x14A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9C4u;
    // 0x14a9c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x14A9C4u, 0x14A9CCu)) {
        return;
    }
    ctx->pc = 0x14A9CCu;
label_14a9cc:
    // 0x14a9cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a9d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a9d4: 0x5460ffc8  bnel        $v1, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x14A9D4u;
    {
        const bool branch_taken_0x14a9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a9d4) {
            ctx->pc = 0x14A9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9D4u;
            // 0x14a9d8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a8f8;
        }
    }
    ctx->pc = 0x14A9DCu;
    // 0x14a9dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14a9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14a9e0:
    // 0x14a9e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14a9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a9e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9E8u;
        // 0x14a9ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A9F0u;
}
