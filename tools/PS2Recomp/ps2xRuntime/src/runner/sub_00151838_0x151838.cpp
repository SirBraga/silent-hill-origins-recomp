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

// Function: sub_00151838
// Address: 0x151838 - 0x151934
void sub_00151838_0x151838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151838_0x151838");
#endif

    switch (ctx->pc) {
        case 0x151878u: goto label_151878;
        case 0x1518e0u: goto label_1518e0;
        case 0x1518f0u: goto label_1518f0;
        case 0x151900u: goto label_151900;
        case 0x151910u: goto label_151910;
        default: break;
    }

    ctx->pc = 0x151838u;

    // 0x151838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15183c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15183cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151840: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151844: 0x10e00034  beqz        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x151844u;
    {
        const bool branch_taken_0x151844 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x151848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151844u;
        // 0x151848: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151844) {
            ctx->pc = 0x151918u;
            goto label_151918;
        }
    }
    ctx->pc = 0x15184Cu;
    // 0x15184c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x151850: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x151850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151854: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x151854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x151858: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151858u;
    {
        const bool branch_taken_0x151858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151858u;
        // 0x15185c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151858) {
            ctx->pc = 0x15186Cu;
            goto label_15186c;
        }
    }
    ctx->pc = 0x151860u;
    // 0x151860: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x151860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
    // 0x151864: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151864u;
    {
        const bool branch_taken_0x151864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151864u;
        // 0x151868: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151864) {
            ctx->pc = 0x151880u;
            goto label_151880;
        }
    }
    ctx->pc = 0x15186Cu;
label_15186c:
    // 0x15186c: 0xc4ec0004  lwc1        $f12, 0x4($a3)
    ctx->pc = 0x15186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x151870: 0xc05457e  jal         func_1515F8
    ctx->pc = 0x151870u;
    SET_GPR_U32(ctx, 31, 0x151878u);
    ctx->pc = 0x151874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151870u;
    // 0x151874: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1515F8u, 0x151870u, 0x151878u)) {
        return;
    }
    ctx->pc = 0x151878u;
label_151878:
    // 0x151878: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x151878u;
    {
        const bool branch_taken_0x151878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151878u;
        // 0x15187c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151878) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x151880u;
label_151880:
    // 0x151880: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x151880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
    // 0x151884: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x151884u;
    {
        const bool branch_taken_0x151884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151884u;
        // 0x151888: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151884) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x15188Cu;
    // 0x15188c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x15188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x151890: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x151890u;
    {
        const bool branch_taken_0x151890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151890u;
        // 0x151894: 0x8ce5000c  lw          $a1, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151890) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x151898u;
    // 0x151898: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x151898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15189c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1518a0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1518a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1518a4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1518a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1518a8: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x1518a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x1518ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1518acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1518b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1518b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1518b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1518b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1518B8u;
    {
        const bool branch_taken_0x1518b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518B8u;
        // 0x1518bc: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518b8) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x1518C0u;
    // 0x1518c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1518c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1518c4: 0x24422440  addiu       $v0, $v0, 0x2440
    ctx->pc = 0x1518c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9280));
    // 0x1518c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1518c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1518cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1518ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1518d0: 0x800008  jr          $a0
    ctx->pc = 0x1518D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1518D8u: goto label_1518d8;
            case 0x1518E8u: goto label_1518e8;
            case 0x1518F8u: goto label_1518f8;
            case 0x151908u: goto label_151908;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1518D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1518D8u;
label_1518d8:
    // 0x1518d8: 0xc054650  jal         func_151940
    ctx->pc = 0x1518D8u;
    SET_GPR_U32(ctx, 31, 0x1518E0u);
    ctx->pc = 0x1518DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518D8u;
    // 0x1518dc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151940u, 0x1518D8u, 0x1518E0u)) {
        return;
    }
    ctx->pc = 0x1518E0u;
label_1518e0:
    // 0x1518e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1518E0u;
    {
        const bool branch_taken_0x1518e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518E0u;
        // 0x1518e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518e0) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x1518E8u;
label_1518e8:
    // 0x1518e8: 0xc0547f8  jal         func_151FE0
    ctx->pc = 0x1518E8u;
    SET_GPR_U32(ctx, 31, 0x1518F0u);
    ctx->pc = 0x1518ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518E8u;
    // 0x1518ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151FE0u, 0x1518E8u, 0x1518F0u)) {
        return;
    }
    ctx->pc = 0x1518F0u;
label_1518f0:
    // 0x1518f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1518F0u;
    {
        const bool branch_taken_0x1518f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518F0u;
        // 0x1518f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518f0) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x1518F8u;
label_1518f8:
    // 0x1518f8: 0xc054884  jal         func_152210
    ctx->pc = 0x1518F8u;
    SET_GPR_U32(ctx, 31, 0x151900u);
    ctx->pc = 0x1518FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518F8u;
    // 0x1518fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152210u, 0x1518F8u, 0x151900u)) {
        return;
    }
    ctx->pc = 0x151900u;
label_151900:
    // 0x151900: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x151900u;
    {
        const bool branch_taken_0x151900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151900u;
        // 0x151904: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151900) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x151908u;
label_151908:
    // 0x151908: 0xc05489e  jal         func_152278
    ctx->pc = 0x151908u;
    SET_GPR_U32(ctx, 31, 0x151910u);
    ctx->pc = 0x15190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151908u;
    // 0x15190c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152278u, 0x151908u, 0x151910u)) {
        return;
    }
    ctx->pc = 0x151910u;
label_151910:
    // 0x151910: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151910u;
    {
        const bool branch_taken_0x151910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151910u;
        // 0x151914: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151910) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x151918u;
label_151918:
    // 0x151918: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15191c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x15191cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151920: 0x8c43fa68  lw          $v1, -0x598($v0)
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BFA68u));
    // 0x151924: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x151924u;
    {
        const bool branch_taken_0x151924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151924u;
        // 0x151928: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151924) {
            ctx->pc = 0x151938u;
            return;
        }
    }
    ctx->pc = 0x15192Cu;
    // 0x15192c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151930: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x151930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x151934u;
}
