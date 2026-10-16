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

// Function: sub_0031FB60
// Address: 0x31fb60 - 0x31fcf8
void sub_0031FB60_0x31fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FB60_0x31fb60");
#endif

    switch (ctx->pc) {
        case 0x31fbb4u: goto label_31fbb4;
        case 0x31fbe4u: goto label_31fbe4;
        case 0x31fc40u: goto label_31fc40;
        default: break;
    }

    ctx->pc = 0x31fb60u;

    // 0x31fb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31fb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31fb64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31fb68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31fb6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31fb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31fb70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31fb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31fb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb78: 0x12220059  beq         $s1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x31FB78u;
    {
        const bool branch_taken_0x31fb78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x31FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB78u;
        // 0x31fb7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb78) {
            ctx->pc = 0x31FCE0u;
            goto label_31fce0;
        }
    }
    ctx->pc = 0x31FB80u;
    // 0x31fb80: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x31fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x31fb84: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FB84u;
    {
        const bool branch_taken_0x31fb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fb84) {
            ctx->pc = 0x31FB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FB84u;
            // 0x31fb88: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FBA0u;
            goto label_31fba0;
        }
    }
    ctx->pc = 0x31FB8Cu;
    // 0x31fb8c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31fb90: 0x8c436ccc  lw          $v1, 0x6CCC($v0)
    ctx->pc = 0x31fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686CCCu));
    // 0x31fb94: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x31fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x31fb98: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x31fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x31fb9c: 0x0  nop
    ctx->pc = 0x31fb9cu;
    // NOP
label_31fba0:
    // 0x31fba0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x31fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x31fba4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FBA4u;
    {
        const bool branch_taken_0x31fba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fba4) {
            ctx->pc = 0x31FBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FBA4u;
            // 0x31fba8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FBB8u;
            goto label_31fbb8;
        }
    }
    ctx->pc = 0x31FBACu;
    // 0x31fbac: 0xc0c4cfe  jal         func_3133F8
    ctx->pc = 0x31FBACu;
    SET_GPR_U32(ctx, 31, 0x31FBB4u);
    ctx->pc = 0x3133F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3133F8u, 0x31FBACu, 0x31FBB4u)) {
        return;
    }
    ctx->pc = 0x31FBB4u;
label_31fbb4:
    // 0x31fbb4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x31fbb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_31fbb8:
    // 0x31fbb8: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x31fbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x31fbbc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x31fbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x31fbc0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31FBC0u;
    {
        const bool branch_taken_0x31fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBC0u;
        // 0x31fbc4: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbc0) {
            ctx->pc = 0x31FC0Cu;
            goto label_31fc0c;
        }
    }
    ctx->pc = 0x31FBC8u;
    // 0x31fbc8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x31fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x31fbcc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31FBCCu;
    {
        const bool branch_taken_0x31fbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBCCu;
        // 0x31fbd0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbcc) {
            ctx->pc = 0x31FC40u;
            goto label_31fc40;
        }
    }
    ctx->pc = 0x31FBD4u;
    // 0x31fbd4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x31FBD4u;
    {
        const bool branch_taken_0x31fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fbd4) {
            ctx->pc = 0x31FBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FBD4u;
            // 0x31fbd8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FC04u;
            goto label_31fc04;
        }
    }
    ctx->pc = 0x31FBDCu;
    // 0x31fbdc: 0xc0c4c8a  jal         func_313228
    ctx->pc = 0x31FBDCu;
    SET_GPR_U32(ctx, 31, 0x31FBE4u);
    ctx->pc = 0x31FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FBDCu;
    // 0x31fbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x31FBDCu, 0x31FBE4u)) {
        return;
    }
    ctx->pc = 0x31FBE4u;
