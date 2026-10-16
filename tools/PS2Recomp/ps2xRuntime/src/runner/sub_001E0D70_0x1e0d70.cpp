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

// Function: sub_001E0D70
// Address: 0x1e0d70 - 0x1e11e0
void sub_001E0D70_0x1e0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0D70_0x1e0d70");
#endif

    switch (ctx->pc) {
        case 0x1e0dd0u: goto label_1e0dd0;
        case 0x1e0e00u: goto label_1e0e00;
        case 0x1e0ed0u: goto label_1e0ed0;
        case 0x1e10ccu: goto label_1e10cc;
        case 0x1e112cu: goto label_1e112c;
        default: break;
    }

    ctx->pc = 0x1e0d70u;

    // 0x1e0d70: 0x27bdf430  addiu       $sp, $sp, -0xBD0
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964272));
    // 0x1e0d74: 0x24060af0  addiu       $a2, $zero, 0xAF0
    ctx->pc = 0x1e0d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2800));
    // 0x1e0d78: 0x7fb00ba0  sq          $s0, 0xBA0($sp)
    ctx->pc = 0x1e0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2976), GPR_VEC(ctx, 16));
    // 0x1e0d7c: 0x7fb60b40  sq          $s6, 0xB40($sp)
    ctx->pc = 0x1e0d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2880), GPR_VEC(ctx, 22));
    // 0x1e0d80: 0x7fbe0b20  sq          $fp, 0xB20($sp)
    ctx->pc = 0x1e0d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2848), GPR_VEC(ctx, 30));
    // 0x1e0d84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e0d84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d88: 0xe7b70bc8  swc1        $f23, 0xBC8($sp)
    ctx->pc = 0x1e0d88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3016), bits); }
    // 0x1e0d8c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1e0d8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d90: 0x7fb10b90  sq          $s1, 0xB90($sp)
    ctx->pc = 0x1e0d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2960), GPR_VEC(ctx, 17));
    // 0x1e0d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d98: 0x7fb20b80  sq          $s2, 0xB80($sp)
    ctx->pc = 0x1e0d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2944), GPR_VEC(ctx, 18));
    // 0x1e0d9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0da0: 0x7fb30b70  sq          $s3, 0xB70($sp)
    ctx->pc = 0x1e0da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2928), GPR_VEC(ctx, 19));
    // 0x1e0da4: 0x7fb40b60  sq          $s4, 0xB60($sp)
    ctx->pc = 0x1e0da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2912), GPR_VEC(ctx, 20));
    // 0x1e0da8: 0x7fb50b50  sq          $s5, 0xB50($sp)
    ctx->pc = 0x1e0da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2896), GPR_VEC(ctx, 21));
    // 0x1e0dac: 0x7fb70b30  sq          $s7, 0xB30($sp)
    ctx->pc = 0x1e0dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2864), GPR_VEC(ctx, 23));
    // 0x1e0db0: 0xffbf0b10  sd          $ra, 0xB10($sp)
    ctx->pc = 0x1e0db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2832), GPR_U64(ctx, 31));
    // 0x1e0db4: 0xe7b60bc0  swc1        $f22, 0xBC0($sp)
    ctx->pc = 0x1e0db4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3008), bits); }
    // 0x1e0db8: 0xe7b50bb8  swc1        $f21, 0xBB8($sp)
    ctx->pc = 0x1e0db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3000), bits); }
    // 0x1e0dbc: 0xe7b40bb0  swc1        $f20, 0xBB0($sp)
    ctx->pc = 0x1e0dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2992), bits); }
    // 0x1e0dc0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1e0dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1e0dc4: 0x8ed40014  lw          $s4, 0x14($s6)
    ctx->pc = 0x1e0dc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x1e0dc8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1E0DC8u;
    SET_GPR_U32(ctx, 31, 0x1E0DD0u);
    ctx->pc = 0x1E0DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0DC8u;
    // 0x1e0dcc: 0xc6d5000c  lwc1        $f21, 0xC($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1E0DC8u, 0x1E0DD0u)) {
        return;
    }
    ctx->pc = 0x1E0DD0u;
