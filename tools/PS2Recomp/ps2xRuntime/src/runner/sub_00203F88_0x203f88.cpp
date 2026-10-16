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

// Function: sub_00203F88
// Address: 0x203f88 - 0x204108
void sub_00203F88_0x203f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203F88_0x203f88");
#endif

    switch (ctx->pc) {
        case 0x203fecu: goto label_203fec;
        case 0x204000u: goto label_204000;
        case 0x204030u: goto label_204030;
        case 0x2040a0u: goto label_2040a0;
        case 0x2040acu: goto label_2040ac;
        default: break;
    }

    ctx->pc = 0x203f88u;

    // 0x203f88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x203f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x203f8c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x203f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x203f90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x203f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x203f94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x203f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x203f98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x203f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x203f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x203fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fa4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x203fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x203fa8: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x203fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x203fac: 0x8c432cf0  lw          $v1, 0x2CF0($v0)
    ctx->pc = 0x203facu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x702CF0u));
    // 0x203fb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fb4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x203FB4u;
    {
        const bool branch_taken_0x203fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FB4u;
        // 0x203fb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fb4) {
            ctx->pc = 0x203FECu;
            goto label_203fec;
        }
    }
    ctx->pc = 0x203FBCu;
    // 0x203fbc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x203fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x203fc0: 0x26432ce0  addiu       $v1, $s2, 0x2CE0
    ctx->pc = 0x203fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11488));
    // 0x203fc4: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x203fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
    // 0x203fc8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x203fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x203fcc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x203fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x203fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x203fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203fd4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x203fd8: 0xae652cf0  sw          $a1, 0x2CF0($s3)
    ctx->pc = 0x203fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11504), GPR_U32(ctx, 5));
    // 0x203fdc: 0xae402ce0  sw          $zero, 0x2CE0($s2)
    ctx->pc = 0x203fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11488), GPR_U32(ctx, 0));
    // 0x203fe0: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x203fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x203fe4: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x203FE4u;
    SET_GPR_U32(ctx, 31, 0x203FECu);
    ctx->pc = 0x203FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FE4u;
    // 0x203fe8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x203FE4u, 0x203FECu)) {
        return;
    }
    ctx->pc = 0x203FECu;
label_203fec:
    // 0x203fec: 0x26422ce0  addiu       $v0, $s2, 0x2CE0
    ctx->pc = 0x203fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11488));
    // 0x203ff0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x203ff4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x203FF4u;
    {
        const bool branch_taken_0x203ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ff4) {
            ctx->pc = 0x20401Cu;
            goto label_20401c;
        }
    }
    ctx->pc = 0x203FFCu;
    // 0x203ffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x203ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_204000:
    // 0x204000: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204004: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204004u;
    {
        const bool branch_taken_0x204004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x204004) {
            ctx->pc = 0x204008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204004u;
            // 0x204008: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204014u;
            goto label_204014;
        }
    }
    ctx->pc = 0x20400Cu;
    // 0x20400c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x20400Cu;
    {
        const bool branch_taken_0x20400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20400Cu;
        // 0x204010: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20400c) {
            ctx->pc = 0x2040ECu;
            goto label_2040ec;
        }
    }
    ctx->pc = 0x204014u;
label_204014:
    // 0x204014: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x204014u;
    {
        const bool branch_taken_0x204014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x204014) {
            ctx->pc = 0x204018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204014u;
            // 0x204018: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204000;
        }
    }
    ctx->pc = 0x20401Cu;
label_20401c:
    // 0x20401c: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x20401Cu;
    {
        const bool branch_taken_0x20401c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20401Cu;
        // 0x204020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20401c) {
            ctx->pc = 0x2040E8u;
            goto label_2040e8;
        }
    }
    ctx->pc = 0x204024u;
    // 0x204024: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x204028: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x204028u;
    SET_GPR_U32(ctx, 31, 0x204030u);
    ctx->pc = 0x20402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204028u;
    // 0x20402c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x204028u, 0x204030u)) {
        return;
    }
    ctx->pc = 0x204030u;
label_204030:
    // 0x204030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204034: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x204038: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x204038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x20403c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20403cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x204040: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x204040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x204044: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x204044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x204048: 0x24426a48  addiu       $v0, $v0, 0x6A48
    ctx->pc = 0x204048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x20404c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x20404cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x204050: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x204050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x204054: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x204054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x204058: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x204058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20405c: 0x8e622cf0  lw          $v0, 0x2CF0($s3)
    ctx->pc = 0x20405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11504)));
    // 0x204060: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x204060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x204064: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x204064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x204068: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x204068u;
    {
        const bool branch_taken_0x204068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204068u;
        // 0x20406c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204068) {
            ctx->pc = 0x2040A0u;
            goto label_2040a0;
        }
    }
    ctx->pc = 0x204070u;
    // 0x204070: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x204070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x204074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204078: 0x26452ce0  addiu       $a1, $s2, 0x2CE0
    ctx->pc = 0x204078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11488));
    // 0x20407c: 0xae632cf0  sw          $v1, 0x2CF0($s3)
    ctx->pc = 0x20407cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11504), GPR_U32(ctx, 3));
    // 0x204080: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x204080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
    // 0x204084: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x204084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x204088: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x204088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x20408c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x20408cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x204090: 0xae402ce0  sw          $zero, 0x2CE0($s2)
    ctx->pc = 0x204090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11488), GPR_U32(ctx, 0));
    // 0x204094: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x204098: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x204098u;
    SET_GPR_U32(ctx, 31, 0x2040A0u);
    ctx->pc = 0x20409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204098u;
    // 0x20409c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x204098u, 0x2040A0u)) {
        return;
    }
    ctx->pc = 0x2040A0u;
label_2040a0:
    // 0x2040a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2040a4: 0xc080858  jal         func_202160
    ctx->pc = 0x2040A4u;
    SET_GPR_U32(ctx, 31, 0x2040ACu);
    ctx->pc = 0x2040A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040A4u;
    // 0x2040a8: 0x26512ce0  addiu       $s1, $s2, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x2040A4u, 0x2040ACu)) {
        return;
    }
    ctx->pc = 0x2040ACu;
label_2040ac:
    // 0x2040ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2040acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2040b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2040b4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2040b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2040b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2040b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2040bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2040BCu;
    {
        const bool branch_taken_0x2040bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040BCu;
        // 0x2040c0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040bc) {
            ctx->pc = 0x2040C8u;
            goto label_2040c8;
        }
    }
    ctx->pc = 0x2040C4u;
    // 0x2040c4: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2040c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_2040c8:
    // 0x2040c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2040cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2040CCu;
    {
        const bool branch_taken_0x2040cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040cc) {
            ctx->pc = 0x2040D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2040CCu;
            // 0x2040d0: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2040D4u;
            goto label_2040d4;
        }
    }
    ctx->pc = 0x2040D4u;
label_2040d4:
    // 0x2040d4: 0x8e422ce0  lw          $v0, 0x2CE0($s2)
    ctx->pc = 0x2040d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11488)));
    // 0x2040d8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2040d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040dc: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2040dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2040e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2040e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2040e4: 0xae422ce0  sw          $v0, 0x2CE0($s2)
    ctx->pc = 0x2040e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11488), GPR_U32(ctx, 2));
label_2040e8:
    // 0x2040e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2040e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2040ec:
    // 0x2040ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2040ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2040f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2040f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2040f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2040f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2040f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2040f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2040fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2040fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204100: 0x3e00008  jr          $ra
    ctx->pc = 0x204100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204100u;
        // 0x204104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204108u;
}
