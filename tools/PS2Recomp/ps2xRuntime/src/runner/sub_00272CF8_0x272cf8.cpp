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

// Function: sub_00272CF8
// Address: 0x272cf8 - 0x272e58
void sub_00272CF8_0x272cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272CF8_0x272cf8");
#endif

    switch (ctx->pc) {
        case 0x272e14u: goto label_272e14;
        default: break;
    }

    ctx->pc = 0x272cf8u;

    // 0x272cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272cfc: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x272cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x272d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272d04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x272d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d08: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x272d08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x272d0c: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x272d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x272d10: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x272d10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x272d14: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x272D14u;
    {
        const bool branch_taken_0x272d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D14u;
        // 0x272d18: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d14) {
            ctx->pc = 0x272D88u;
            goto label_272d88;
        }
    }
    ctx->pc = 0x272D1Cu;
    // 0x272d1c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x272d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x272d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272d24: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272d28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272D28u;
    {
        const bool branch_taken_0x272d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D28u;
        // 0x272d2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d28) {
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272D30u;
    // 0x272d30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x272d30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d34: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x272D34u;
    {
        const bool branch_taken_0x272d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D34u;
        // 0x272d38: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d34) {
            ctx->pc = 0x272E50u;
            goto label_272e50;
        }
    }
    ctx->pc = 0x272D3Cu;
    // 0x272d3c: 0x0  nop
    ctx->pc = 0x272d3cu;
    // NOP
label_272d40:
    // 0x272d40: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x272d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x272d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d48: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x272d48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272d4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x272d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x272d50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x272d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x272d54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x272d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d58: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x272d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x272d5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x272d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x272d60: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x272d60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x272d64: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x272d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x272d68: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x272d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x272d6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272D6Cu;
    {
        const bool branch_taken_0x272d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D6Cu;
        // 0x272d70: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d6c) {
            ctx->pc = 0x272D88u;
            goto label_272d88;
        }
    }
    ctx->pc = 0x272D74u;
    // 0x272d74: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x272d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x272d78: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x272d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x272d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d80: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x272D80u;
    {
        const bool branch_taken_0x272d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D80u;
        // 0x272d84: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d80) {
            ctx->pc = 0x272E48u;
            goto label_272e48;
        }
    }
    ctx->pc = 0x272D88u;
label_272d88:
    // 0x272d88: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x272d8c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272D8Cu;
    {
        const bool branch_taken_0x272d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x272D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D8Cu;
        // 0x272d90: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d8c) {
            ctx->pc = 0x272DA0u;
            goto label_272da0;
        }
    }
    ctx->pc = 0x272D94u;
    // 0x272d94: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x272d94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x272d98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x272D98u;
    {
        const bool branch_taken_0x272d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D98u;
        // 0x272d9c: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d98) {
            ctx->pc = 0x272E48u;
            goto label_272e48;
        }
    }
    ctx->pc = 0x272DA0u;
label_272da0:
    // 0x272da0: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x272da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x272da4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x272DA4u;
    {
        const bool branch_taken_0x272da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272da4) {
            ctx->pc = 0x272DFCu;
            goto label_272dfc;
        }
    }
    ctx->pc = 0x272DACu;
    // 0x272dac: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x272DACu;
    {
        const bool branch_taken_0x272dac = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x272DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DACu;
        // 0x272db0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dac) {
            ctx->pc = 0x272DD8u;
            goto label_272dd8;
        }
    }
    ctx->pc = 0x272DB4u;
    // 0x272db4: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x272db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x272db8: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x272db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x272dbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272dc0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272dc4: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x272dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x272dc8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x272dc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272dcc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x272DCCu;
    {
        const bool branch_taken_0x272dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DCCu;
        // 0x272dd0: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dcc) {
            ctx->pc = 0x272E50u;
            goto label_272e50;
        }
    }
    ctx->pc = 0x272DD4u;
    // 0x272dd4: 0x0  nop
    ctx->pc = 0x272dd4u;
    // NOP
label_272dd8:
    // 0x272dd8: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x272dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x272ddc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x272DDCu;
    {
        const bool branch_taken_0x272ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DDCu;
        // 0x272de0: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ddc) {
            ctx->pc = 0x272E1Cu;
            goto label_272e1c;
        }
    }
    ctx->pc = 0x272DE4u;
    // 0x272de4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x272de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x272de8: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x272de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x272dec: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x272decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x272df0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x272df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x272df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272DF4u;
    {
        const bool branch_taken_0x272df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272df4) {
            ctx->pc = 0x272E08u;
            goto label_272e08;
        }
    }
    ctx->pc = 0x272DFCu;
label_272dfc:
    // 0x272dfc: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x272dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x272e00: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x272e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x272e04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x272e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_272e08:
    // 0x272e08: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x272e08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x272e0c: 0xc09cba8  jal         func_272EA0
    ctx->pc = 0x272E0Cu;
    SET_GPR_U32(ctx, 31, 0x272E14u);
    ctx->pc = 0x272E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E0Cu;
    // 0x272e10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272EA0u, 0x272E0Cu, 0x272E14u)) {
        return;
    }
    ctx->pc = 0x272E14u;
label_272e14:
    // 0x272e14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x272E14u;
    {
        const bool branch_taken_0x272e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E14u;
        // 0x272e18: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e14) {
            ctx->pc = 0x272E48u;
            goto label_272e48;
        }
    }
    ctx->pc = 0x272E1Cu;
label_272e1c:
    // 0x272e1c: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x272e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x272e20: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x272e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x272e24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272e28: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x272e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x272e2c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272e30: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x272e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x272e34: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x272e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x272e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272e3c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x272e3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272e40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x272e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x272e44: 0x0  nop
    ctx->pc = 0x272e44u;
    // NOP
label_272e48:
    // 0x272e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272e4c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x272e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_272e50:
    // 0x272e50: 0x3e00008  jr          $ra
    ctx->pc = 0x272E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E50u;
        // 0x272e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272E58u;
}