label_31fbe4:
    // 0x31fbe4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x31FBE4u;
    {
        const bool branch_taken_0x31fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBE4u;
        // 0x31fbe8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbe4) {
            ctx->pc = 0x31FCE0u;
            goto label_31fce0;
        }
    }
    ctx->pc = 0x31FBECu;
    // 0x31fbec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x31fbecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31fbf0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x31fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x31fbf4: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x31fbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x31fbf8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x31fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x31fbfc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x31fbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x31fc00: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x31fc00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_31fc04:
    // 0x31fc04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x31fc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x31fc08: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x31fc08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_31fc0c:
    // 0x31fc0c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x31fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x31fc10: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31FC10u;
    {
        const bool branch_taken_0x31fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC10u;
        // 0x31fc14: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc10) {
            ctx->pc = 0x31FC68u;
            goto label_31fc68;
        }
    }
    ctx->pc = 0x31FC18u;
    // 0x31fc18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fc1c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x31fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x31fc20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31fc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31fc24: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FC24u;
    {
        const bool branch_taken_0x31fc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fc24) {
            ctx->pc = 0x31FC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC24u;
            // 0x31fc28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FC48u;
            goto label_31fc48;
        }
    }
    ctx->pc = 0x31FC2Cu;
    // 0x31fc2c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x31fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x31fc30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fc34: 0x24a52350  addiu       $a1, $a1, 0x2350
    ctx->pc = 0x31fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9040));
    // 0x31fc38: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x31FC38u;
    SET_GPR_U32(ctx, 31, 0x31FC40u);
    ctx->pc = 0x31FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC38u;
    // 0x31fc3c: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x31FC38u, 0x31FC40u)) {
        return;
    }
    ctx->pc = 0x31FC40u;
label_31fc40:
    // 0x31fc40: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31FC40u;
    {
        const bool branch_taken_0x31fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC40u;
        // 0x31fc44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc40) {
            ctx->pc = 0x31FCE0u;
            goto label_31fce0;
        }
    }
    ctx->pc = 0x31FC48u;
label_31fc48:
    // 0x31fc48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31fc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc4c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x31fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31fc50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x31fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x31fc54: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x31fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x31fc58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fc5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fc60: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31FC60u;
    {
        const bool branch_taken_0x31fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC60u;
        // 0x31fc64: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc60) {
            ctx->pc = 0x31FCE0u;
            goto label_31fce0;
        }
    }
    ctx->pc = 0x31FC68u;
label_31fc68:
    // 0x31fc68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x31fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31fc6c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31FC6Cu;
    {
        const bool branch_taken_0x31fc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc6c) {
            ctx->pc = 0x31FC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC6Cu;
            // 0x31fc70: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCACu;
            goto label_31fcac;
        }
    }
    ctx->pc = 0x31FC74u;
    // 0x31fc74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fc78: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x31fc78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31fc7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x31FC7Cu;
    {
        const bool branch_taken_0x31fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc7c) {
            ctx->pc = 0x31FC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC7Cu;
            // 0x31fc80: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCACu;
            goto label_31fcac;
        }
    }
    ctx->pc = 0x31FC84u;
    // 0x31fc84: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x31fc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x31fc88: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FC88u;
    {
        const bool branch_taken_0x31fc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x31fc88) {
            ctx->pc = 0x31FC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC88u;
            // 0x31fc8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCACu;
            goto label_31fcac;
        }
    }
    ctx->pc = 0x31FC90u;
    // 0x31fc90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fc94: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x31fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31fc98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31fc9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fca0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31fca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fca4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31FCA4u;
    {
        const bool branch_taken_0x31fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCA4u;
        // 0x31fca8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fca4) {
            ctx->pc = 0x31FCE0u;
            goto label_31fce0;
        }
    }
    ctx->pc = 0x31FCACu;
label_31fcac:
    // 0x31fcac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fcb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fcb4: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x31fcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x31fcb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31fcbc: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x31fcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x31fcc0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31fcc4: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x31fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x31fcc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31fcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fccc: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x31fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x31fcd0: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x31fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x31fcd4: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x31fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x31fcd8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x31fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x31fcdc: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x31fcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
label_31fce0:
    // 0x31fce0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31fce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31fce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31fce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fcec: 0x3e00008  jr          $ra
    ctx->pc = 0x31FCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCECu;
        // 0x31fcf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FCF4u;
    // 0x31fcf4: 0x0  nop
    ctx->pc = 0x31fcf4u;
    // NOP
    ctx->pc = 0x31fcf8u;
}
