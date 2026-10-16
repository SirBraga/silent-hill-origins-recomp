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

// Function: sub_00228CD0
// Address: 0x228cd0 - 0x228f60
void sub_00228CD0_0x228cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228CD0_0x228cd0");
#endif

    switch (ctx->pc) {
        case 0x228d48u: goto label_228d48;
        case 0x228d98u: goto label_228d98;
        case 0x228df0u: goto label_228df0;
        case 0x228e08u: goto label_228e08;
        case 0x228e70u: goto label_228e70;
        default: break;
    }

    ctx->pc = 0x228cd0u;

    // 0x228cd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x228cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x228cd4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x228cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x228cd8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x228cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x228cdc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x228cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ce0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x228ce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ce4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x228ce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x228ce8: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x228ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x228cec: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x228cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x228cf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x228cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x228cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228cf8: 0x0  nop
    ctx->pc = 0x228cf8u;
    // NOP
    // 0x228cfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228d00: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x228d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x228d04: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x228d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x228d08: 0x121c03  sra         $v1, $s2, 16
    ctx->pc = 0x228d08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 16));
    // 0x228d0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x228d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x228d10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x228d10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d14: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x228d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x228d18: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x228d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d1c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x228d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x228d20: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x228d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d24: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x228d24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x228d28: 0x16bc03  sra         $s7, $s6, 16
    ctx->pc = 0x228d28u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 22), 16));
    // 0x228d2c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x228d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x228d30: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x228d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228d38: 0x1477000f  bne         $v1, $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x228D38u;
    {
        const bool branch_taken_0x228d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x228D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D38u;
        // 0x228d3c: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d38) {
            ctx->pc = 0x228D78u;
            goto label_228d78;
        }
    }
    ctx->pc = 0x228D40u;
    // 0x228d40: 0xc08a25e  jal         func_228978
    ctx->pc = 0x228D40u;
    SET_GPR_U32(ctx, 31, 0x228D48u);
    ctx->pc = 0x228D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D40u;
    // 0x228d44: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228978u, 0x228D40u, 0x228D48u)) {
        return;
    }
    ctx->pc = 0x228D48u;
label_228d48:
    // 0x228d48: 0x4600a9c6  mov.s       $f7, $f21
    ctx->pc = 0x228d48u;
    ctx->f[7] = FPU_MOV_S(ctx->f[21]);
    // 0x228d4c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x228d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d50: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x228d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228d54: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x228d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x228d58: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x228d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d5c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x228d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228d60: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x228d60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x228d64: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x228d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x228d68: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x228d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x228d6c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x228D6Cu;
    {
        const bool branch_taken_0x228d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D6Cu;
        // 0x228d70: 0x46071082  mul.s       $f2, $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d6c) {
            ctx->pc = 0x228EE0u;
            goto label_228ee0;
        }
    }
    ctx->pc = 0x228D74u;
    // 0x228d74: 0x0  nop
    ctx->pc = 0x228d74u;
    // NOP
label_228d78:
    // 0x228d78: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x228d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x228d7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x228d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d80: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x228d80u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x228d84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x228d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d88: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x228d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x228d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d90: 0xc08a25e  jal         func_228978
    ctx->pc = 0x228D90u;
    SET_GPR_U32(ctx, 31, 0x228D98u);
    ctx->pc = 0x228D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D90u;
    // 0x228d94: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228978u, 0x228D90u, 0x228D98u)) {
        return;
    }
    ctx->pc = 0x228D98u;
label_228d98:
    // 0x228d98: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x228d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x228d9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228da0: 0x0  nop
    ctx->pc = 0x228da0u;
    // NOP
    // 0x228da4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228da8: 0x461409c2  mul.s       $f7, $f1, $f20
    ctx->pc = 0x228da8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x228dac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x228dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228db0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x228db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228db4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x228db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x228db8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x228db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228dbc: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x228dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228dc0: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x228dc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x228dc4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x228dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x228dc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x228dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x228dcc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228dccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228dd0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x228dd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x228dd4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x228dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x228dd8: 0x111403  sra         $v0, $s1, 16
    ctx->pc = 0x228dd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x228ddc: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x228ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228de0: 0x1052001d  beq         $v0, $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x228DE0u;
    {
        const bool branch_taken_0x228de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x228DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DE0u;
        // 0x228de4: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228de0) {
            ctx->pc = 0x228E58u;
            goto label_228e58;
        }
    }
    ctx->pc = 0x228DE8u;
    // 0x228de8: 0x3c170001  lui         $s7, 0x1
    ctx->pc = 0x228de8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1 << 16));
    // 0x228dec: 0x0  nop
    ctx->pc = 0x228decu;
    // NOP
