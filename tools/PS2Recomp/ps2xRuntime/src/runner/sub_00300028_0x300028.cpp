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

// Function: sub_00300028
// Address: 0x300028 - 0x300308
void sub_00300028_0x300028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300028_0x300028");
#endif

    switch (ctx->pc) {
        case 0x300060u: goto label_300060;
        case 0x300068u: goto label_300068;
        case 0x300084u: goto label_300084;
        case 0x300124u: goto label_300124;
        case 0x300148u: goto label_300148;
        case 0x300160u: goto label_300160;
        case 0x3001a0u: goto label_3001a0;
        case 0x300228u: goto label_300228;
        case 0x300284u: goto label_300284;
        case 0x3002a8u: goto label_3002a8;
        case 0x3002bcu: goto label_3002bc;
        default: break;
    }

    ctx->pc = 0x300028u;

    // 0x300028: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x300028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30002c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x30002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x300030: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x300030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x300034: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x300034u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x300038: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x300038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x30003c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x30003cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x300040: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x300040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x300044: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x300044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x300048: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x300048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30004c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30004cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300050: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x300050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x300054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x300054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x300058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30005c: 0x0  nop
    ctx->pc = 0x30005cu;
    // NOP
label_300060:
    // 0x300060: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x300060u;
    SET_GPR_U32(ctx, 31, 0x300068u);
    ctx->pc = 0x300064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300060u;
    // 0x300064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x300060u, 0x300068u)) {
        return;
    }
    ctx->pc = 0x300068u;
label_300068:
    // 0x300068: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x300068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30006c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300070: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x300070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x300074: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x300074u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 20)); // MMIO: 0x10002000
    // 0x300078: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x300078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x30007c: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x30007Cu;
    SET_GPR_U32(ctx, 31, 0x300084u);
    ctx->pc = 0x300080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30007Cu;
    // 0x300080: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x30007Cu, 0x300084u)) {
        return;
    }
    ctx->pc = 0x300084u;
label_300084:
    // 0x300084: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x300084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300088: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x300088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30008c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x300090: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x300090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x300094: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x300094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x300098: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x300098u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x30009c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x30009cu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x3000a0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3000a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3000a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3000a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3000a8: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3000A8u;
    {
        const bool branch_taken_0x3000a8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3000ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000A8u;
        // 0x3000ac: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000a8) {
            ctx->pc = 0x3000C4u;
            goto label_3000c4;
        }
    }
    ctx->pc = 0x3000B0u;
    // 0x3000b0: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x3000b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x3000b4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3000b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3000b8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3000b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3000bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3000BCu;
    {
        const bool branch_taken_0x3000bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000BCu;
        // 0x3000c0: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000bc) {
            ctx->pc = 0x3000C8u;
            goto label_3000c8;
        }
    }
    ctx->pc = 0x3000C4u;
label_3000c4:
    // 0x3000c4: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x3000c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_3000c8:
    // 0x3000c8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x3000c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3000cc: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3000ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3000d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3000d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3000d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3000d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3000d8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3000d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3000dc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x3000dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3000e0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3000e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3000e4: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3000E4u;
    {
        const bool branch_taken_0x3000e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3000E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000E4u;
        // 0x3000e8: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000e4) {
            ctx->pc = 0x300148u;
            goto label_300148;
        }
    }
    ctx->pc = 0x3000ECu;
    // 0x3000ec: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x3000ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x3000f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3000F0u;
    {
        const bool branch_taken_0x3000f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000F0u;
        // 0x3000f4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000f0) {
            ctx->pc = 0x300108u;
            goto label_300108;
        }
    }
    ctx->pc = 0x3000F8u;
    // 0x3000f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3000F8u;
    {
        const bool branch_taken_0x3000f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000F8u;
        // 0x3000fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000f8) {
            ctx->pc = 0x30011Cu;
            goto label_30011c;
        }
    }
    ctx->pc = 0x300100u;
    // 0x300100: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x300100u;
    {
        const bool branch_taken_0x300100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300100u;
        // 0x300104: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300100) {
            ctx->pc = 0x300170u;
            goto label_300170;
        }
    }
    ctx->pc = 0x300108u;
label_300108:
    // 0x300108: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x300108u;
    {
        const bool branch_taken_0x300108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x300108) {
            ctx->pc = 0x30010Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300108u;
            // 0x30010c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300170u;
            goto label_300170;
        }
    }
    ctx->pc = 0x300110u;
    // 0x300110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300114: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x300114u;
    {
        const bool branch_taken_0x300114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300114u;
        // 0x300118: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300114) {
            ctx->pc = 0x300174u;
            goto label_300174;
        }
    }
    ctx->pc = 0x30011Cu;
