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

// Function: sub_001C7030
// Address: 0x1c7030 - 0x1c71d0
void sub_001C7030_0x1c7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7030_0x1c7030");
#endif

    switch (ctx->pc) {
        case 0x1c704cu: goto label_1c704c;
        case 0x1c7060u: goto label_1c7060;
        case 0x1c7068u: goto label_1c7068;
        case 0x1c70c0u: goto label_1c70c0;
        case 0x1c70d4u: goto label_1c70d4;
        case 0x1c70e8u: goto label_1c70e8;
        default: break;
    }

    ctx->pc = 0x1c7030u;

    // 0x1c7030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c7034: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c7034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c7038: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c7038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c703c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c7040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7044: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1C7044u;
    SET_GPR_U32(ctx, 31, 0x1C704Cu);
    ctx->pc = 0x1C7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7044u;
    // 0x1c7048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C7044u, 0x1C704Cu)) {
        return;
    }
    ctx->pc = 0x1C704Cu;
label_1c704c:
    // 0x1c704c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c7050: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7050u;
    {
        const bool branch_taken_0x1c7050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7050u;
        // 0x1c7054: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7050) {
            ctx->pc = 0x1C7068u;
            goto label_1c7068;
        }
    }
    ctx->pc = 0x1C7058u;
    // 0x1c7058: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1C7058u;
    SET_GPR_U32(ctx, 31, 0x1C7060u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1C7058u, 0x1C7060u)) {
        return;
    }
    ctx->pc = 0x1C7060u;
label_1c7060:
    // 0x1c7060: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7064: 0x0  nop
    ctx->pc = 0x1c7064u;
    // NOP
label_1c7068:
    // 0x1c7068: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c7068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c706c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c706cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c7070: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c7074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7078: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c7078u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c707c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C707Cu;
    {
        const bool branch_taken_0x1c707c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C707Cu;
        // 0x1c7080: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c707c) {
            ctx->pc = 0x1C7068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7068;
        }
    }
    ctx->pc = 0x1C7084u;
    // 0x1c7084: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c7084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c7088: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c708c: 0x2452f2c8  addiu       $s2, $v0, -0xD38
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963912));
    // 0x1c7090: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x1c7090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x1c7094: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c7098: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1c7098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1c709c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c70a0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c70a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c70a4: 0xac6001d0  sw          $zero, 0x1D0($v1)
    ctx->pc = 0x1c70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 0));
    // 0x1c70a8: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1c70ac: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1c70acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1c70b0: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1c70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1c70b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c70b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c70b8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C70B8u;
    SET_GPR_U32(ctx, 31, 0x1C70C0u);
    ctx->pc = 0x1C70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70B8u;
    // 0x1c70bc: 0x8c5198ec  lw          $s1, -0x6714($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C70B8u, 0x1C70C0u)) {
        return;
    }
    ctx->pc = 0x1C70C0u;
label_1c70c0:
    // 0x1c70c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C70C0u;
    {
        const bool branch_taken_0x1c70c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70C0u;
        // 0x1c70c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70c0) {
            ctx->pc = 0x1C70E8u;
            goto label_1c70e8;
        }
    }
    ctx->pc = 0x1C70C8u;
    // 0x1c70c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c70c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70cc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C70CCu;
    SET_GPR_U32(ctx, 31, 0x1C70D4u);
    ctx->pc = 0x1C70D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70CCu;
    // 0x1c70d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C70CCu, 0x1C70D4u)) {
        return;
    }
    ctx->pc = 0x1C70D4u;
label_1c70d4:
    // 0x1c70d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C70D4u;
    {
        const bool branch_taken_0x1c70d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70D4u;
        // 0x1c70d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70d4) {
            ctx->pc = 0x1C70E8u;
            goto label_1c70e8;
        }
    }
    ctx->pc = 0x1C70DCu;
    // 0x1c70dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c70dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70e0: 0xc07d35c  jal         func_1F4D70
    ctx->pc = 0x1C70E0u;
    SET_GPR_U32(ctx, 31, 0x1C70E8u);
    ctx->pc = 0x1C70E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70E0u;
    // 0x1c70e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D70u, 0x1C70E0u, 0x1C70E8u)) {
        return;
    }
    ctx->pc = 0x1C70E8u;