label_1e0dd0:
    // 0x1e0dd0: 0xafa00b00  sw          $zero, 0xB00($sp)
    ctx->pc = 0x1e0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2816), GPR_U32(ctx, 0));
    // 0x1e0dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dd8: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1e0ddc: 0x184000ed  blez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x1E0DDCu;
    {
        const bool branch_taken_0x1e0ddc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DDCu;
        // 0x1e0de0: 0x8e90000c  lw          $s0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ddc) {
            ctx->pc = 0x1E1194u;
            goto label_1e1194;
        }
    }
    ctx->pc = 0x1E0DE4u;
    // 0x1e0de4: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1e0de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1e0de8: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1e0de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1e0dec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e0decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e0df0: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x1e0df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x1e0df4: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x1e0df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x1e0df8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e0df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e0dfc: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1e0e00:
    // 0x1e0e00: 0x96080000  lhu         $t0, 0x0($s0)
    ctx->pc = 0x1e0e00u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0e04: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1e0e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e0e08: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1e0e0c: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x1e0e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1e0e10: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0E10u;
    {
        const bool branch_taken_0x1e0e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E10u;
        // 0x1e0e14: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e10) {
            ctx->pc = 0x1E0E48u;
            goto label_1e0e48;
        }
    }
    ctx->pc = 0x1E0E18u;
    // 0x1e0e18: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e0e18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0e1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e0e20: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0E20u;
    {
        const bool branch_taken_0x1e0e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0e20) {
            ctx->pc = 0x1E0E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E20u;
            // 0x1e0e24: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0E30u;
            goto label_1e0e30;
        }
    }
    ctx->pc = 0x1E0E28u;
    // 0x1e0e28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0E28u;
    {
        const bool branch_taken_0x1e0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E28u;
        // 0x1e0e2c: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e28) {
            ctx->pc = 0x1E0E44u;
            goto label_1e0e44;
        }
    }
    ctx->pc = 0x1E0E30u;
label_1e0e30:
    // 0x1e0e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0e34: 0x0  nop
    ctx->pc = 0x1e0e34u;
    // NOP
    // 0x1e0e38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0e3c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1e0e3cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1e0e40: 0x461505c2  mul.s       $f23, $f0, $f21
    ctx->pc = 0x1e0e40u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1e0e44:
    // 0x1e0e44: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1e0e48:
    // 0x1e0e48: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x1e0e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x1e0e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0E4Cu;
    {
        const bool branch_taken_0x1e0e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E4Cu;
        // 0x1e0e50: 0x8fa40b00  lw          $a0, 0xB00($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e4c) {
            ctx->pc = 0x1E0E64u;
            goto label_1e0e64;
        }
    }
    ctx->pc = 0x1E0E54u;
    // 0x1e0e54: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e0e54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0e58: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e0e5c: 0xafa30b00  sw          $v1, 0xB00($sp)
    ctx->pc = 0x1e0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2816), GPR_U32(ctx, 3));
    // 0x1e0e60: 0x8fa40b00  lw          $a0, 0xB00($sp)
    ctx->pc = 0x1e0e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2816)));
