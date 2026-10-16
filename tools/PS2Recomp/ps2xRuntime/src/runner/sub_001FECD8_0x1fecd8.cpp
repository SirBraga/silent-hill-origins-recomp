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

// Function: sub_001FECD8
// Address: 0x1fecd8 - 0x1fee80
void sub_001FECD8_0x1fecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FECD8_0x1fecd8");
#endif

    switch (ctx->pc) {
        case 0x1fed30u: goto label_1fed30;
        case 0x1fed64u: goto label_1fed64;
        case 0x1fed74u: goto label_1fed74;
        case 0x1fed80u: goto label_1fed80;
        case 0x1fedc8u: goto label_1fedc8;
        case 0x1fee00u: goto label_1fee00;
        case 0x1fee28u: goto label_1fee28;
        default: break;
    }

    ctx->pc = 0x1fecd8u;

    // 0x1fecd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fecd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fecdc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1fecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1fece0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1fece4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fece8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fece8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1fecf0: 0x30f2ffff  andi        $s2, $a3, 0xFFFF
    ctx->pc = 0x1fecf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1fecf4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1fecf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fecf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fed00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1fed04: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fed08: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1fed08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1fed0c: 0x12030053  beq         $s0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1FED0Cu;
    {
        const bool branch_taken_0x1fed0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED0Cu;
        // 0x1fed10: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed0c) {
            ctx->pc = 0x1FEE5Cu;
            goto label_1fee5c;
        }
    }
    ctx->pc = 0x1FED14u;
    // 0x1fed14: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x1fed14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1fed18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fed1c: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x1fed1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fed20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fed24: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FED24u;
    {
        const bool branch_taken_0x1fed24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed24) {
            ctx->pc = 0x1FED48u;
            goto label_1fed48;
        }
    }
    ctx->pc = 0x1FED2Cu;
    // 0x1fed2c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fed30:
    // 0x1fed30: 0x5054002f  beql        $v0, $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1FED30u;
    {
        const bool branch_taken_0x1fed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1fed30) {
            ctx->pc = 0x1FED34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED30u;
            // 0x1fed34: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEDF0u;
            goto label_1fedf0;
        }
    }
    ctx->pc = 0x1FED38u;
    // 0x1fed38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fed38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fed3c: 0x0  nop
    ctx->pc = 0x1fed3cu;
    // NOP
    // 0x1fed40: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FED40u;
    {
        const bool branch_taken_0x1fed40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fed40) {
            ctx->pc = 0x1FED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED40u;
            // 0x1fed44: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fed30;
        }
    }
    ctx->pc = 0x1FED48u;
label_1fed48:
    // 0x1fed48: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FED48u;
    {
        const bool branch_taken_0x1fed48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed48) {
            ctx->pc = 0x1FEDC0u;
            goto label_1fedc0;
        }
    }
    ctx->pc = 0x1FED50u;
    // 0x1fed50: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1fed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fed54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FED54u;
    {
        const bool branch_taken_0x1fed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed54) {
            ctx->pc = 0x1FEDC0u;
            goto label_1fedc0;
        }
    }
    ctx->pc = 0x1FED5Cu;
    // 0x1fed5c: 0xc080dc4  jal         func_203710
    ctx->pc = 0x1FED5Cu;
    SET_GPR_U32(ctx, 31, 0x1FED64u);
    ctx->pc = 0x1FED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED5Cu;
    // 0x1fed60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203710u, 0x1FED5Cu, 0x1FED64u)) {
        return;
    }
    ctx->pc = 0x1FED64u;
label_1fed64:
    // 0x1fed64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1fed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fed68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed6c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FED6Cu;
    {
        const bool branch_taken_0x1fed6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED6Cu;
        // 0x1fed70: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed6c) {
            ctx->pc = 0x1FED90u;
            goto label_1fed90;
        }
    }
    ctx->pc = 0x1FED74u;
label_1fed74:
    // 0x1fed74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FED74u;
    {
        const bool branch_taken_0x1fed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED74u;
        // 0x1fed78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed74) {
            ctx->pc = 0x1FEDB8u;
            goto label_1fedb8;
        }
    }
    ctx->pc = 0x1FED7Cu;
    // 0x1fed7c: 0x0  nop
    ctx->pc = 0x1fed7cu;
    // NOP