label_30011c:
    // 0x30011c: 0xc0c015c  jal         func_300570
    ctx->pc = 0x30011Cu;
    SET_GPR_U32(ctx, 31, 0x300124u);
    ctx->pc = 0x300120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30011Cu;
    // 0x300120: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x30011Cu, 0x300124u)) {
        return;
    }
    ctx->pc = 0x300124u;
label_300124:
    // 0x300124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x300124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300128: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x30012c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30012Cu;
    {
        const bool branch_taken_0x30012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30012Cu;
        // 0x300130: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30012c) {
            ctx->pc = 0x300150u;
            goto label_300150;
        }
    }
    ctx->pc = 0x300134u;
    // 0x300134: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x300134u;
    {
        const bool branch_taken_0x300134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x300138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300134u;
        // 0x300138: 0x26a508e0  addiu       $a1, $s5, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300134) {
            ctx->pc = 0x300154u;
            goto label_300154;
        }
    }
    ctx->pc = 0x30013Cu;
    // 0x30013c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300140: 0xc0c01b4  jal         func_3006D0
    ctx->pc = 0x300140u;
    SET_GPR_U32(ctx, 31, 0x300148u);
    ctx->pc = 0x300144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300140u;
    // 0x300144: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3006D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3006D0u, 0x300140u, 0x300148u)) {
        return;
    }
    ctx->pc = 0x300148u;
label_300148:
    // 0x300148: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x300148u;
    {
        const bool branch_taken_0x300148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300148u;
        // 0x30014c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300148) {
            ctx->pc = 0x300174u;
            goto label_300174;
        }
    }
    ctx->pc = 0x300150u;
label_300150:
    // 0x300150: 0x26a508e0  addiu       $a1, $s5, 0x8E0
    ctx->pc = 0x300150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2272));
label_300154:
    // 0x300154: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x300154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300158: 0xc0bf772  jal         func_2FDDC8
    ctx->pc = 0x300158u;
    SET_GPR_U32(ctx, 31, 0x300160u);
    ctx->pc = 0x30015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300158u;
    // 0x30015c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDDC8u, 0x300158u, 0x300160u)) {
        return;
    }
    ctx->pc = 0x300160u;
label_300160:
    // 0x300160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300168u;
    {
        const bool branch_taken_0x300168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300168u;
        // 0x30016c: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300168) {
            ctx->pc = 0x30017Cu;
            goto label_30017c;
        }
    }
    ctx->pc = 0x300170u;
label_300170:
    // 0x300170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x300170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300174:
    // 0x300174: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x300174u;
    {
        const bool branch_taken_0x300174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300174u;
        // 0x300178: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300174) {
            ctx->pc = 0x300060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300060;
        }
    }
    ctx->pc = 0x30017Cu;
label_30017c:
    // 0x30017c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30017cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300180: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x300180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300184: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x300184u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300188: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x300188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30018c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30018cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300190: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x300190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x300194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300198: 0x3e00008  jr          $ra
    ctx->pc = 0x300198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300198u;
        // 0x30019c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3001A0u;
label_3001a0:
    // 0x3001a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3001a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3001a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3001a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3001a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3001a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3001ac: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x3001acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x3001b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3001b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3001b4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3001b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3001b8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x3001b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x3001bc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x3001bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x3001c0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x3001c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x3001c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3001c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001c8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3001c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3001cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3001ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3001d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3001d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3001d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3001d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3001d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3001dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3001dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3001e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3001e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3001e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3001e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x3001e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3001e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3001ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3001ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3001f0: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3001F0u;
    {
        const bool branch_taken_0x3001f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3001f0) {
            ctx->pc = 0x3001F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3001F0u;
            // 0x3001f4: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3002D8u;
            goto label_3002d8;
        }
    }
    ctx->pc = 0x3001F8u;
    // 0x3001f8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x3001f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x3001fc: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x3001fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x300200: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x300200u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x300204: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x300204u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x300208: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x300208u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x30020c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x30020cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x300210: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x300210u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x300214: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x300214u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x300218: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x300218u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x30021c: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x30021cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x300220: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x300220u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x300224: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x300224u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_300228:
    // 0x300228: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x300228u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x10002020
    // 0x30022c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x30022cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x300230: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x300230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x300234: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x300234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x300238: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x300238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x30023c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x30023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x300240: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x300240u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x300244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x300244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x300248: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x300248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x30024c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x30024Cu;
    {
        const bool branch_taken_0x30024c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x300250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30024Cu;
        // 0x300250: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30024c) {
            ctx->pc = 0x300264u;
            goto label_300264;
        }
    }
    ctx->pc = 0x300254u;
    // 0x300254: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x300254u;
    {
        const bool branch_taken_0x300254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x300254) {
            ctx->pc = 0x300258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300254u;
            // 0x300258: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x300268u;
            goto label_300268;
        }
    }
    ctx->pc = 0x30025Cu;
    // 0x30025c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x30025Cu;
    {
        const bool branch_taken_0x30025c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x30025c) {
            ctx->pc = 0x300260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30025Cu;
            // 0x300260: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300294u;
            goto label_300294;
        }
    }
    ctx->pc = 0x300264u;