label_1e0e64:
    // 0x1e0e64: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1e0e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e68: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e0e6c: 0x25370001  addiu       $s7, $t1, 0x1
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1e0e70: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x1e0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e0e74: 0x31150020  andi        $s5, $t0, 0x20
    ctx->pc = 0x1e0e74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
    // 0x1e0e78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0e7c: 0x310e0004  andi        $t6, $t0, 0x4
    ctx->pc = 0x1e0e7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x1e0e80: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1e0e84: 0x27aa0004  addiu       $t2, $sp, 0x4
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e0e88: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1e0e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e0e8c: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1e0e8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e0e90: 0x310f0008  andi        $t7, $t0, 0x8
    ctx->pc = 0x1e0e90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x1e0e94: 0x27ab0008  addiu       $t3, $sp, 0x8
    ctx->pc = 0x1e0e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e0e98: 0x31180010  andi        $t8, $t0, 0x10
    ctx->pc = 0x1e0e98u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x1e0e9c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1e0e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1e0ea0: 0x31190040  andi        $t9, $t0, 0x40
    ctx->pc = 0x1e0ea0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x1e0ea4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e0ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0ea8: 0x5e6821  addu        $t5, $v0, $fp
    ctx->pc = 0x1e0ea8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1e0eac: 0x31120080  andi        $s2, $t0, 0x80
    ctx->pc = 0x1e0eacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x1e0eb0: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x1e0eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1e0eb4: 0x31130100  andi        $s3, $t0, 0x100
    ctx->pc = 0x1e0eb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
    // 0x1e0eb8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0EB8u;
    {
        const bool branch_taken_0x1e0eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EB8u;
        // 0x1e0ebc: 0x27ac0018  addiu       $t4, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0eb8) {
            ctx->pc = 0x1E0EE8u;
            goto label_1e0ee8;
        }
    }
    ctx->pc = 0x1E0EC0u;
    // 0x1e0ec0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ec4: 0x104d0008  beq         $v0, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0EC4u;
    {
        const bool branch_taken_0x1e0ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x1E0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EC4u;
        // 0x1e0ec8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ec4) {
            ctx->pc = 0x1E0EE8u;
            goto label_1e0ee8;
        }
    }
    ctx->pc = 0x1E0ECCu;
    // 0x1e0ecc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1e0eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ed0:
    // 0x1e0ed0: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x1e0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1e0ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0ed8: 0x0  nop
    ctx->pc = 0x1e0ed8u;
    // NOP
    // 0x1e0edc: 0x0  nop
    ctx->pc = 0x1e0edcu;
    // NOP
    // 0x1e0ee0: 0x144dfffb  bne         $v0, $t5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E0EE0u;
    {
        const bool branch_taken_0x1e0ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x1E0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EE0u;
        // 0x1e0ee4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ee0) {
            ctx->pc = 0x1E0ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ed0;
        }
    }
    ctx->pc = 0x1E0EE8u;
