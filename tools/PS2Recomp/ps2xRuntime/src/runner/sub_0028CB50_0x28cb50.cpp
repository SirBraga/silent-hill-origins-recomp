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

// Function: sub_0028CB50
// Address: 0x28cb50 - 0x28ce18
void sub_0028CB50_0x28cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CB50_0x28cb50");
#endif

    switch (ctx->pc) {
        case 0x28cb8cu: goto label_28cb8c;
        case 0x28cbb0u: goto label_28cbb0;
        case 0x28cbc4u: goto label_28cbc4;
        case 0x28cbe0u: goto label_28cbe0;
        case 0x28cbecu: goto label_28cbec;
        case 0x28cc0cu: goto label_28cc0c;
        case 0x28cc54u: goto label_28cc54;
        case 0x28cc74u: goto label_28cc74;
        case 0x28cc80u: goto label_28cc80;
        case 0x28cc9cu: goto label_28cc9c;
        case 0x28ccc8u: goto label_28ccc8;
        case 0x28ccecu: goto label_28ccec;
        case 0x28cd0cu: goto label_28cd0c;
        case 0x28cd18u: goto label_28cd18;
        case 0x28cd34u: goto label_28cd34;
        case 0x28cd64u: goto label_28cd64;
        case 0x28cd84u: goto label_28cd84;
        case 0x28cd90u: goto label_28cd90;
        case 0x28cdacu: goto label_28cdac;
        default: break;
    }

    ctx->pc = 0x28cb50u;

    // 0x28cb50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28cb54: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x28cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x28cb58: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x28cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x28cb5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28cb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb60: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x28cb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x28cb64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28cb64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb68: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x28cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x28cb6c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x28cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x28cb70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x28cb74: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x28cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x28cb78: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x28cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x28cb7c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x28cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x28cb80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28cb84: 0xc0a25ba  jal         func_2896E8
    ctx->pc = 0x28CB84u;
    SET_GPR_U32(ctx, 31, 0x28CB8Cu);
    ctx->pc = 0x28CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB84u;
    // 0x28cb88: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896E8u, 0x28CB84u, 0x28CB8Cu)) {
        return;
    }
    ctx->pc = 0x28CB8Cu;
label_28cb8c:
    // 0x28cb8c: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x28CB8Cu;
    {
        const bool branch_taken_0x28cb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB8Cu;
        // 0x28cb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb8c) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CB94u;
    // 0x28cb94: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x28CB94u;
    {
        const bool branch_taken_0x28cb94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB94u;
        // 0x28cb98: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb94) {
            ctx->pc = 0x28CBD4u;
            goto label_28cbd4;
        }
    }
    ctx->pc = 0x28CB9Cu;
    // 0x28cb9c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x28cb9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28cba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28cba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28cba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cba8: 0xc0a2d92  jal         func_28B648
    ctx->pc = 0x28CBA8u;
    SET_GPR_U32(ctx, 31, 0x28CBB0u);
    ctx->pc = 0x28CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBA8u;
    // 0x28cbac: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B648u, 0x28CBA8u, 0x28CBB0u)) {
        return;
    }
    ctx->pc = 0x28CBB0u;
label_28cbb0:
    // 0x28cbb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CBB0u;
    {
        const bool branch_taken_0x28cbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBB0u;
        // 0x28cbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbb0) {
            ctx->pc = 0x28CBCCu;
            goto label_28cbcc;
        }
    }
    ctx->pc = 0x28CBB8u;
    // 0x28cbb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbbc: 0xc092782  jal         func_249E08
    ctx->pc = 0x28CBBCu;
    SET_GPR_U32(ctx, 31, 0x28CBC4u);
    ctx->pc = 0x28CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBBCu;
    // 0x28cbc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28CBBCu, 0x28CBC4u)) {
        return;
    }
    ctx->pc = 0x28CBC4u;
label_28cbc4:
    // 0x28cbc4: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x28CBC4u;
    {
        const bool branch_taken_0x28cbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBC4u;
        // 0x28cbc8: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbc4) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CBCCu;
label_28cbcc:
    // 0x28cbcc: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x28CBCCu;
    {
        const bool branch_taken_0x28cbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBCCu;
        // 0x28cbd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbcc) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CBD4u;
label_28cbd4:
    // 0x28cbd4: 0x8c5e00b0  lw          $fp, 0xB0($v0)
    ctx->pc = 0x28cbd4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x28cbd8: 0xc09294c  jal         func_24A530
    ctx->pc = 0x28CBD8u;
    SET_GPR_U32(ctx, 31, 0x28CBE0u);
    ctx->pc = 0x28CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBD8u;
    // 0x28cbdc: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28CBD8u, 0x28CBE0u)) {
        return;
    }
    ctx->pc = 0x28CBE0u;
label_28cbe0:
    // 0x28cbe0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x28cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28cbe4: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28CBE4u;
    SET_GPR_U32(ctx, 31, 0x28CBECu);
    ctx->pc = 0x28CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBE4u;
    // 0x28cbe8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28CBE4u, 0x28CBECu)) {
        return;
    }
    ctx->pc = 0x28CBECu;