label_1c70e8:
    // 0x1c70e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c70ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C70ECu;
    {
        const bool branch_taken_0x1c70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70ECu;
        // 0x1c70f0: 0x21e02  srl         $v1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70ec) {
            ctx->pc = 0x1C714Cu;
            goto label_1c714c;
        }
    }
    ctx->pc = 0x1C70F4u;
    // 0x1c70f4: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x1c70f8: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x1c70f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1c70fc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1c70fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1c7100: 0x30470fff  andi        $a3, $v0, 0xFFF
    ctx->pc = 0x1c7100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1c7104: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1c7104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c7108: 0x3049000f  andi        $t1, $v0, 0xF
    ctx->pc = 0x1c7108u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1c710c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1c710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1c7110: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x1c7110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1c7114: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x1c7114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1c7118: 0x63302  srl         $a2, $a2, 12
    ctx->pc = 0x1c7118u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x1c711c: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x1c711cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1c7120: 0x84102  srl         $t0, $t0, 4
    ctx->pc = 0x1c7120u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x1c7124: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x1c7124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1c7128: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x1c7128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    // 0x1c712c: 0xae030290  sw          $v1, 0x290($s0)
    ctx->pc = 0x1c712cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
    // 0x1c7130: 0xae04028c  sw          $a0, 0x28C($s0)
    ctx->pc = 0x1c7130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 4));
    // 0x1c7134: 0xae050288  sw          $a1, 0x288($s0)
    ctx->pc = 0x1c7134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 5));
    // 0x1c7138: 0xae060284  sw          $a2, 0x284($s0)
    ctx->pc = 0x1c7138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 6));
    // 0x1c713c: 0xae070280  sw          $a3, 0x280($s0)
    ctx->pc = 0x1c713cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 7));
    // 0x1c7140: 0xae08027c  sw          $t0, 0x27C($s0)
    ctx->pc = 0x1c7140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 8));
    // 0x1c7144: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C7144u;
    {
        const bool branch_taken_0x1c7144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7144u;
        // 0x1c7148: 0xae090278  sw          $t1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7144) {
            ctx->pc = 0x1C7194u;
            goto label_1c7194;
        }
    }
    ctx->pc = 0x1C714Cu;
label_1c714c:
    // 0x1c714c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c7150: 0x2446f410  addiu       $a2, $v0, -0xBF0
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964240));
    // 0x1c7154: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1c7154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c7158: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1c7158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c715c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1c715cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c7160: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1c7160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c7164: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1c7164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c7168: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1c7168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c716c: 0xb203027f  sdl         $v1, 0x27F($s0)
    ctx->pc = 0x1c716cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 639); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7170: 0xb6030278  sdr         $v1, 0x278($s0)
    ctx->pc = 0x1c7170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 632); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7174: 0xb2040287  sdl         $a0, 0x287($s0)
    ctx->pc = 0x1c7174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 647); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7178: 0xb6040280  sdr         $a0, 0x280($s0)
    ctx->pc = 0x1c7178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 640); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c717c: 0xb205028f  sdl         $a1, 0x28F($s0)
    ctx->pc = 0x1c717cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7180: 0xb6050288  sdr         $a1, 0x288($s0)
    ctx->pc = 0x1c7180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7184: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x1c7184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c7188: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x1c7188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c718c: 0xb2030297  sdl         $v1, 0x297($s0)
    ctx->pc = 0x1c718cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7190: 0xb6030290  sdr         $v1, 0x290($s0)
    ctx->pc = 0x1c7190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c7194:
    // 0x1c7194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7198: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1c7198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1c719c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c719cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c71a0: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x1c71a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x1c71a4: 0xe60102b4  swc1        $f1, 0x2B4($s0)
    ctx->pc = 0x1c71a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
    // 0x1c71a8: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1c71a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1c71ac: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1c71acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1c71b0: 0xe60002b8  swc1        $f0, 0x2B8($s0)
    ctx->pc = 0x1c71b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x1c71b4: 0xe60002b0  swc1        $f0, 0x2B0($s0)
    ctx->pc = 0x1c71b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x1c71b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c71b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c71bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c71bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c71c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c71c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c71c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c71c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c71c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C71C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71C8u;
        // 0x1c71cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C71C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C71D0u;
}
