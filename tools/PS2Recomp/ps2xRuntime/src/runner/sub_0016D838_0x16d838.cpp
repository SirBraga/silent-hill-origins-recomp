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

// Function: sub_0016D838
// Address: 0x16d838 - 0x16d950
void sub_0016D838_0x16d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D838_0x16d838");
#endif

    switch (ctx->pc) {
        case 0x16d854u: goto label_16d854;
        case 0x16d868u: goto label_16d868;
        case 0x16d880u: goto label_16d880;
        case 0x16d8bcu: goto label_16d8bc;
        case 0x16d92cu: goto label_16d92c;
        default: break;
    }

    ctx->pc = 0x16d838u;

    // 0x16d838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d83c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d840: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d844: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16d844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d84c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16D84Cu;
    SET_GPR_U32(ctx, 31, 0x16D854u);
    ctx->pc = 0x16D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D84Cu;
    // 0x16d850: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16D84Cu, 0x16D854u)) {
        return;
    }
    ctx->pc = 0x16D854u;
label_16d854:
    // 0x16d854: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d85c: 0x8c46f6c0  lw          $a2, -0x940($v0)
    ctx->pc = 0x16d85cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF6C0u));
    // 0x16d860: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16D860u;
    SET_GPR_U32(ctx, 31, 0x16D868u);
    ctx->pc = 0x16D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D860u;
    // 0x16d864: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16D860u, 0x16D868u)) {
        return;
    }
    ctx->pc = 0x16D868u;
label_16d868:
    // 0x16d868: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d86c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d870: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x16D870u;
    {
        const bool branch_taken_0x16d870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D870u;
        // 0x16d874: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d870) {
            ctx->pc = 0x16D940u;
            goto label_16d940;
        }
    }
    ctx->pc = 0x16D878u;
    // 0x16d878: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d87c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16d880:
    // 0x16d880: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x16d880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16d884: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x16D884u;
    {
        const bool branch_taken_0x16d884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D884u;
        // 0x16d888: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d884) {
            ctx->pc = 0x16D910u;
            goto label_16d910;
        }
    }
    ctx->pc = 0x16D88Cu;
    // 0x16d88c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16d890: 0x24424d10  addiu       $v0, $v0, 0x4D10
    ctx->pc = 0x16d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19728));
    // 0x16d894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d89c: 0x800008  jr          $a0
    ctx->pc = 0x16D89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D8A4u: goto label_16d8a4;
            case 0x16D8C4u: goto label_16d8c4;
            case 0x16D8D4u: goto label_16d8d4;
            case 0x16D8E4u: goto label_16d8e4;
            case 0x16D8F4u: goto label_16d8f4;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D89Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16D8A4u;
label_16d8a4:
    // 0x16d8a4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16d8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d8a8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16d8ac: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16d8b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8b4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16D8B4u;
    SET_GPR_U32(ctx, 31, 0x16D8BCu);
    ctx->pc = 0x16D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8B4u;
    // 0x16d8b8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16D8B4u, 0x16D8BCu)) {
        return;
    }
    ctx->pc = 0x16D8BCu;
label_16d8bc:
    // 0x16d8bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16D8BCu;
    {
        const bool branch_taken_0x16d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8BCu;
        // 0x16d8c0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8bc) {
            ctx->pc = 0x16D914u;
            goto label_16d914;
        }
    }
    ctx->pc = 0x16D8C4u;
label_16d8c4:
    // 0x16d8c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d8c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d8cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16D8CCu;
    {
        const bool branch_taken_0x16d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8CCu;
        // 0x16d8d0: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8cc) {
            ctx->pc = 0x16D910u;
            goto label_16d910;
        }
    }
    ctx->pc = 0x16D8D4u;
label_16d8d4:
    // 0x16d8d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d8d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d8dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16D8DCu;
    {
        const bool branch_taken_0x16d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8DCu;
        // 0x16d8e0: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8dc) {
            ctx->pc = 0x16D910u;
            goto label_16d910;
        }
    }
    ctx->pc = 0x16D8E4u;
label_16d8e4:
    // 0x16d8e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d8e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d8ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16D8ECu;
    {
        const bool branch_taken_0x16d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8ECu;
        // 0x16d8f0: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8ec) {
            ctx->pc = 0x16D910u;
            goto label_16d910;
        }
    }
    ctx->pc = 0x16D8F4u;
label_16d8f4:
    // 0x16d8f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d8f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d8fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D8FCu;
    {
        const bool branch_taken_0x16d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8FCu;
        // 0x16d900: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8fc) {
            ctx->pc = 0x16D910u;
            goto label_16d910;
        }
    }
    ctx->pc = 0x16D904u;
label_16d904:
    // 0x16d904: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d908: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d90c: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x16d90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_16d910:
    // 0x16d910: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16d914:
    // 0x16d914: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d91c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d924: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16D924u;
    SET_GPR_U32(ctx, 31, 0x16D92Cu);
    ctx->pc = 0x16D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D924u;
    // 0x16d928: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16D924u, 0x16D92Cu)) {
        return;
    }
    ctx->pc = 0x16D92Cu;
label_16d92c:
    // 0x16d92c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d930: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d934: 0x5460ffd2  bnel        $v1, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x16D934u;
    {
        const bool branch_taken_0x16d934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d934) {
            ctx->pc = 0x16D938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D934u;
            // 0x16d938: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d880;
        }
    }
    ctx->pc = 0x16D93Cu;
    // 0x16d93c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d940:
    // 0x16d940: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d948: 0x3e00008  jr          $ra
    ctx->pc = 0x16D948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D948u;
        // 0x16d94c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D950u;
}
