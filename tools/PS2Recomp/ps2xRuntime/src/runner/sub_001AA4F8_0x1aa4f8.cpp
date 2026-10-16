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

// Function: sub_001AA4F8
// Address: 0x1aa4f8 - 0x1aa5b0
void sub_001AA4F8_0x1aa4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA4F8_0x1aa4f8");
#endif

    switch (ctx->pc) {
        case 0x1aa530u: goto label_1aa530;
        case 0x1aa538u: goto label_1aa538;
        case 0x1aa544u: goto label_1aa544;
        case 0x1aa558u: goto label_1aa558;
        case 0x1aa564u: goto label_1aa564;
        case 0x1aa588u: goto label_1aa588;
        default: break;
    }

    ctx->pc = 0x1aa4f8u;

    // 0x1aa4f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aa4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1aa4fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aa4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aa500: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1aa500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1aa504: 0x2442b5e8  addiu       $v0, $v0, -0x4A18
    ctx->pc = 0x1aa504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948328));
    // 0x1aa508: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1aa508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1aa50c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aa50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa510: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1aa510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1aa514: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1aa514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1aa518: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1aa518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1aa51c: 0x241301f3  addiu       $s3, $zero, 0x1F3
    ctx->pc = 0x1aa51cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 499));
    // 0x1aa520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa524: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1aa524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa528: 0xc0694e6  jal         func_1A5398
    ctx->pc = 0x1AA528u;
    SET_GPR_U32(ctx, 31, 0x1AA530u);
    ctx->pc = 0x1AA52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA528u;
    // 0x1aa52c: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5398u, 0x1AA528u, 0x1AA530u)) {
        return;
    }
    ctx->pc = 0x1AA530u;
label_1aa530:
    // 0x1aa530: 0xc06a9f8  jal         func_1AA7E0
    ctx->pc = 0x1AA530u;
    SET_GPR_U32(ctx, 31, 0x1AA538u);
    ctx->pc = 0x1AA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA530u;
    // 0x1aa534: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA7E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA7E0u, 0x1AA530u, 0x1AA538u)) {
        return;
    }
    ctx->pc = 0x1AA538u;
label_1aa538:
    // 0x1aa538: 0x24045dd0  addiu       $a0, $zero, 0x5DD0
    ctx->pc = 0x1aa538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24016));
    // 0x1aa53c: 0xc080924  jal         func_202490
    ctx->pc = 0x1AA53Cu;
    SET_GPR_U32(ctx, 31, 0x1AA544u);
    ctx->pc = 0x1AA540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA53Cu;
    // 0x1aa540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1AA53Cu, 0x1AA544u)) {
        return;
    }
    ctx->pc = 0x1AA544u;
label_1aa544:
    // 0x1aa544: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x1aa544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x1aa548: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x1aa548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1aa54c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1aa54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1aa550: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1aa550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa554: 0x0  nop
    ctx->pc = 0x1aa554u;
    // NOP
label_1aa558:
    // 0x1aa558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa55c: 0xc069c3c  jal         func_1A70F0
    ctx->pc = 0x1AA55Cu;
    SET_GPR_U32(ctx, 31, 0x1AA564u);
    ctx->pc = 0x1AA560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA55Cu;
    // 0x1aa560: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A70F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A70F0u, 0x1AA55Cu, 0x1AA564u)) {
        return;
    }
    ctx->pc = 0x1AA564u;
label_1aa564:
    // 0x1aa564: 0x0  nop
    ctx->pc = 0x1aa564u;
    // NOP
    // 0x1aa568: 0x1674fffb  bne         $s3, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AA568u;
    {
        const bool branch_taken_0x1aa568 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x1AA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA568u;
        // 0x1aa56c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa568) {
            ctx->pc = 0x1AA558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa558;
        }
    }
    ctx->pc = 0x1AA570u;
    // 0x1aa570: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x1aa570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x1aa574: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1aa574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa57c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1aa57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1aa580: 0xc069502  jal         func_1A5408
    ctx->pc = 0x1AA580u;
    SET_GPR_U32(ctx, 31, 0x1AA588u);
    ctx->pc = 0x1AA584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA580u;
    // 0x1aa584: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5408u, 0x1AA580u, 0x1AA588u)) {
        return;
    }
    ctx->pc = 0x1AA588u;
label_1aa588:
    // 0x1aa588: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1aa588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa58c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1aa58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa590: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1aa590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa594: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1aa594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa598: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1aa598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa59c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1aa59cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5A4u;
        // 0x1aa5a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA5ACu;
    // 0x1aa5ac: 0x0  nop
    ctx->pc = 0x1aa5acu;
    // NOP
    ctx->pc = 0x1aa5b0u;
}