label_1e0ee8:
    // 0x1e0ee8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1e0eec: 0x1224018  mult        $t0, $t1, $v0
    ctx->pc = 0x1e0eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1e0ef0: 0x3a81821  addu        $v1, $sp, $t0
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x1e0ef4: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0EF4u;
    {
        const bool branch_taken_0x1e0ef4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF4u;
        // 0x1e0ef8: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ef4) {
            ctx->pc = 0x1E0F0Cu;
            goto label_1e0f0c;
        }
    }
    ctx->pc = 0x1E0EFCu;
    // 0x1e0efc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e0efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f00: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x1e0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1e0f04: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e0f08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e0f0c:
    // 0x1e0f0c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F0Cu;
    {
        const bool branch_taken_0x1e0f0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F0Cu;
        // 0x1e0f10: 0x1681021  addu        $v0, $t3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f0c) {
            ctx->pc = 0x1E0F20u;
            goto label_1e0f20;
        }
    }
    ctx->pc = 0x1E0F14u;
    // 0x1e0f14: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e0f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f18: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e0f1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e0f20:
    // 0x1e0f20: 0x13000004  beqz        $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F20u;
    {
        const bool branch_taken_0x1e0f20 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F20u;
        // 0x1e0f24: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f20) {
            ctx->pc = 0x1E0F34u;
            goto label_1e0f34;
        }
    }
    ctx->pc = 0x1E0F28u;
    // 0x1e0f28: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e0f30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e0f34:
    // 0x1e0f34: 0x13200004  beqz        $t9, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F34u;
    {
        const bool branch_taken_0x1e0f34 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F34u;
        // 0x1e0f38: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f34) {
            ctx->pc = 0x1E0F48u;
            goto label_1e0f48;
        }
    }
    ctx->pc = 0x1E0F3Cu;
    // 0x1e0f3c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e0f3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f40: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e0f44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e0f48:
    // 0x1e0f48: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F48u;
    {
        const bool branch_taken_0x1e0f48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F48u;
        // 0x1e0f4c: 0xe81021  addu        $v0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f48) {
            ctx->pc = 0x1E0F5Cu;
            goto label_1e0f5c;
        }
    }
    ctx->pc = 0x1E0F50u;
    // 0x1e0f50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e0f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f54: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e0f58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e0f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e0f5c:
    // 0x1e0f5c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F5Cu;
    {
        const bool branch_taken_0x1e0f5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F5Cu;
        // 0x1e0f60: 0x1881021  addu        $v0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f5c) {
            ctx->pc = 0x1E0F70u;
            goto label_1e0f70;
        }
    }
    ctx->pc = 0x1E0F64u;
    // 0x1e0f64: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e0f64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f68: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e0f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e0f6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e0f70:
    // 0x1e0f70: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x1e0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
    // 0x1e0f74: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x1e0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1e0f78: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x1e0f78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1e0f7c: 0x1682021  addu        $a0, $t3, $t0
    ctx->pc = 0x1e0f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x1e0f80: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1e0f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1e0f84: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1e0f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1e0f88: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x1e0f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e0f8c: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x1e0f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e0f90: 0x6a2a0017  ldl         $t2, 0x17($s1)
    ctx->pc = 0x1e0f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1e0f94: 0x6e2a0010  ldr         $t2, 0x10($s1)
    ctx->pc = 0x1e0f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1e0f98: 0xb3a30af7  sdl         $v1, 0xAF7($sp)
    ctx->pc = 0x1e0f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0f9c: 0xb7a30af0  sdr         $v1, 0xAF0($sp)
    ctx->pc = 0x1e0f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0fa0: 0xb3aa0aff  sdl         $t2, 0xAFF($sp)
    ctx->pc = 0x1e0fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2815); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0fa4: 0xb7aa0af8  sdr         $t2, 0xAF8($sp)
    ctx->pc = 0x1e0fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0fa8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1e0fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1e0fac: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1e0facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e0fb0: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x1e0fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1e0fb4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e0fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0fb8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1e0fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1e0fbc: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x1e0fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e0fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0fc4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e0fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e0fc8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1e0fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e0fcc: 0x0  nop
    ctx->pc = 0x1e0fccu;
    // NOP
    // 0x1e0fd0: 0x0  nop
    ctx->pc = 0x1e0fd0u;
    // NOP
    // 0x1e0fd4: 0x461618c3  div.s       $f3, $f3, $f22
    ctx->pc = 0x1e0fd4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[22]);
    // 0x1e0fd8: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x1e0fd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1e0fdc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1e0fdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e0fe0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1e0fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0fe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0fe8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1e0fe8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[22]);
    // 0x1e0fec: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1e0fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1e0ff0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e0ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e0ff4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1e0ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0ff8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e0ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e0ffc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e0ffcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e1000: 0x0  nop
    ctx->pc = 0x1e1000u;
    // NOP
    // 0x1e1004: 0x0  nop
    ctx->pc = 0x1e1004u;
    // NOP
    // 0x1e1008: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x1e1008u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[22]);
    // 0x1e100c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1e100cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e1010: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e1010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e1014: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1e1014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1018: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e1018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e101c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e1020: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e1020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1024: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1e1024u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e1028: 0x0  nop
    ctx->pc = 0x1e1028u;
    // NOP
    // 0x1e102c: 0x0  nop
    ctx->pc = 0x1e102cu;
    // NOP
    // 0x1e1030: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x1e1030u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[20]);
    // 0x1e1034: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1038: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e103c: 0x46032301  sub.s       $f12, $f4, $f3
    ctx->pc = 0x1e103cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1e1040: 0x46056034  c.lt.s      $f12, $f5
    ctx->pc = 0x1e1040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1044: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e1044u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e1048: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e1048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e104c: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x1e104cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e1050: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1e1050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1058: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e105c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1060: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1e1060u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1e1064: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1e1064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1068: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e1068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e106c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e106cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e1070: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e1070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e1074: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1e1074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1e1078: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1e1078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e107c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e107cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e1080: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e1080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e1084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e1084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1088: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x1e1088u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
    // 0x1e108c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1e108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1090: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e1090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1094: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e1094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e1098: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e1098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e109c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E109Cu;
    {
        const bool branch_taken_0x1e109c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E109Cu;
        // 0x1e10a0: 0xe6210020  swc1        $f1, 0x20($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e109c) {
            ctx->pc = 0x1E10A8u;
            goto label_1e10a8;
        }
    }
    ctx->pc = 0x1E10A4u;
    // 0x1e10a4: 0x46002b06  mov.s       $f12, $f5
    ctx->pc = 0x1e10a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[5]);
