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

// Function: sub_00267078
// Address: 0x267078 - 0x2671a8
void sub_00267078_0x267078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267078_0x267078");
#endif

    switch (ctx->pc) {
        case 0x2670e0u: goto label_2670e0;
        case 0x2670fcu: goto label_2670fc;
        case 0x267108u: goto label_267108;
        case 0x267118u: goto label_267118;
        case 0x267130u: goto label_267130;
        case 0x267150u: goto label_267150;
        default: break;
    }

    ctx->pc = 0x267078u;

    // 0x267078: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x267078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26707c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x26707cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x267080: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x267080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x267084: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x267084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x267088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26708c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x267090: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x267090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267094: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x267094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x267098: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x267098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x26709c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2670a0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2670A0u;
    {
        const bool branch_taken_0x2670a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2670A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670A0u;
        // 0x2670a4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670a0) {
            ctx->pc = 0x2670B0u;
            goto label_2670b0;
        }
    }
    ctx->pc = 0x2670A8u;
    // 0x2670a8: 0x8c620fc8  lw          $v0, 0xFC8($v1)
    ctx->pc = 0x2670a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4040)));
    // 0x2670ac: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2670acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2670b0:
    // 0x2670b0: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2670b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x2670b4: 0x8cd20008  lw          $s2, 0x8($a2)
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2670b8: 0x8f8286f4  lw          $v0, -0x790C($gp)
    ctx->pc = 0x2670b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x2670bc: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2670BCu;
    {
        const bool branch_taken_0x2670bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2670C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670BCu;
        // 0x2670c0: 0x94740008  lhu         $s4, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670bc) {
            ctx->pc = 0x2670D8u;
            goto label_2670d8;
        }
    }
    ctx->pc = 0x2670C4u;
    // 0x2670c4: 0x8f8286f0  lw          $v0, -0x7910($gp)
    ctx->pc = 0x2670c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x2670c8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2670C8u;
    {
        const bool branch_taken_0x2670c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2670CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670C8u;
        // 0x2670cc: 0xdf8286f8  ld          $v0, -0x7908($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670c8) {
            ctx->pc = 0x2670D8u;
            goto label_2670d8;
        }
    }
    ctx->pc = 0x2670D0u;
    // 0x2670d0: 0x12820022  beq         $s4, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2670D0u;
    {
        const bool branch_taken_0x2670d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2670D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670D0u;
        // 0x2670d4: 0x3c150070  lui         $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670d0) {
            ctx->pc = 0x26715Cu;
            goto label_26715c;
        }
    }
    ctx->pc = 0x2670D8u;
label_2670d8:
    // 0x2670d8: 0xc08994a  jal         func_226528
    ctx->pc = 0x2670D8u;
    SET_GPR_U32(ctx, 31, 0x2670E0u);
    ctx->pc = 0x2670DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670D8u;
    // 0x2670dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x2670D8u, 0x2670E0u)) {
        return;
    }
    ctx->pc = 0x2670E0u;
label_2670e0:
    // 0x2670e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2670e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670e4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2670e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2670e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2670e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2670ec: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2670ECu;
    {
        const bool branch_taken_0x2670ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2670F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670ECu;
        // 0x2670f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670ec) {
            ctx->pc = 0x267120u;
            goto label_267120;
        }
    }
    ctx->pc = 0x2670F4u;
    // 0x2670f4: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x2670F4u;
    SET_GPR_U32(ctx, 31, 0x2670FCu);
    ctx->pc = 0x2670F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670F4u;
    // 0x2670f8: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x2670F4u, 0x2670FCu)) {
        return;
    }
    ctx->pc = 0x2670FCu;
label_2670fc:
    // 0x2670fc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2670fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267100: 0xc08994a  jal         func_226528
    ctx->pc = 0x267100u;
    SET_GPR_U32(ctx, 31, 0x267108u);
    ctx->pc = 0x267104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267100u;
    // 0x267104: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x267100u, 0x267108u)) {
        return;
    }
    ctx->pc = 0x267108u;
label_267108:
    // 0x267108: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26710c: 0x26045370  addiu       $a0, $s0, 0x5370
    ctx->pc = 0x26710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21360));
    // 0x267110: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x267110u;
    SET_GPR_U32(ctx, 31, 0x267118u);
    ctx->pc = 0x267114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267110u;
    // 0x267114: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x267110u, 0x267118u)) {
        return;
    }
    ctx->pc = 0x267118u;
label_267118:
    // 0x267118: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x267118u;
    {
        const bool branch_taken_0x267118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267118u;
        // 0x26711c: 0x26a45370  addiu       $a0, $s5, 0x5370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267118) {
            ctx->pc = 0x267134u;
            goto label_267134;
        }
    }
    ctx->pc = 0x267120u;
label_267120:
    // 0x267120: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x267120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x267124: 0x26045370  addiu       $a0, $s0, 0x5370
    ctx->pc = 0x267124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21360));
    // 0x267128: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x267128u;
    SET_GPR_U32(ctx, 31, 0x267130u);
    ctx->pc = 0x26712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267128u;
    // 0x26712c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x267128u, 0x267130u)) {
        return;
    }
    ctx->pc = 0x267130u;
label_267130:
    // 0x267130: 0x26a45370  addiu       $a0, $s5, 0x5370
    ctx->pc = 0x267130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21360));
label_267134:
    // 0x267134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267138: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x267138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26713c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x26713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x267140: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x267140u;
    {
        const bool branch_taken_0x267140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x267140) {
            ctx->pc = 0x267144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267140u;
            // 0x267144: 0xaf9286f4  sw          $s2, -0x790C($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267154u;
            goto label_267154;
        }
    }
    ctx->pc = 0x267148u;
    // 0x267148: 0xc092dbc  jal         func_24B6F0
    ctx->pc = 0x267148u;
    SET_GPR_U32(ctx, 31, 0x267150u);
    ctx->pc = 0x26714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267148u;
    // 0x26714c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x267148u, 0x267150u)) {
        return;
    }
    ctx->pc = 0x267150u;
label_267150:
    // 0x267150: 0xaf9286f4  sw          $s2, -0x790C($gp)
    ctx->pc = 0x267150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 18));
label_267154:
    // 0x267154: 0xff9486f8  sd          $s4, -0x7908($gp)
    ctx->pc = 0x267154u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 20));
    // 0x267158: 0xaf9186f0  sw          $s1, -0x7910($gp)
    ctx->pc = 0x267158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U32(ctx, 17));
label_26715c:
    // 0x26715c: 0x26a55370  addiu       $a1, $s5, 0x5370
    ctx->pc = 0x26715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 21360));
    // 0x267160: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x267160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267164: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x267164u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x267168: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x267168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26716c: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x26716cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x267170: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x267170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267174: 0x78a40010  lq          $a0, 0x10($a1)
    ctx->pc = 0x267174u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x267178: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x267178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26717c: 0x7e640010  sq          $a0, 0x10($s3)
    ctx->pc = 0x26717cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 4));
    // 0x267180: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x267180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267184: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x267184u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x267188: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26718c: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x26718cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x267190: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x267190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267194: 0x78a40030  lq          $a0, 0x30($a1)
    ctx->pc = 0x267194u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x267198: 0x7e640030  sq          $a0, 0x30($s3)
    ctx->pc = 0x267198u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 4));
    // 0x26719c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26719cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2671a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2671A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2671A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671A0u;
        // 0x2671a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2671A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2671A8u;
}