label_300264:
    // 0x300264: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x300264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_300268:
    // 0x300268: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300268u;
    {
        const bool branch_taken_0x300268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300268u;
        // 0x30026c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300268) {
            ctx->pc = 0x300294u;
            goto label_300294;
        }
    }
    ctx->pc = 0x300270u;
    // 0x300270: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x300270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300274: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x300274u;
    {
        const bool branch_taken_0x300274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300274u;
        // 0x300278: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300274) {
            ctx->pc = 0x300294u;
            goto label_300294;
        }
    }
    ctx->pc = 0x30027Cu;
    // 0x30027c: 0xc0be688  jal         func_2F9A20
    ctx->pc = 0x30027Cu;
    SET_GPR_U32(ctx, 31, 0x300284u);
    ctx->pc = 0x300280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30027Cu;
    // 0x300280: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A20u, 0x30027Cu, 0x300284u)) {
        return;
    }
    ctx->pc = 0x300284u;
label_300284:
    // 0x300284: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x300284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x300288: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x300288u;
    {
        const bool branch_taken_0x300288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300288u;
        // 0x30028c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300288) {
            ctx->pc = 0x3002B4u;
            goto label_3002b4;
        }
    }
    ctx->pc = 0x300290u;
    // 0x300290: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x300290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_300294:
    // 0x300294: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x300294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x300298: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300298u;
    {
        const bool branch_taken_0x300298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300298u;
        // 0x30029c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300298) {
            ctx->pc = 0x3002C4u;
            goto label_3002c4;
        }
    }
    ctx->pc = 0x3002A0u;
    // 0x3002a0: 0xc0be688  jal         func_2F9A20
    ctx->pc = 0x3002A0u;
    SET_GPR_U32(ctx, 31, 0x3002A8u);
    ctx->pc = 0x3002A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3002A0u;
    // 0x3002a4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A20u, 0x3002A0u, 0x3002A8u)) {
        return;
    }
    ctx->pc = 0x3002A8u;
label_3002a8:
    // 0x3002a8: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x3002a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x3002ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3002ACu;
    {
        const bool branch_taken_0x3002ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002ACu;
        // 0x3002b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002ac) {
            ctx->pc = 0x3002C4u;
            goto label_3002c4;
        }
    }
    ctx->pc = 0x3002B4u;
label_3002b4:
    // 0x3002b4: 0xc0bf702  jal         func_2FDC08
    ctx->pc = 0x3002B4u;
    SET_GPR_U32(ctx, 31, 0x3002BCu);
    ctx->pc = 0x2FDC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDC08u, 0x3002B4u, 0x3002BCu)) {
        return;
    }
    ctx->pc = 0x3002BCu;
label_3002bc:
    // 0x3002bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3002BCu;
    {
        const bool branch_taken_0x3002bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002BCu;
        // 0x3002c0: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002bc) {
            ctx->pc = 0x3002D8u;
            goto label_3002d8;
        }
    }
    ctx->pc = 0x3002C4u;
label_3002c4:
    // 0x3002c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3002c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3002c8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x3002c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x3002cc: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3002CCu;
    {
        const bool branch_taken_0x3002cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x3002cc) {
            ctx->pc = 0x300228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300228;
        }
    }
    ctx->pc = 0x3002D4u;
    // 0x3002d4: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x3002d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_3002d8:
    // 0x3002d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3002d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3002dc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x3002dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3002e0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x3002e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3002e4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3002e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3002e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3002e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3002ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3002ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3002f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3002f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3002f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3002f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3002f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3002f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3002fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3002fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300300: 0x3e00008  jr          $ra
    ctx->pc = 0x300300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300300u;
        // 0x300304: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300308u;
}