label_1e10a8:
    // 0x1e10a8: 0x0  nop
    ctx->pc = 0x1e10a8u;
    // NOP
    // 0x1e10ac: 0x0  nop
    ctx->pc = 0x1e10acu;
    // NOP
    // 0x1e10b0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1e10b0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1e10b4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1e10b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e10b8: 0x0  nop
    ctx->pc = 0x1e10b8u;
    // NOP
    // 0x1e10bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E10BCu;
    {
        const bool branch_taken_0x1e10bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e10bc) {
            ctx->pc = 0x1E10CCu;
            goto label_1e10cc;
        }
    }
    ctx->pc = 0x1E10C4u;
    // 0x1e10c4: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1E10C4u;
    SET_GPR_U32(ctx, 31, 0x1E10CCu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1E10C4u, 0x1E10CCu)) {
        return;
    }
    ctx->pc = 0x1E10CCu;
label_1e10cc:
    // 0x1e10cc: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E10CCu;
    {
        const bool branch_taken_0x1e10cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10CCu;
        // 0x1e10d0: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10cc) {
            ctx->pc = 0x1E10DCu;
            goto label_1e10dc;
        }
    }
    ctx->pc = 0x1E10D4u;
    // 0x1e10d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e10d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e10d8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1e10d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1e10dc:
    // 0x1e10dc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e10dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e10e0: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x1e10e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e10e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e10e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e10e8: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1e10e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e10ec: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1e10ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e10f0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e10f4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1e10f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1e10f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e10f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e10fc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e10fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e1100: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e1100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e1104: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e1104u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1108: 0x0  nop
    ctx->pc = 0x1e1108u;
    // NOP
    // 0x1e110c: 0x0  nop
    ctx->pc = 0x1e110cu;
    // NOP
    // 0x1e1110: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1e1110u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1e1114: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1e1114u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1118: 0x0  nop
    ctx->pc = 0x1e1118u;
    // NOP
    // 0x1e111c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E111Cu;
    {
        const bool branch_taken_0x1e111c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e111c) {
            ctx->pc = 0x1E1120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E111Cu;
            // 0x1e1120: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1130u;
            goto label_1e1130;
        }
    }
    ctx->pc = 0x1E1124u;
    // 0x1e1124: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1E1124u;
    SET_GPR_U32(ctx, 31, 0x1E112Cu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1E1124u, 0x1E112Cu)) {
        return;
    }
    ctx->pc = 0x1E112Cu;
