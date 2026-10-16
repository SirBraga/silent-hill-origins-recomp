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

// Function: sub_001C2C08
// Address: 0x1c2c08 - 0x1c2d98
void sub_001C2C08_0x1c2c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2C08_0x1c2c08");
#endif

    switch (ctx->pc) {
        case 0x1c2c34u: goto label_1c2c34;
        case 0x1c2c40u: goto label_1c2c40;
        case 0x1c2c4cu: goto label_1c2c4c;
        case 0x1c2c5cu: goto label_1c2c5c;
        case 0x1c2c6cu: goto label_1c2c6c;
        case 0x1c2c7cu: goto label_1c2c7c;
        case 0x1c2ca0u: goto label_1c2ca0;
        case 0x1c2cb4u: goto label_1c2cb4;
        case 0x1c2cbcu: goto label_1c2cbc;
        case 0x1c2cc4u: goto label_1c2cc4;
        case 0x1c2cd4u: goto label_1c2cd4;
        case 0x1c2cdcu: goto label_1c2cdc;
        case 0x1c2ce8u: goto label_1c2ce8;
        case 0x1c2cf4u: goto label_1c2cf4;
        case 0x1c2d00u: goto label_1c2d00;
        case 0x1c2d10u: goto label_1c2d10;
        case 0x1c2d48u: goto label_1c2d48;
        case 0x1c2d54u: goto label_1c2d54;
        case 0x1c2d68u: goto label_1c2d68;
        case 0x1c2d74u: goto label_1c2d74;
        default: break;
    }

    ctx->pc = 0x1c2c08u;

    // 0x1c2c08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2c0c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c2c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c2c10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c2c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c2c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c2c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c2c20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2c24: 0x26040828  addiu       $a0, $s0, 0x828
    ctx->pc = 0x1c2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2088));
    // 0x1c2c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2c2c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C34u);
    ctx->pc = 0x1C2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C2Cu;
    // 0x1c2c30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2C2Cu, 0x1C2C34u)) {
        return;
    }
    ctx->pc = 0x1C2C34u;
label_1c2c34:
    // 0x1c2c34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c38: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1C2C38u;
    SET_GPR_U32(ctx, 31, 0x1C2C40u);
    ctx->pc = 0x1C2C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C38u;
    // 0x1c2c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C2C38u, 0x1C2C40u)) {
        return;
    }
    ctx->pc = 0x1C2C40u;
label_1c2c40:
    // 0x1c2c40: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1c2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c2c44: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C2C44u;
    SET_GPR_U32(ctx, 31, 0x1C2C4Cu);
    ctx->pc = 0x1C2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C44u;
    // 0x1c2c48: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C2C44u, 0x1C2C4Cu)) {
        return;
    }
    ctx->pc = 0x1C2C4Cu;
label_1c2c4c:
    // 0x1c2c4c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c2c50: 0x8e05080c  lw          $a1, 0x80C($s0)
    ctx->pc = 0x1c2c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x1c2c54: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C2C54u;
    SET_GPR_U32(ctx, 31, 0x1C2C5Cu);
    ctx->pc = 0x1C2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C54u;
    // 0x1c2c58: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C2C54u, 0x1C2C5Cu)) {
        return;
    }
    ctx->pc = 0x1C2C5Cu;
label_1c2c5c:
    // 0x1c2c5c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c2c60: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x1c2c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c2c64: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C2C64u;
    SET_GPR_U32(ctx, 31, 0x1C2C6Cu);
    ctx->pc = 0x1C2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C64u;
    // 0x1c2c68: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C2C64u, 0x1C2C6Cu)) {
        return;
    }
    ctx->pc = 0x1C2C6Cu;
label_1c2c6c:
    // 0x1c2c6c: 0x8e050814  lw          $a1, 0x814($s0)
    ctx->pc = 0x1c2c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2068)));
    // 0x1c2c70: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c2c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c2c74: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C2C74u;
    SET_GPR_U32(ctx, 31, 0x1C2C7Cu);
    ctx->pc = 0x1C2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C74u;
    // 0x1c2c78: 0xae02081c  sw          $v0, 0x81C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C2C74u, 0x1C2C7Cu)) {
        return;
    }
    ctx->pc = 0x1C2C7Cu;