label_28cbec:
    // 0x28cbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cbf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28cbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbf4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x28cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x28cbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbfc: 0xafb70004  sw          $s7, 0x4($sp)
    ctx->pc = 0x28cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 23));
    // 0x28cc00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28cc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc04: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28CC04u;
    SET_GPR_U32(ctx, 31, 0x28CC0Cu);
    ctx->pc = 0x28CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC04u;
    // 0x28cc08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28CC04u, 0x28CC0Cu)) {
        return;
    }
    ctx->pc = 0x28CC0Cu;
label_28cc0c:
    // 0x28cc0c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x28CC0Cu;
    {
        const bool branch_taken_0x28cc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC0Cu;
        // 0x28cc10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc0c) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CC14u;
    // 0x28cc14: 0x1ae0006f  blez        $s7, . + 4 + (0x6F << 2)
    ctx->pc = 0x28CC14u;
    {
        const bool branch_taken_0x28cc14 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x28CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC14u;
        // 0x28cc18: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc14) {
            ctx->pc = 0x28CDD4u;
            goto label_28cdd4;
        }
    }
    ctx->pc = 0x28CC1Cu;
    // 0x28cc1c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x28cc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x28cc20: 0x1ae00003  blez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CC20u;
    {
        const bool branch_taken_0x28cc20 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x28CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC20u;
        // 0x28cc24: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc20) {
            ctx->pc = 0x28CC30u;
            goto label_28cc30;
        }
    }
    ctx->pc = 0x28CC28u;
    // 0x28cc28: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28CC28u;
    {
        const bool branch_taken_0x28cc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC28u;
        // 0x28cc2c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc28) {
            ctx->pc = 0x28CCBCu;
            goto label_28ccbc;
        }
    }
    ctx->pc = 0x28CC30u;
label_28cc30:
    // 0x28cc30: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x28cc34: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x28cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x28cc38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CC38u;
    {
        const bool branch_taken_0x28cc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC38u;
        // 0x28cc3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc38) {
            ctx->pc = 0x28CC44u;
            goto label_28cc44;
        }
    }
    ctx->pc = 0x28CC40u;
    // 0x28cc40: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_28cc44:
    // 0x28cc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc48: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x28cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x28cc4c: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28CC4Cu;
    SET_GPR_U32(ctx, 31, 0x28CC54u);
    ctx->pc = 0x28CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC4Cu;
    // 0x28cc50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28CC4Cu, 0x28CC54u)) {
        return;
    }
    ctx->pc = 0x28CC54u;
label_28cc54:
    // 0x28cc54: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x28CC54u;
    {
        const bool branch_taken_0x28cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC54u;
        // 0x28cc58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc54) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CC5Cu;
    // 0x28cc5c: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x28cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x28cc60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28CC60u;
    {
        const bool branch_taken_0x28cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC60u;
        // 0x28cc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc60) {
            ctx->pc = 0x28CCA4u;
            goto label_28cca4;
        }
    }
    ctx->pc = 0x28CC68u;
    // 0x28cc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc6c: 0xc092782  jal         func_249E08
    ctx->pc = 0x28CC6Cu;
    SET_GPR_U32(ctx, 31, 0x28CC74u);
    ctx->pc = 0x28CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC6Cu;
    // 0x28cc70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28CC6Cu, 0x28CC74u)) {
        return;
    }
    ctx->pc = 0x28CC74u;
label_28cc74:
    // 0x28cc74: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x28cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x28cc78: 0xc0a20fa  jal         func_2883E8
    ctx->pc = 0x28CC78u;
    SET_GPR_U32(ctx, 31, 0x28CC80u);
    ctx->pc = 0x28CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC78u;
    // 0x28cc7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2883E8u, 0x28CC78u, 0x28CC80u)) {
        return;
    }
    ctx->pc = 0x28CC80u;