label_228df0:
    // 0x228df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x228df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228df4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x228df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228df8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x228df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228dfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x228dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e00: 0xc08a25e  jal         func_228978
    ctx->pc = 0x228E00u;
    SET_GPR_U32(ctx, 31, 0x228E08u);
    ctx->pc = 0x228E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E00u;
    // 0x228e04: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228978u, 0x228E00u, 0x228E08u)) {
        return;
    }
    ctx->pc = 0x228E08u;
label_228e08:
    // 0x228e08: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x228e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228e0c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x228e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228e10: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x228e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x228e14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x228e18: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x228e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228e1c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x228e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228e20: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x228e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228e24: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x228e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228e28: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x228e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x228e2c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x228e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x228e30: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x228e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x228e34: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x228e34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x228e38: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x228e38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x228e3c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x228e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x228e40: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x228e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x228e44: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x228e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x228e48: 0x111403  sra         $v0, $s1, 16
    ctx->pc = 0x228e48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x228e4c: 0x1452ffe8  bne         $v0, $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x228E4Cu;
    {
        const bool branch_taken_0x228e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x228E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E4Cu;
        // 0x228e50: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e4c) {
            ctx->pc = 0x228DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228df0;
        }
    }
    ctx->pc = 0x228E54u;
    // 0x228e54: 0x0  nop
    ctx->pc = 0x228e54u;
    // NOP
label_228e58:
    // 0x228e58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x228e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x228e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x228e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x228e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e68: 0xc08a25e  jal         func_228978
    ctx->pc = 0x228E68u;
    SET_GPR_U32(ctx, 31, 0x228E70u);
    ctx->pc = 0x228E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E68u;
    // 0x228e6c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228978u, 0x228E68u, 0x228E70u)) {
        return;
    }
    ctx->pc = 0x228E70u;
label_228e70:
    // 0x228e70: 0x2d11023  subu        $v0, $s6, $s1
    ctx->pc = 0x228e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x228e74: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x228e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x228e78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e80: 0x0  nop
    ctx->pc = 0x228e80u;
    // NOP
    // 0x228e84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228e88: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x228e88u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228e8c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x228e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228e90: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x228e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228e94: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228e94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228e98: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x228e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228e9c: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x228e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x228ea0: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x228ea0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x228ea4: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x228ea4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x228ea8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x228ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x228eac: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x228eacu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x228eb0: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x228eb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x228eb4: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x228eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x228eb8: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x228eb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x228ebc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x228ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228ec0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x228ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x228ec4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x228ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228ec8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x228ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ecc: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x228eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228ed0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x228ed0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x228ed4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x228ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x228ed8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x228ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x228edc: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x228edcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_228ee0:
    // 0x228ee0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x228ee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x228ee4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x228ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x228ee8: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x228ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x228eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228ef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228ef4: 0x0  nop
    ctx->pc = 0x228ef4u;
    // NOP
    // 0x228ef8: 0x461509c3  div.s       $f7, $f1, $f21
    ctx->pc = 0x228ef8u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[21]);
    // 0x228efc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x228efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f00: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x228f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228f04: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x228f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x228f08: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x228f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228f0c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x228f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228f10: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x228f10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x228f14: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x228f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x228f18: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x228f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x228f1c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228f20: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x228f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228f24: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x228f24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x228f28: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x228f28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x228f2c: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x228f2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x228f30: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x228f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228f34: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x228f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228f38: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x228f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228f3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x228f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228f40: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x228f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228f44: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x228f44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228f48: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x228f48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228f50: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x228f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x228f54: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x228f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228f58: 0x3e00008  jr          $ra
    ctx->pc = 0x228F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F58u;
        // 0x228f5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228F60u;
}