label_1e112c:
    // 0x1e112c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e112cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e1130:
    // 0x1e1130: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1134: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x1e1134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1138: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1e1138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e113c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1e113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1140: 0x0  nop
    ctx->pc = 0x1e1140u;
    // NOP
    // 0x1e1144: 0x0  nop
    ctx->pc = 0x1e1144u;
    // NOP
    // 0x1e1148: 0x460c18c3  div.s       $f3, $f3, $f12
    ctx->pc = 0x1e1148u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[12]);
    // 0x1e114c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1e114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1150: 0x0  nop
    ctx->pc = 0x1e1150u;
    // NOP
    // 0x1e1154: 0x0  nop
    ctx->pc = 0x1e1154u;
    // NOP
    // 0x1e1158: 0x460c1083  div.s       $f2, $f2, $f12
    ctx->pc = 0x1e1158u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[12]);
    // 0x1e115c: 0x0  nop
    ctx->pc = 0x1e115cu;
    // NOP
    // 0x1e1160: 0x0  nop
    ctx->pc = 0x1e1160u;
    // NOP
    // 0x1e1164: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x1e1164u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[12]);
    // 0x1e1168: 0x0  nop
    ctx->pc = 0x1e1168u;
    // NOP
    // 0x1e116c: 0x0  nop
    ctx->pc = 0x1e116cu;
    // NOP
    // 0x1e1170: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1e1170u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x1e1174: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1e1178: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x1e1178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1e117c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1e117cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e1180: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1e1180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e1184: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1e1184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1e1188: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1e1188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e118c: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x1E118Cu;
    {
        const bool branch_taken_0x1e118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E118Cu;
        // 0x1e1190: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e118c) {
            ctx->pc = 0x1E0E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0e00;
        }
    }
    ctx->pc = 0x1E1194u;
label_1e1194:
    // 0x1e1194: 0x7bb00ba0  lq          $s0, 0xBA0($sp)
    ctx->pc = 0x1e1194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2976)));
    // 0x1e1198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e119c: 0x7bb10b90  lq          $s1, 0xB90($sp)
    ctx->pc = 0x1e119cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2960)));
    // 0x1e11a0: 0x7bb20b80  lq          $s2, 0xB80($sp)
    ctx->pc = 0x1e11a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2944)));
    // 0x1e11a4: 0x7bb30b70  lq          $s3, 0xB70($sp)
    ctx->pc = 0x1e11a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2928)));
    // 0x1e11a8: 0x7bb40b60  lq          $s4, 0xB60($sp)
    ctx->pc = 0x1e11a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2912)));
    // 0x1e11ac: 0x7bb50b50  lq          $s5, 0xB50($sp)
    ctx->pc = 0x1e11acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2896)));
    // 0x1e11b0: 0x7bb60b40  lq          $s6, 0xB40($sp)
    ctx->pc = 0x1e11b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2880)));
    // 0x1e11b4: 0x7bb70b30  lq          $s7, 0xB30($sp)
    ctx->pc = 0x1e11b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2864)));
    // 0x1e11b8: 0x7bbe0b20  lq          $fp, 0xB20($sp)
    ctx->pc = 0x1e11b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2848)));
    // 0x1e11bc: 0xdfbf0b10  ld          $ra, 0xB10($sp)
    ctx->pc = 0x1e11bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x1e11c0: 0xc7b70bc8  lwc1        $f23, 0xBC8($sp)
    ctx->pc = 0x1e11c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e11c4: 0xc7b60bc0  lwc1        $f22, 0xBC0($sp)
    ctx->pc = 0x1e11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e11c8: 0xc7b50bb8  lwc1        $f21, 0xBB8($sp)
    ctx->pc = 0x1e11c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e11cc: 0xc7b40bb0  lwc1        $f20, 0xBB0($sp)
    ctx->pc = 0x1e11ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e11d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E11D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11D0u;
        // 0x1e11d4: 0x27bd0bd0  addiu       $sp, $sp, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E11D8u;
    // 0x1e11d8: 0x27bd1140  addiu       $sp, $sp, 0x1140
    ctx->pc = 0x1e11d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4416));
    // 0x1e11dc: 0x0  nop
    ctx->pc = 0x1e11dcu;
    // NOP
    ctx->pc = 0x1e11e0u;
}