label_28cc80:
    // 0x28cc80: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x28CC80u;
    {
        const bool branch_taken_0x28cc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC80u;
        // 0x28cc84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc80) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CC88u;
    // 0x28cc88: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x28cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28cc8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CC8Cu;
    {
        const bool branch_taken_0x28cc8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cc8c) {
            ctx->pc = 0x28CC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CC8Cu;
            // 0x28cc90: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CCA8u;
            goto label_28cca8;
        }
    }
    ctx->pc = 0x28CC94u;
    // 0x28cc94: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x28CC94u;
    SET_GPR_U32(ctx, 31, 0x28CC9Cu);
    ctx->pc = 0x28CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC94u;
    // 0x28cc98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EBF0u, 0x28CC94u, 0x28CC9Cu)) {
        return;
    }
    ctx->pc = 0x28CC9Cu;
label_28cc9c:
    // 0x28cc9c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x28CC9Cu;
    {
        const bool branch_taken_0x28cc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC9Cu;
        // 0x28cca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc9c) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CCA4u;
label_28cca4:
    // 0x28cca4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28cca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28cca8:
    // 0x28cca8: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x28cca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x28ccac: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x28ccacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x28ccb0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x28CCB0u;
    {
        const bool branch_taken_0x28ccb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCB0u;
        // 0x28ccb4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccb0) {
            ctx->pc = 0x28CDD4u;
            goto label_28cdd4;
        }
    }
    ctx->pc = 0x28CCB8u;
    // 0x28ccb8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x28ccb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ccbc:
    // 0x28ccbc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x28ccbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ccc0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x28ccc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ccc4: 0x0  nop
    ctx->pc = 0x28ccc4u;
    // NOP
label_28ccc8:
    // 0x28ccc8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x28cccc: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x28ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x28ccd0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CCD0u;
    {
        const bool branch_taken_0x28ccd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCD0u;
        // 0x28ccd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccd0) {
            ctx->pc = 0x28CCDCu;
            goto label_28ccdc;
        }
    }
    ctx->pc = 0x28CCD8u;
    // 0x28ccd8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_28ccdc:
    // 0x28ccdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cce0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x28cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x28cce4: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28CCE4u;
    SET_GPR_U32(ctx, 31, 0x28CCECu);
    ctx->pc = 0x28CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CCE4u;
    // 0x28cce8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28CCE4u, 0x28CCECu)) {
        return;
    }
    ctx->pc = 0x28CCECu;
label_28ccec:
    // 0x28ccec: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28CCECu;
    {
        const bool branch_taken_0x28ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCECu;
        // 0x28ccf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccec) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CCF4u;
    // 0x28ccf4: 0x8e82fffc  lw          $v0, -0x4($s4)
    ctx->pc = 0x28ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967292)));
    // 0x28ccf8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28CCF8u;
    {
        const bool branch_taken_0x28ccf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCF8u;
        // 0x28ccfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccf8) {
            ctx->pc = 0x28CD3Cu;
            goto label_28cd3c;
        }
    }
    ctx->pc = 0x28CD00u;
    // 0x28cd00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd04: 0xc092782  jal         func_249E08
    ctx->pc = 0x28CD04u;
    SET_GPR_U32(ctx, 31, 0x28CD0Cu);
    ctx->pc = 0x28CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD04u;
    // 0x28cd08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28CD04u, 0x28CD0Cu)) {
        return;
    }
    ctx->pc = 0x28CD0Cu;
label_28cd0c:
    // 0x28cd0c: 0x8ea4fffc  lw          $a0, -0x4($s5)
    ctx->pc = 0x28cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
    // 0x28cd10: 0xc0a20fa  jal         func_2883E8
    ctx->pc = 0x28CD10u;
    SET_GPR_U32(ctx, 31, 0x28CD18u);
    ctx->pc = 0x28CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD10u;
    // 0x28cd14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2883E8u, 0x28CD10u, 0x28CD18u)) {
        return;
    }
    ctx->pc = 0x28CD18u;
label_28cd18:
    // 0x28cd18: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28CD18u;
    {
        const bool branch_taken_0x28cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD18u;
        // 0x28cd1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd18) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CD20u;
    // 0x28cd20: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28cd24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CD24u;
    {
        const bool branch_taken_0x28cd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd24) {
            ctx->pc = 0x28CD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CD24u;
            // 0x28cd28: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CD40u;
            goto label_28cd40;
        }
    }
    ctx->pc = 0x28CD2Cu;
    // 0x28cd2c: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x28CD2Cu;
    SET_GPR_U32(ctx, 31, 0x28CD34u);
    ctx->pc = 0x28CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD2Cu;
    // 0x28cd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EBF0u, 0x28CD2Cu, 0x28CD34u)) {
        return;
    }
    ctx->pc = 0x28CD34u;
