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

// Function: sub_001C7CA8
// Address: 0x1c7ca8 - 0x1c7ee8
void sub_001C7CA8_0x1c7ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7CA8_0x1c7ca8");
#endif

    switch (ctx->pc) {
        case 0x1c7cdcu: goto label_1c7cdc;
        case 0x1c7cfcu: goto label_1c7cfc;
        case 0x1c7d0cu: goto label_1c7d0c;
        case 0x1c7d14u: goto label_1c7d14;
        case 0x1c7d90u: goto label_1c7d90;
        case 0x1c7dc0u: goto label_1c7dc0;
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7de8u: goto label_1c7de8;
        case 0x1c7e3cu: goto label_1c7e3c;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7ebcu: goto label_1c7ebc;
        default: break;
    }

    ctx->pc = 0x1c7ca8u;

    // 0x1c7ca8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1c7ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1c7cac: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x1c7cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
    // 0x1c7cb0: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x1c7cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
    // 0x1c7cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c7cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cbc: 0xe7b60280  swc1        $f22, 0x280($sp)
    ctx->pc = 0x1c7cbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x1c7cc0: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x1c7cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
    // 0x1c7cc4: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x1c7cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
    // 0x1c7cc8: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x1c7cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
    // 0x1c7ccc: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x1c7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x1c7cd0: 0xe7b50278  swc1        $f21, 0x278($sp)
    ctx->pc = 0x1c7cd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x1c7cd4: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1C7CD4u;
    SET_GPR_U32(ctx, 31, 0x1C7CDCu);
    ctx->pc = 0x1C7CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CD4u;
    // 0x1c7cd8: 0xe7b40270  swc1        $f20, 0x270($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1C7CD4u, 0x1C7CDCu)) {
        return;
    }
    ctx->pc = 0x1C7CDCu;
label_1c7cdc:
    // 0x1c7cdc: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x1c7cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7ce8: 0x0  nop
    ctx->pc = 0x1c7ce8u;
    // NOP
    // 0x1c7cec: 0x0  nop
    ctx->pc = 0x1c7cecu;
    // NOP
    // 0x1c7cf0: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1c7cf0u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1c7cf4: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C7CF4u;
    SET_GPR_U32(ctx, 31, 0x1C7CFCu);
    ctx->pc = 0x1C7CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CF4u;
    // 0x1c7cf8: 0x8e240290  lw          $a0, 0x290($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C7CF4u, 0x1C7CFCu)) {
        return;
    }
    ctx->pc = 0x1C7CFCu;
label_1c7cfc:
    // 0x1c7cfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d04: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C7D04u;
    SET_GPR_U32(ctx, 31, 0x1C7D0Cu);
    ctx->pc = 0x1C7D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D04u;
    // 0x1c7d08: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C7D04u, 0x1C7D0Cu)) {
        return;
    }
    ctx->pc = 0x1C7D0Cu;
label_1c7d0c:
    // 0x1c7d0c: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1C7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D14u);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1C7D0Cu, 0x1C7D14u)) {
        return;
    }
    ctx->pc = 0x1C7D14u;
label_1c7d14:
    // 0x1c7d14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7D14u;
    {
        const bool branch_taken_0x1c7d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D14u;
        // 0x1c7d18: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d14) {
            ctx->pc = 0x1C7D28u;
            goto label_1c7d28;
        }
    }
    ctx->pc = 0x1C7D1Cu;
    // 0x1c7d1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c7d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7D20u;
    {
        const bool branch_taken_0x1c7d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D20u;
        // 0x1c7d24: 0xc44098f8  lwc1        $f0, -0x6708($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d20) {
            ctx->pc = 0x1C7D34u;
            goto label_1c7d34;
        }
    }
    ctx->pc = 0x1C7D28u;