label_1c2c7c:
    // 0x1c2c7c: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x1c2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x1c2c80: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c2c84: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x1c2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x1c2c88: 0x8e03081c  lw          $v1, 0x81C($s0)
    ctx->pc = 0x1c2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1c2c8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c2c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2c90: 0xe6000834  swc1        $f0, 0x834($s0)
    ctx->pc = 0x1c2c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2100), bits); }
    // 0x1c2c94: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2c98: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1C2C98u;
    SET_GPR_U32(ctx, 31, 0x1C2CA0u);
    ctx->pc = 0x1C2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C98u;
    // 0x1c2c9c: 0xe6010848  swc1        $f1, 0x848($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1C2C98u, 0x1C2CA0u)) {
        return;
    }
    ctx->pc = 0x1C2CA0u;
label_1c2ca0:
    // 0x1c2ca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2ca4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c2ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2ca8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1c2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c2cac: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1C2CACu;
    SET_GPR_U32(ctx, 31, 0x1C2CB4u);
    ctx->pc = 0x1C2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CACu;
    // 0x1c2cb0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1C2CACu, 0x1C2CB4u)) {
        return;
    }
    ctx->pc = 0x1C2CB4u;
label_1c2cb4:
    // 0x1c2cb4: 0xc060056  jal         func_180158
    ctx->pc = 0x1C2CB4u;
    SET_GPR_U32(ctx, 31, 0x1C2CBCu);
    ctx->pc = 0x180158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180158u, 0x1C2CB4u, 0x1C2CBCu)) {
        return;
    }
    ctx->pc = 0x1C2CBCu;
label_1c2cbc:
    // 0x1c2cbc: 0xc070c8a  jal         func_1C3228
    ctx->pc = 0x1C2CBCu;
    SET_GPR_U32(ctx, 31, 0x1C2CC4u);
    ctx->pc = 0x1C2CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CBCu;
    // 0x1c2cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3228u, 0x1C2CBCu, 0x1C2CC4u)) {
        return;
    }
    ctx->pc = 0x1C2CC4u;
label_1c2cc4:
    // 0x1c2cc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ccc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2CCCu;
    SET_GPR_U32(ctx, 31, 0x1C2CD4u);
    ctx->pc = 0x1C2CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CCCu;
    // 0x1c2cd0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2CCCu, 0x1C2CD4u)) {
        return;
    }
    ctx->pc = 0x1C2CD4u;
label_1c2cd4:
    // 0x1c2cd4: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1C2CD4u;
    SET_GPR_U32(ctx, 31, 0x1C2CDCu);
    ctx->pc = 0x1C2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CD4u;
    // 0x1c2cd8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1C2CD4u, 0x1C2CDCu)) {
        return;
    }
    ctx->pc = 0x1C2CDCu;
label_1c2cdc:
    // 0x1c2cdc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c2cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c2ce0: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1C2CE0u;
    SET_GPR_U32(ctx, 31, 0x1C2CE8u);
    ctx->pc = 0x1C2CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CE0u;
    // 0x1c2ce4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1C2CE0u, 0x1C2CE8u)) {
        return;
    }
    ctx->pc = 0x1C2CE8u;
label_1c2ce8:
    // 0x1c2ce8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c2cec: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1C2CECu;
    SET_GPR_U32(ctx, 31, 0x1C2CF4u);
    ctx->pc = 0x1C2CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CECu;
    // 0x1c2cf0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1C2CECu, 0x1C2CF4u)) {
        return;
    }
    ctx->pc = 0x1C2CF4u;
