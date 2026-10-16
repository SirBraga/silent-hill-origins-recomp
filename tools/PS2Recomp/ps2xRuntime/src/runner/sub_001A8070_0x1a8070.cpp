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

// Function: sub_001A8070
// Address: 0x1a8070 - 0x1a8198
void sub_001A8070_0x1a8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8070_0x1a8070");
#endif

    switch (ctx->pc) {
        case 0x1a80b4u: goto label_1a80b4;
        case 0x1a80d0u: goto label_1a80d0;
        case 0x1a80d8u: goto label_1a80d8;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8148u: goto label_1a8148;
        case 0x1a815cu: goto label_1a815c;
        default: break;
    }

    ctx->pc = 0x1a8070u;

    // 0x1a8070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a8070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a8074: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a8074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a8078: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1a8078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1a807c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a807cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8080: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a8080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a8084: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a8084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a8088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a808c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8090: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a8090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a8094: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A8094u;
    {
        const bool branch_taken_0x1a8094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8094u;
        // 0x1a8098: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8094) {
            ctx->pc = 0x1A8174u;
            goto label_1a8174;
        }
    }
    ctx->pc = 0x1A809Cu;
    // 0x1a809c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a80a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A80A0u;
    {
        const bool branch_taken_0x1a80a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A0u;
        // 0x1a80a4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80a0) {
            ctx->pc = 0x1A8128u;
            goto label_1a8128;
        }
    }
    ctx->pc = 0x1A80A8u;
    // 0x1a80a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a80a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80ac: 0xc06a2a0  jal         func_1A8A80
    ctx->pc = 0x1A80ACu;
    SET_GPR_U32(ctx, 31, 0x1A80B4u);
    ctx->pc = 0x1A80B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80ACu;
    // 0x1a80b0: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8A80u, 0x1A80ACu, 0x1A80B4u)) {
        return;
    }
    ctx->pc = 0x1A80B4u;
label_1a80b4:
    // 0x1a80b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a80b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a80bc: 0x8c430200  lw          $v1, 0x200($v0)
    ctx->pc = 0x1a80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x1a80c0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A80C0u;
    {
        const bool branch_taken_0x1a80c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a80c0) {
            ctx->pc = 0x1A80C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A80C0u;
            // 0x1a80c4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A80E4u;
            goto label_1a80e4;
        }
    }
    ctx->pc = 0x1A80C8u;
    // 0x1a80c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1A80C8u;
    {
        const bool branch_taken_0x1a80c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80C8u;
        // 0x1a80cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80c8) {
            ctx->pc = 0x1A8178u;
            goto label_1a8178;
        }
    }
    ctx->pc = 0x1A80D0u;
label_1a80d0:
    // 0x1a80d0: 0xc069ffc  jal         func_1A7FF0
    ctx->pc = 0x1A80D0u;
    SET_GPR_U32(ctx, 31, 0x1A80D8u);
    ctx->pc = 0x1A80D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80D0u;
    // 0x1a80d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7FF0u, 0x1A80D0u, 0x1A80D8u)) {
        return;
    }
    ctx->pc = 0x1A80D8u;
label_1a80d8:
    // 0x1a80d8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A80D8u;
    {
        const bool branch_taken_0x1a80d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80D8u;
        // 0x1a80dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80d8) {
            ctx->pc = 0x1A8178u;
            goto label_1a8178;
        }
    }
    ctx->pc = 0x1A80E0u;
    // 0x1a80e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a80e4:
    // 0x1a80e4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1a80e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a80e8: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1a80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1a80ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a80f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a80f4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A80F4u;
    {
        const bool branch_taken_0x1a80f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80F4u;
        // 0x1a80f8: 0x24a20004  addiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80f4) {
            ctx->pc = 0x1A810Cu;
            goto label_1a810c;
        }
    }
    ctx->pc = 0x1A80FCu;
    // 0x1a80fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a80fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8100: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a8100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a8104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8104u;
    {
        const bool branch_taken_0x1a8104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8104u;
        // 0x1a8108: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8104) {
            ctx->pc = 0x1A8110u;
            goto label_1a8110;
        }
    }
    ctx->pc = 0x1A810Cu;
label_1a810c:
    // 0x1a810c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a810cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8110:
    // 0x1a8110: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A8110u;
    {
        const bool branch_taken_0x1a8110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8110u;
        // 0x1a8114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8110) {
            ctx->pc = 0x1A80D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a80d0;
        }
    }
    ctx->pc = 0x1A8118u;
    // 0x1a8118: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A8118u;
    {
        const bool branch_taken_0x1a8118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8118u;
        // 0x1a811c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8118) {
            ctx->pc = 0x1A8178u;
            goto label_1a8178;
        }
    }
    ctx->pc = 0x1A8120u;
label_1a8120:
    // 0x1a8120: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A8120u;
    {
        const bool branch_taken_0x1a8120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8120u;
        // 0x1a8124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8120) {
            ctx->pc = 0x1A8178u;
            goto label_1a8178;
        }
    }
    ctx->pc = 0x1A8128u;
label_1a8128:
    // 0x1a8128: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1a8128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a812c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a812cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8130: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1a8130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8134: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a8138: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a8138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a813c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A813Cu;
    {
        const bool branch_taken_0x1a813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A813Cu;
        // 0x1a8140: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a813c) {
            ctx->pc = 0x1A8174u;
            goto label_1a8174;
        }
    }
    ctx->pc = 0x1A8144u;
    // 0x1a8144: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8148:
    // 0x1a8148: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a8148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a814c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a814cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8150: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a8154: 0xc069ffc  jal         func_1A7FF0
    ctx->pc = 0x1A8154u;
    SET_GPR_U32(ctx, 31, 0x1A815Cu);
    ctx->pc = 0x1A8158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8154u;
    // 0x1a8158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7FF0u, 0x1A8154u, 0x1A815Cu)) {
        return;
    }
    ctx->pc = 0x1A815Cu;
label_1a815c:
    // 0x1a815c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A815Cu;
    {
        const bool branch_taken_0x1a815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A815Cu;
        // 0x1a8160: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a815c) {
            ctx->pc = 0x1A8120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8120;
        }
    }
    ctx->pc = 0x1A8164u;
    // 0x1a8164: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a8168: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a816c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A816Cu;
    {
        const bool branch_taken_0x1a816c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A816Cu;
        // 0x1a8170: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a816c) {
            ctx->pc = 0x1A8148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8148;
        }
    }
    ctx->pc = 0x1A8174u;
label_1a8174:
    // 0x1a8174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8178:
    // 0x1a8178: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a8178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a817c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a817cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8180: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a8180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8188: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1a8188u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a818c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a818cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8190: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8190u;
        // 0x1a8194: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8198u;
}