label_1c7d28:
    // 0x1c7d28: 0x3c014303  lui         $at, 0x4303
    ctx->pc = 0x1c7d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17155 << 16));
    // 0x1c7d2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7d30: 0xc44098f8  lwc1        $f0, -0x6708($v0)
    ctx->pc = 0x1c7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7d34:
    // 0x1c7d34: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1c7d34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c7d38: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c7d3c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1c7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1c7d40: 0xc46e98f4  lwc1        $f14, -0x670C($v1)
    ctx->pc = 0x1c7d40u;
    { uint32_t bits = FAST_READ32(0x3398F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7d44: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1c7d48: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c7d4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c7d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c7d50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c7d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7d58: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c7d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c7d5c: 0xc46d98fc  lwc1        $f13, -0x6704($v1)
    ctx->pc = 0x1c7d5cu;
    { uint32_t bits = FAST_READ32(0x3398FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c7d60: 0x2453f6d0  addiu       $s3, $v0, -0x930
    ctx->pc = 0x1c7d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964944));
    // 0x1c7d64: 0xc6900018  lwc1        $f16, 0x18($s4)
    ctx->pc = 0x1c7d64u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c7d68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7d6c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1c7d6cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1c7d70: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1c7d70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c7d74: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c7d74u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c7d78: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1c7d78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c7d7c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1c7d7cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7d80: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1c7d80u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c7d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d88: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C7D88u;
    SET_GPR_U32(ctx, 31, 0x1C7D90u);
    ctx->pc = 0x1C7D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D88u;
    // 0x1c7d8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C7D88u, 0x1C7D90u)) {
        return;
    }
    ctx->pc = 0x1C7D90u;
label_1c7d90:
    // 0x1c7d90: 0xc62c0288  lwc1        $f12, 0x288($s1)
    ctx->pc = 0x1c7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7d94: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c7d98: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1c7d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1c7d9c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1c7d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1c7da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7da4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7da8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c7da8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c7dac: 0xc44e9900  lwc1        $f14, -0x6700($v0)
    ctx->pc = 0x1c7dacu;
    { uint32_t bits = FAST_READ32(0x339900u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7db0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c7db0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7db4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7db8: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x1C7DB8u;
    SET_GPR_U32(ctx, 31, 0x1C7DC0u);
    ctx->pc = 0x1C7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DB8u;
    // 0x1c7dbc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x1C7DB8u, 0x1C7DC0u)) {
        return;
    }
    ctx->pc = 0x1C7DC0u;
label_1c7dc0:
    // 0x1c7dc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7dc4: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C7DC4u;
    SET_GPR_U32(ctx, 31, 0x1C7DCCu);
    ctx->pc = 0x1C7DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DC4u;
    // 0x1c7dc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C7DC4u, 0x1C7DCCu)) {
        return;
    }
    ctx->pc = 0x1C7DCCu;
label_1c7dcc:
    // 0x1c7dcc: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C7DCCu;
    SET_GPR_U32(ctx, 31, 0x1C7DD4u);
    ctx->pc = 0x1C7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DCCu;
    // 0x1c7dd0: 0x8e240298  lw          $a0, 0x298($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C7DCCu, 0x1C7DD4u)) {
        return;
    }
    ctx->pc = 0x1C7DD4u;
label_1c7dd4:
    // 0x1c7dd4: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c7dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7de0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C7DE0u;
    SET_GPR_U32(ctx, 31, 0x1C7DE8u);
    ctx->pc = 0x1C7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DE0u;
    // 0x1c7de4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C7DE0u, 0x1C7DE8u)) {
        return;
    }
    ctx->pc = 0x1C7DE8u;