label_1c2cf4:
    // 0x1c2cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2cf8: 0xc060418  jal         func_181060
    ctx->pc = 0x1C2CF8u;
    SET_GPR_U32(ctx, 31, 0x1C2D00u);
    ctx->pc = 0x1C2CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CF8u;
    // 0x1c2cfc: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181060u, 0x1C2CF8u, 0x1C2D00u)) {
        return;
    }
    ctx->pc = 0x1C2D00u;
label_1c2d00:
    // 0x1c2d00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c2d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2d04: 0x26030854  addiu       $v1, $s0, 0x854
    ctx->pc = 0x1c2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2132));
    // 0x1c2d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2D08u;
    {
        const bool branch_taken_0x1c2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D08u;
        // 0x1c2d0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d08) {
            ctx->pc = 0x1C2D18u;
            goto label_1c2d18;
        }
    }
    ctx->pc = 0x1C2D10u;
label_1c2d10:
    // 0x1c2d10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c2d14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2d18:
    // 0x1c2d18: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1c2d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c2d1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2D1Cu;
    {
        const bool branch_taken_0x1c2d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d1c) {
            ctx->pc = 0x1C2D54u;
            goto label_1c2d54;
        }
    }
    ctx->pc = 0x1C2D24u;
    // 0x1c2d24: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c2d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2d2c: 0x0  nop
    ctx->pc = 0x1c2d2cu;
    // NOP
    // 0x1c2d30: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C2D30u;
    {
        const bool branch_taken_0x1c2d30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2d30) {
            ctx->pc = 0x1C2D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D30u;
            // 0x1c2d34: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2d10;
        }
    }
    ctx->pc = 0x1C2D38u;
    // 0x1c2d38: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1c2d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2d3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c2d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d40: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x1C2D40u;
    SET_GPR_U32(ctx, 31, 0x1C2D48u);
    ctx->pc = 0x1C2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D40u;
    // 0x1c2d44: 0x8c64fffc  lw          $a0, -0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x1C2D40u, 0x1C2D48u)) {
        return;
    }
    ctx->pc = 0x1C2D48u;
label_1c2d48:
    // 0x1c2d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d4c: 0xc070de6  jal         func_1C3798
    ctx->pc = 0x1C2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2D54u);
    ctx->pc = 0x1C2D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D4Cu;
    // 0x1c2d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3798u, 0x1C2D4Cu, 0x1C2D54u)) {
        return;
    }
    ctx->pc = 0x1C2D54u;
label_1c2d54:
    // 0x1c2d54: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2D54u;
    {
        const bool branch_taken_0x1c2d54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D54u;
        // 0x1c2d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d54) {
            ctx->pc = 0x1C2D78u;
            goto label_1c2d78;
        }
    }
    ctx->pc = 0x1C2D5Cu;
    // 0x1c2d5c: 0x8e040850  lw          $a0, 0x850($s0)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2128)));
    // 0x1c2d60: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x1C2D60u;
    SET_GPR_U32(ctx, 31, 0x1C2D68u);
    ctx->pc = 0x1C2D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D60u;
    // 0x1c2d64: 0x8e050854  lw          $a1, 0x854($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x1C2D60u, 0x1C2D68u)) {
        return;
    }
    ctx->pc = 0x1C2D68u;
label_1c2d68:
    // 0x1c2d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d6c: 0xc070de6  jal         func_1C3798
    ctx->pc = 0x1C2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2D74u);
    ctx->pc = 0x1C2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D6Cu;
    // 0x1c2d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3798u, 0x1C2D6Cu, 0x1C2D74u)) {
        return;
    }
    ctx->pc = 0x1C2D74u;
label_1c2d74:
    // 0x1c2d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2d78:
    // 0x1c2d78: 0xae000878  sw          $zero, 0x878($s0)
    ctx->pc = 0x1c2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 0));
    // 0x1c2d7c: 0xae020874  sw          $v0, 0x874($s0)
    ctx->pc = 0x1c2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 2));
    // 0x1c2d80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c2d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2d84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c2d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2d88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D90u;
        // 0x1c2d94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D98u;
}