label_1fed80:
    // 0x1fed80: 0x0  nop
    ctx->pc = 0x1fed80u;
    // NOP
    // 0x1fed84: 0x14c3fffb  bne         $a2, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FED84u;
    {
        const bool branch_taken_0x1fed84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED84u;
        // 0x1fed88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed84) {
            ctx->pc = 0x1FED74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fed74;
        }
    }
    ctx->pc = 0x1FED8Cu;
    // 0x1fed8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fed90:
    // 0x1fed90: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fed94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FED94u;
    {
        const bool branch_taken_0x1fed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED94u;
        // 0x1fed98: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed94) {
            ctx->pc = 0x1FEDACu;
            goto label_1fedac;
        }
    }
    ctx->pc = 0x1FED9Cu;
    // 0x1fed9c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1fed9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1feda0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FEDA0u;
    {
        const bool branch_taken_0x1feda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDA0u;
        // 0x1feda4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feda0) {
            ctx->pc = 0x1FED80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fed80;
        }
    }
    ctx->pc = 0x1FEDA8u;
    // 0x1feda8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1feda8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1fedac:
    // 0x1fedac: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1fedacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fedb0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1fedb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1fedb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fedb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fedb8:
    // 0x1fedb8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FEDB8u;
    {
        const bool branch_taken_0x1fedb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDB8u;
        // 0x1fedbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedb8) {
            ctx->pc = 0x1FEE60u;
            goto label_1fee60;
        }
    }
    ctx->pc = 0x1FEDC0u;
label_1fedc0:
    // 0x1fedc0: 0xc07fd70  jal         func_1FF5C0
    ctx->pc = 0x1FEDC0u;
    SET_GPR_U32(ctx, 31, 0x1FEDC8u);
    ctx->pc = 0x1FEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDC0u;
    // 0x1fedc4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF5C0u, 0x1FEDC0u, 0x1FEDC8u)) {
        return;
    }
    ctx->pc = 0x1FEDC8u;
label_1fedc8:
    // 0x1fedc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fedc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fedccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fedd0: 0xac940008  sw          $s4, 0x8($a0)
    ctx->pc = 0x1fedd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 20));
    // 0x1fedd4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1fedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1fedd8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1feddc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1feddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fede0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FEDE0u;
    {
        const bool branch_taken_0x1fede0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDE0u;
        // 0x1fede4: 0xa4920010  sh          $s2, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fede0) {
            ctx->pc = 0x1FEE14u;
            goto label_1fee14;
        }
    }
    ctx->pc = 0x1FEDE8u;
    // 0x1fede8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1FEDE8u;
    {
        const bool branch_taken_0x1fede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDE8u;
        // 0x1fedec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fede8) {
            ctx->pc = 0x1FEE60u;
            goto label_1fee60;
        }
    }
    ctx->pc = 0x1FEDF0u;
label_1fedf0:
    // 0x1fedf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fedf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fedf8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1FEDF8u;
    {
        const bool branch_taken_0x1fedf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDF8u;
        // 0x1fedfc: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedf8) {
            ctx->pc = 0x1FEE60u;
            goto label_1fee60;
        }
    }
    ctx->pc = 0x1FEE00u;
label_1fee00:
    // 0x1fee00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fee04: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1fee04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1fee08: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1fee08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1fee0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FEE0Cu;
    {
        const bool branch_taken_0x1fee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE0Cu;
        // 0x1fee10: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee0c) {
            ctx->pc = 0x1FEE60u;
            goto label_1fee60;
        }
    }
    ctx->pc = 0x1FEE14u;
label_1fee14:
    // 0x1fee14: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1fee14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fee18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fee1c: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FEE1Cu;
    {
        const bool branch_taken_0x1fee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee1c) {
            ctx->pc = 0x1FEE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE1Cu;
            // 0x1fee20: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE58u;
            goto label_1fee58;
        }
    }
    ctx->pc = 0x1FEE24u;
    // 0x1fee24: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x1fee24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_1fee28:
    // 0x1fee28: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1fee28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1fee2c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEE2Cu;
    {
        const bool branch_taken_0x1fee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fee2c) {
            ctx->pc = 0x1FEE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE2Cu;
            // 0x1fee30: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE48u;
            goto label_1fee48;
        }
    }
    ctx->pc = 0x1FEE34u;
    // 0x1fee34: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x1fee34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fee38: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1fee38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fee3c: 0x5040fff0  beql        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FEE3Cu;
    {
        const bool branch_taken_0x1fee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee3c) {
            ctx->pc = 0x1FEE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE3Cu;
            // 0x1fee40: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fee00;
        }
    }
    ctx->pc = 0x1FEE44u;
    // 0x1fee44: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1fee44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fee48:
    // 0x1fee48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fee4c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FEE4Cu;
    {
        const bool branch_taken_0x1fee4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fee4c) {
            ctx->pc = 0x1FEE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE4Cu;
            // 0x1fee50: 0x94a20010  lhu         $v0, 0x10($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fee28;
        }
    }
    ctx->pc = 0x1FEE54u;
    // 0x1fee54: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fee54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1fee58:
    // 0x1fee58: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1fee58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_1fee5c:
    // 0x1fee5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fee60:
    // 0x1fee60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fee64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fee64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fee68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fee68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fee6c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fee6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fee70: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fee70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fee74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fee74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fee78: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE78u;
        // 0x1fee7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEE80u;
}