label_28cd34:
    // 0x28cd34: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28CD34u;
    {
        const bool branch_taken_0x28cd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD34u;
        // 0x28cd38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd34) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CD3Cu;
label_28cd3c:
    // 0x28cd3c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_28cd40:
    // 0x28cd40: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x28cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28cd44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CD44u;
    {
        const bool branch_taken_0x28cd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD44u;
        // 0x28cd48: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd44) {
            ctx->pc = 0x28CD54u;
            goto label_28cd54;
        }
    }
    ctx->pc = 0x28CD4Cu;
    // 0x28cd4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28cd50: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_28cd54:
    // 0x28cd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd58: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x28cd5c: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28CD5Cu;
    SET_GPR_U32(ctx, 31, 0x28CD64u);
    ctx->pc = 0x28CD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD5Cu;
    // 0x28cd60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28CD5Cu, 0x28CD64u)) {
        return;
    }
    ctx->pc = 0x28CD64u;
label_28cd64:
    // 0x28cd64: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28CD64u;
    {
        const bool branch_taken_0x28cd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD64u;
        // 0x28cd68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd64) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CD6Cu;
    // 0x28cd6c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x28cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x28cd70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28CD70u;
    {
        const bool branch_taken_0x28cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD70u;
        // 0x28cd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd70) {
            ctx->pc = 0x28CDB4u;
            goto label_28cdb4;
        }
    }
    ctx->pc = 0x28CD78u;
    // 0x28cd78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd7c: 0xc092782  jal         func_249E08
    ctx->pc = 0x28CD7Cu;
    SET_GPR_U32(ctx, 31, 0x28CD84u);
    ctx->pc = 0x28CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD7Cu;
    // 0x28cd80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28CD7Cu, 0x28CD84u)) {
        return;
    }
    ctx->pc = 0x28CD84u;
label_28cd84:
    // 0x28cd84: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x28cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x28cd88: 0xc0a20fa  jal         func_2883E8
    ctx->pc = 0x28CD88u;
    SET_GPR_U32(ctx, 31, 0x28CD90u);
    ctx->pc = 0x28CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD88u;
    // 0x28cd8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2883E8u, 0x28CD88u, 0x28CD90u)) {
        return;
    }
    ctx->pc = 0x28CD90u;
label_28cd90:
    // 0x28cd90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CD90u;
    {
        const bool branch_taken_0x28cd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD90u;
        // 0x28cd94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd90) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CD98u;
    // 0x28cd98: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x28cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28cd9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CD9Cu;
    {
        const bool branch_taken_0x28cd9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd9c) {
            ctx->pc = 0x28CDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CD9Cu;
            // 0x28cda0: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CDB8u;
            goto label_28cdb8;
        }
    }
    ctx->pc = 0x28CDA4u;
    // 0x28cda4: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x28CDA4u;
    SET_GPR_U32(ctx, 31, 0x28CDACu);
    ctx->pc = 0x28CDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDA4u;
    // 0x28cda8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EBF0u, 0x28CDA4u, 0x28CDACu)) {
        return;
    }
    ctx->pc = 0x28CDACu;
label_28cdac:
    // 0x28cdac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28CDACu;
    {
        const bool branch_taken_0x28cdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDACu;
        // 0x28cdb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdac) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CDB4u;
label_28cdb4:
    // 0x28cdb4: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x28cdb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_28cdb8:
    // 0x28cdb8: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x28cdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x28cdbc: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x28cdbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x28cdc0: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x28cdc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x28cdc4: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x28cdc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x28cdc8: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x28cdc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x28cdcc: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x28CDCCu;
    {
        const bool branch_taken_0x28cdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDCCu;
        // 0x28cdd0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdcc) {
            ctx->pc = 0x28CCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ccc8;
        }
    }
    ctx->pc = 0x28CDD4u;
label_28cdd4:
    // 0x28cdd4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28cdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28cdd8:
    // 0x28cdd8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CDD8u;
    {
        const bool branch_taken_0x28cdd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDD8u;
        // 0x28cddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdd8) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CDE0u;
    // 0x28cde0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x28cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_28cde4:
    // 0x28cde4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x28cde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28cde8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x28cde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28cdec: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x28cdecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28cdf0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x28cdf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28cdf4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x28cdf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28cdf8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28cdf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28cdfc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x28cdfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ce00: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x28ce00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ce04: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x28ce04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ce08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28ce08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28CE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE0Cu;
        // 0x28ce10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CE14u;
    // 0x28ce14: 0x0  nop
    ctx->pc = 0x28ce14u;
    // NOP
    ctx->pc = 0x28ce18u;
}