label_1c7de8:
    // 0x1c7de8: 0x8e23027c  lw          $v1, 0x27C($s1)
    ctx->pc = 0x1c7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
    // 0x1c7dec: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7DECu;
    {
        const bool branch_taken_0x1c7dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7dec) {
            ctx->pc = 0x1C7DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7DECu;
            // 0x1c7df0: 0x8e220280  lw          $v0, 0x280($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7E4Cu;
            goto label_1c7e4c;
        }
    }
    ctx->pc = 0x1C7DF4u;
    // 0x1c7df4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c7df8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c7dfc: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1c7dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1c7e00: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1c7e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1c7e04: 0xc6900018  lwc1        $f16, 0x18($s4)
    ctx->pc = 0x1c7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c7e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e0c: 0xc4ce991c  lwc1        $f14, -0x66E4($a2)
    ctx->pc = 0x1c7e0cu;
    { uint32_t bits = FAST_READ32(0x33991Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c7e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e14: 0xc44c9924  lwc1        $f12, -0x66DC($v0)
    ctx->pc = 0x1c7e14u;
    { uint32_t bits = FAST_READ32(0x339924u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7e18: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c7e18u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c7e1c: 0xc46d9928  lwc1        $f13, -0x66D8($v1)
    ctx->pc = 0x1c7e1cu;
    { uint32_t bits = FAST_READ32(0x339928u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c7e20: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1c7e20u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7e24: 0xc4ef9920  lwc1        $f15, -0x66E0($a3)
    ctx->pc = 0x1c7e24u;
    { uint32_t bits = FAST_READ32(0x339920u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c7e28: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1c7e28u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7e2c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1c7e2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c7e30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7e34: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C7E34u;
    SET_GPR_U32(ctx, 31, 0x1C7E3Cu);
    ctx->pc = 0x1C7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E34u;
    // 0x1c7e38: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C7E34u, 0x1C7E3Cu)) {
        return;
    }
    ctx->pc = 0x1C7E3Cu;
label_1c7e3c:
    // 0x1c7e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e40: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C7E40u;
    SET_GPR_U32(ctx, 31, 0x1C7E48u);
    ctx->pc = 0x1C7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E40u;
    // 0x1c7e44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C7E40u, 0x1C7E48u)) {
        return;
    }
    ctx->pc = 0x1C7E48u;
label_1c7e48:
    // 0x1c7e48: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x1c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_1c7e4c:
    // 0x1c7e4c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7E4Cu;
    {
        const bool branch_taken_0x1c7e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e4c) {
            ctx->pc = 0x1C7E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7E4Cu;
            // 0x1c7e50: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7E54u;
    // 0x1c7e54: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c7e58: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c7e5c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1c7e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1c7e60: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1c7e64: 0xc6900018  lwc1        $f16, 0x18($s4)
    ctx->pc = 0x1c7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c7e68: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1c7e68u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7e6c: 0xc48e991c  lwc1        $f14, -0x66E4($a0)
    ctx->pc = 0x1c7e6cu;
    { uint32_t bits = FAST_READ32(0x33991Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7e70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c7e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e74: 0xc4cf9920  lwc1        $f15, -0x66E0($a2)
    ctx->pc = 0x1c7e74u;
    { uint32_t bits = FAST_READ32(0x339920u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c7e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e7c: 0xc44c9924  lwc1        $f12, -0x66DC($v0)
    ctx->pc = 0x1c7e7cu;
    { uint32_t bits = FAST_READ32(0x339924u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7e80: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c7e80u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c7e84: 0xc46d992c  lwc1        $f13, -0x66D4($v1)
    ctx->pc = 0x1c7e84u;
    { uint32_t bits = FAST_READ32(0x33992Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c7e88: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1c7e88u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1c7e8c: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1c7e8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c7e90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7e94: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C7E94u;
    SET_GPR_U32(ctx, 31, 0x1C7E9Cu);
    ctx->pc = 0x1C7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E94u;
    // 0x1c7e98: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C7E94u, 0x1C7E9Cu)) {
        return;
    }
    ctx->pc = 0x1C7E9Cu;
label_1c7e9c:
    // 0x1c7e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ea0: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C7EA0u;
    SET_GPR_U32(ctx, 31, 0x1C7EA8u);
    ctx->pc = 0x1C7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EA0u;
    // 0x1c7ea4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C7EA0u, 0x1C7EA8u)) {
        return;
    }
    ctx->pc = 0x1C7EA8u;
label_1c7ea8:
    // 0x1c7ea8: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1c7ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1c7eac:
    // 0x1c7eac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7EACu;
    {
        const bool branch_taken_0x1c7eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EACu;
        // 0x1c7eb0: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7eac) {
            ctx->pc = 0x1C7EC0u;
            goto label_1c7ec0;
        }
    }
    ctx->pc = 0x1C7EB4u;
    // 0x1c7eb4: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1C7EB4u;
    SET_GPR_U32(ctx, 31, 0x1C7EBCu);
    ctx->pc = 0x1C7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EB4u;
    // 0x1c7eb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1C7EB4u, 0x1C7EBCu)) {
        return;
    }
    ctx->pc = 0x1C7EBCu;
label_1c7ebc:
    // 0x1c7ebc: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x1c7ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1c7ec0:
    // 0x1c7ec0: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x1c7ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c7ec4: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x1c7ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c7ec8: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x1c7ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c7ecc: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x1c7eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c7ed0: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x1c7ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c7ed4: 0xc7b60280  lwc1        $f22, 0x280($sp)
    ctx->pc = 0x1c7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c7ed8: 0xc7b50278  lwc1        $f21, 0x278($sp)
    ctx->pc = 0x1c7ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c7edc: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x1c7edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EE0u;
        // 0x1c7ee4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7EE8u;
}
