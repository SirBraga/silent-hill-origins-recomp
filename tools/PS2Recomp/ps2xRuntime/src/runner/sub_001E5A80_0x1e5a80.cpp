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

// Function: sub_001E5A80
// Address: 0x1e5a80 - 0x1e5e00
void sub_001E5A80_0x1e5a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5A80_0x1e5a80");
#endif

    switch (ctx->pc) {
        case 0x1e5ab8u: goto label_1e5ab8;
        case 0x1e5ac4u: goto label_1e5ac4;
        case 0x1e5b40u: goto label_1e5b40;
        case 0x1e5b4cu: goto label_1e5b4c;
        case 0x1e5b68u: goto label_1e5b68;
        case 0x1e5b84u: goto label_1e5b84;
        case 0x1e5b90u: goto label_1e5b90;
        case 0x1e5ba0u: goto label_1e5ba0;
        case 0x1e5bacu: goto label_1e5bac;
        case 0x1e5becu: goto label_1e5bec;
        case 0x1e5bf8u: goto label_1e5bf8;
        case 0x1e5c04u: goto label_1e5c04;
        case 0x1e5c14u: goto label_1e5c14;
        case 0x1e5c28u: goto label_1e5c28;
        case 0x1e5c34u: goto label_1e5c34;
        case 0x1e5c40u: goto label_1e5c40;
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c5cu: goto label_1e5c5c;
        case 0x1e5c68u: goto label_1e5c68;
        case 0x1e5c74u: goto label_1e5c74;
        case 0x1e5c84u: goto label_1e5c84;
        case 0x1e5c90u: goto label_1e5c90;
        case 0x1e5c9cu: goto label_1e5c9c;
        case 0x1e5ca8u: goto label_1e5ca8;
        case 0x1e5cb8u: goto label_1e5cb8;
        case 0x1e5cccu: goto label_1e5ccc;
        case 0x1e5cdcu: goto label_1e5cdc;
        case 0x1e5ce8u: goto label_1e5ce8;
        case 0x1e5cf8u: goto label_1e5cf8;
        case 0x1e5d04u: goto label_1e5d04;
        case 0x1e5d10u: goto label_1e5d10;
        case 0x1e5d1cu: goto label_1e5d1c;
        case 0x1e5d2cu: goto label_1e5d2c;
        case 0x1e5d38u: goto label_1e5d38;
        case 0x1e5d48u: goto label_1e5d48;
        case 0x1e5d54u: goto label_1e5d54;
        case 0x1e5d64u: goto label_1e5d64;
        case 0x1e5d70u: goto label_1e5d70;
        case 0x1e5d80u: goto label_1e5d80;
        case 0x1e5d8cu: goto label_1e5d8c;
        case 0x1e5d9cu: goto label_1e5d9c;
        case 0x1e5dacu: goto label_1e5dac;
        case 0x1e5dbcu: goto label_1e5dbc;
        case 0x1e5dccu: goto label_1e5dcc;
        case 0x1e5dd4u: goto label_1e5dd4;
        default: break;
    }

    ctx->pc = 0x1e5a80u;

    // 0x1e5a80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e5a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e5a84: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e5a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1e5a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e5a8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e5a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e5a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1e5a94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a98: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e5a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1e5a9c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e5a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1e5aa0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e5aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1e5aa4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e5aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1e5aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5aac: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e5ab0: 0xc091a88  jal         func_246A20
    ctx->pc = 0x1E5AB0u;
    SET_GPR_U32(ctx, 31, 0x1E5AB8u);
    ctx->pc = 0x1E5AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5AB0u;
    // 0x1e5ab4: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x1E5AB0u, 0x1E5AB8u)) {
        return;
    }
    ctx->pc = 0x1E5AB8u;
label_1e5ab8:
    // 0x1e5ab8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e5abc: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x1E5ABCu;
    SET_GPR_U32(ctx, 31, 0x1E5AC4u);
    ctx->pc = 0x1E5AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5ABCu;
    // 0x1e5ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1E5ABCu, 0x1E5AC4u)) {
        return;
    }
    ctx->pc = 0x1E5AC4u;
label_1e5ac4:
    // 0x1e5ac4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e5ac8: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1e5ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x1e5acc: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1e5accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x1e5ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e5ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5ad4: 0x8c62830c  lw          $v0, -0x7CF4($v1)
    ctx->pc = 0x1e5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1e5ad8: 0x8c440198  lw          $a0, 0x198($v0)
    ctx->pc = 0x1e5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x1e5adc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5ADCu;
    {
        const bool branch_taken_0x1e5adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5ADCu;
        // 0x1e5ae0: 0x241001c0  addiu       $s0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5adc) {
            ctx->pc = 0x1E5AF0u;
            goto label_1e5af0;
        }
    }
    ctx->pc = 0x1E5AE4u;
    // 0x1e5ae4: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1e5ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x1e5ae8: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1e5ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x1e5aec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e5aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5af0:
    // 0x1e5af0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e5af4: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x1e5af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1e5af8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5AF8u;
    {
        const bool branch_taken_0x1e5af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5af8) {
            ctx->pc = 0x1E5AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5AF8u;
            // 0x1e5afc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5B00u;
            goto label_1e5b00;
        }
    }
    ctx->pc = 0x1E5B00u;
label_1e5b00:
    // 0x1e5b00: 0x24132000  addiu       $s3, $zero, 0x2000
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1e5b04: 0x24111c00  addiu       $s1, $zero, 0x1C00
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x1e5b08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5b0c: 0x24152000  addiu       $s5, $zero, 0x2000
    ctx->pc = 0x1e5b0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1e5b10: 0x3c161c00  lui         $s6, 0x1C00
    ctx->pc = 0x1e5b10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)7168 << 16));
    // 0x1e5b14: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x1e5b14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e5b18: 0x8012  mflo        $s0
    ctx->pc = 0x1e5b18u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1e5b1c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e5b1cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5b20: 0x0  nop
    ctx->pc = 0x1e5b20u;
    // NOP
    // 0x1e5b24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e5b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e5b28: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x1e5b28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1e5b2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e5b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e5b30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5b30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5b34: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x1e5b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1e5b38: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E5B38u;
    SET_GPR_U32(ctx, 31, 0x1E5B40u);
    ctx->pc = 0x1E5B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B38u;
    // 0x1e5b3c: 0x2729823  subu        $s3, $s3, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E5B38u, 0x1E5B40u)) {
        return;
    }
    ctx->pc = 0x1E5B40u;
label_1e5b40:
    // 0x1e5b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b44: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5B44u;
    SET_GPR_U32(ctx, 31, 0x1E5B4Cu);
    ctx->pc = 0x1E5B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B44u;
    // 0x1e5b48: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5B44u, 0x1E5B4Cu)) {
        return;
    }
    ctx->pc = 0x1E5B4Cu;
label_1e5b4c:
    // 0x1e5b4c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e5b50: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e5b54: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1e5b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e5b58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e5b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e5b5c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e5b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e5b60: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5B60u;
    SET_GPR_U32(ctx, 31, 0x1E5B68u);
    ctx->pc = 0x1E5B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B60u;
    // 0x1e5b64: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5B60u, 0x1E5B68u)) {
        return;
    }
    ctx->pc = 0x1E5B68u;
label_1e5b68:
    // 0x1e5b68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e5b6c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5b70: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x1e5b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x1e5b74: 0xdc4534c0  ld          $a1, 0x34C0($v0)
    ctx->pc = 0x1e5b74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13504)));
    // 0x1e5b78: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e5b7c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E5B84u);
    ctx->pc = 0x1E5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B7Cu;
    // 0x1e5b80: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5B7Cu, 0x1E5B84u)) {
        return;
    }
    ctx->pc = 0x1E5B84u;
label_1e5b84:
    // 0x1e5b84: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e5b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e5b88: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5B88u;
    SET_GPR_U32(ctx, 31, 0x1E5B90u);
    ctx->pc = 0x1E5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B88u;
    // 0x1e5b8c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5B88u, 0x1E5B90u)) {
        return;
    }
    ctx->pc = 0x1E5B90u;
label_1e5b90:
    // 0x1e5b90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e5b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e5b94: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e5b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e5b98: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5B98u;
    SET_GPR_U32(ctx, 31, 0x1E5BA0u);
    ctx->pc = 0x1E5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B98u;
    // 0x1e5b9c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5B98u, 0x1E5BA0u)) {
        return;
    }
    ctx->pc = 0x1E5BA0u;
label_1e5ba0:
    // 0x1e5ba0: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1e5ba4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5BA4u;
    SET_GPR_U32(ctx, 31, 0x1E5BACu);
    ctx->pc = 0x1E5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BA4u;
    // 0x1e5ba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5BA4u, 0x1E5BACu)) {
        return;
    }
    ctx->pc = 0x1E5BACu;
label_1e5bac:
    // 0x1e5bac: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x1e5bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1e5bb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5bb4: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x1e5bb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5bb8: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x1e5bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1e5bbc: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1e5bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1e5bc0: 0x93a60003  lbu         $a2, 0x3($sp)
    ctx->pc = 0x1e5bc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1e5bc4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1e5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1e5bc8: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x1e5bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x1e5bcc: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x1e5bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x1e5bd0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e5bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e5bd4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e5bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e5bd8: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x1e5bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x1e5bdc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e5bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e5be0: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1e5be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1e5be4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5BE4u;
    SET_GPR_U32(ctx, 31, 0x1E5BECu);
    ctx->pc = 0x1E5BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BE4u;
    // 0x1e5be8: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5BE4u, 0x1E5BECu)) {
        return;
    }
    ctx->pc = 0x1E5BECu;
label_1e5bec:
    // 0x1e5bec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5bf0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5BF0u;
    SET_GPR_U32(ctx, 31, 0x1E5BF8u);
    ctx->pc = 0x1E5BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BF0u;
    // 0x1e5bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5BF0u, 0x1E5BF8u)) {
        return;
    }
    ctx->pc = 0x1E5BF8u;
label_1e5bf8:
    // 0x1e5bf8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5bfc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5BFCu;
    SET_GPR_U32(ctx, 31, 0x1E5C04u);
    ctx->pc = 0x1E5C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BFCu;
    // 0x1e5c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5BFCu, 0x1E5C04u)) {
        return;
    }
    ctx->pc = 0x1E5C04u;
label_1e5c04:
    // 0x1e5c04: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5c08: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5c0c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C14u);
    ctx->pc = 0x1E5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C0Cu;
    // 0x1e5c10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C0Cu, 0x1E5C14u)) {
        return;
    }
    ctx->pc = 0x1E5C14u;
label_1e5c14:
    // 0x1e5c14: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e5c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5c18: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x1e5c18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x1e5c1c: 0x2502825  or          $a1, $s2, $s0
    ctx->pc = 0x1e5c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 16));
    // 0x1e5c20: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C20u;
    SET_GPR_U32(ctx, 31, 0x1E5C28u);
    ctx->pc = 0x1E5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C20u;
    // 0x1e5c24: 0x270a025  or          $s4, $s3, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C20u, 0x1E5C28u)) {
        return;
    }
    ctx->pc = 0x1E5C28u;
label_1e5c28:
    // 0x1e5c28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5c2c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C34u);
    ctx->pc = 0x1E5C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C2Cu;
    // 0x1e5c30: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C2Cu, 0x1E5C34u)) {
        return;
    }
    ctx->pc = 0x1E5C34u;
label_1e5c34:
    // 0x1e5c34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e5c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c38: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C38u;
    SET_GPR_U32(ctx, 31, 0x1E5C40u);
    ctx->pc = 0x1E5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C38u;
    // 0x1e5c3c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C38u, 0x1E5C40u)) {
        return;
    }
    ctx->pc = 0x1E5C40u;
label_1e5c40:
    // 0x1e5c40: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5c44: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5c48: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C48u;
    SET_GPR_U32(ctx, 31, 0x1E5C50u);
    ctx->pc = 0x1E5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C48u;
    // 0x1e5c4c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C48u, 0x1E5C50u)) {
        return;
    }
    ctx->pc = 0x1E5C50u;
label_1e5c50:
    // 0x1e5c50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e5c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c54: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C54u;
    SET_GPR_U32(ctx, 31, 0x1E5C5Cu);
    ctx->pc = 0x1E5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C54u;
    // 0x1e5c58: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C54u, 0x1E5C5Cu)) {
        return;
    }
    ctx->pc = 0x1E5C5Cu;
label_1e5c5c:
    // 0x1e5c5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5c60: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C60u;
    SET_GPR_U32(ctx, 31, 0x1E5C68u);
    ctx->pc = 0x1E5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C60u;
    // 0x1e5c64: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C60u, 0x1E5C68u)) {
        return;
    }
    ctx->pc = 0x1E5C68u;
label_1e5c68:
    // 0x1e5c68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e5c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c6c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C74u);
    ctx->pc = 0x1E5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C6Cu;
    // 0x1e5c70: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C6Cu, 0x1E5C74u)) {
        return;
    }
    ctx->pc = 0x1E5C74u;
label_1e5c74:
    // 0x1e5c74: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5c78: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1e5c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1e5c7c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C7Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C84u);
    ctx->pc = 0x1E5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C7Cu;
    // 0x1e5c80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C7Cu, 0x1E5C84u)) {
        return;
    }
    ctx->pc = 0x1E5C84u;
label_1e5c84:
    // 0x1e5c84: 0x2152825  or          $a1, $s0, $s5
    ctx->pc = 0x1e5c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 21));
    // 0x1e5c88: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C88u;
    SET_GPR_U32(ctx, 31, 0x1E5C90u);
    ctx->pc = 0x1E5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C88u;
    // 0x1e5c8c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C88u, 0x1E5C90u)) {
        return;
    }
    ctx->pc = 0x1E5C90u;
label_1e5c90:
    // 0x1e5c90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5c94: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5C94u;
    SET_GPR_U32(ctx, 31, 0x1E5C9Cu);
    ctx->pc = 0x1E5C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C94u;
    // 0x1e5c98: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5C94u, 0x1E5C9Cu)) {
        return;
    }
    ctx->pc = 0x1E5C9Cu;
label_1e5c9c:
    // 0x1e5c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ca0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5CA0u;
    SET_GPR_U32(ctx, 31, 0x1E5CA8u);
    ctx->pc = 0x1E5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CA0u;
    // 0x1e5ca4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5CA0u, 0x1E5CA8u)) {
        return;
    }
    ctx->pc = 0x1E5CA8u;
label_1e5ca8:
    // 0x1e5ca8: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5cac: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5cb0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5CB0u;
    SET_GPR_U32(ctx, 31, 0x1E5CB8u);
    ctx->pc = 0x1E5CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CB0u;
    // 0x1e5cb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5CB0u, 0x1E5CB8u)) {
        return;
    }
    ctx->pc = 0x1E5CB8u;
label_1e5cb8:
    // 0x1e5cb8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5cbc: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x1e5cbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x1e5cc0: 0x2518025  or          $s0, $s2, $s1
    ctx->pc = 0x1e5cc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x1e5cc4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5CC4u;
    SET_GPR_U32(ctx, 31, 0x1E5CCCu);
    ctx->pc = 0x1E5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CC4u;
    // 0x1e5cc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5CC4u, 0x1E5CCCu)) {
        return;
    }
    ctx->pc = 0x1E5CCCu;
label_1e5ccc:
    // 0x1e5ccc: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5cd0: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5cd4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5CD4u;
    SET_GPR_U32(ctx, 31, 0x1E5CDCu);
    ctx->pc = 0x1E5CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CD4u;
    // 0x1e5cd8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5CD4u, 0x1E5CDCu)) {
        return;
    }
    ctx->pc = 0x1E5CDCu;
label_1e5cdc:
    // 0x1e5cdc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e5cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ce0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5CE0u;
    SET_GPR_U32(ctx, 31, 0x1E5CE8u);
    ctx->pc = 0x1E5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CE0u;
    // 0x1e5ce4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5CE0u, 0x1E5CE8u)) {
        return;
    }
    ctx->pc = 0x1E5CE8u;
label_1e5ce8:
    // 0x1e5ce8: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5cec: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1e5cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1e5cf0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5CF0u;
    SET_GPR_U32(ctx, 31, 0x1E5CF8u);
    ctx->pc = 0x1E5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CF0u;
    // 0x1e5cf4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5CF0u, 0x1E5CF8u)) {
        return;
    }
    ctx->pc = 0x1E5CF8u;
label_1e5cf8:
    // 0x1e5cf8: 0x2352825  or          $a1, $s1, $s5
    ctx->pc = 0x1e5cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 21));
    // 0x1e5cfc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5CFCu;
    SET_GPR_U32(ctx, 31, 0x1E5D04u);
    ctx->pc = 0x1E5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CFCu;
    // 0x1e5d00: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5CFCu, 0x1E5D04u)) {
        return;
    }
    ctx->pc = 0x1E5D04u;
label_1e5d04:
    // 0x1e5d04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5d08: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D08u;
    SET_GPR_U32(ctx, 31, 0x1E5D10u);
    ctx->pc = 0x1E5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D08u;
    // 0x1e5d0c: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D08u, 0x1E5D10u)) {
        return;
    }
    ctx->pc = 0x1E5D10u;
label_1e5d10:
    // 0x1e5d10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e5d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d14: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D14u;
    SET_GPR_U32(ctx, 31, 0x1E5D1Cu);
    ctx->pc = 0x1E5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D14u;
    // 0x1e5d18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D14u, 0x1E5D1Cu)) {
        return;
    }
    ctx->pc = 0x1E5D1Cu;
label_1e5d1c:
    // 0x1e5d1c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1e5d20: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5d24: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D24u;
    SET_GPR_U32(ctx, 31, 0x1E5D2Cu);
    ctx->pc = 0x1E5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D24u;
    // 0x1e5d28: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D24u, 0x1E5D2Cu)) {
        return;
    }
    ctx->pc = 0x1E5D2Cu;
label_1e5d2c:
    // 0x1e5d2c: 0x2562825  or          $a1, $s2, $s6
    ctx->pc = 0x1e5d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 22));
    // 0x1e5d30: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D30u;
    SET_GPR_U32(ctx, 31, 0x1E5D38u);
    ctx->pc = 0x1E5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D30u;
    // 0x1e5d34: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D30u, 0x1E5D38u)) {
        return;
    }
    ctx->pc = 0x1E5D38u;
label_1e5d38:
    // 0x1e5d38: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5d3c: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5d40: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D40u;
    SET_GPR_U32(ctx, 31, 0x1E5D48u);
    ctx->pc = 0x1E5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D40u;
    // 0x1e5d44: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D40u, 0x1E5D48u)) {
        return;
    }
    ctx->pc = 0x1E5D48u;
label_1e5d48:
    // 0x1e5d48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d4c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D54u);
    ctx->pc = 0x1E5D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D4Cu;
    // 0x1e5d50: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D4Cu, 0x1E5D54u)) {
        return;
    }
    ctx->pc = 0x1E5D54u;
label_1e5d54:
    // 0x1e5d54: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1e5d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1e5d58: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5d5c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D64u);
    ctx->pc = 0x1E5D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D5Cu;
    // 0x1e5d60: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D5Cu, 0x1E5D64u)) {
        return;
    }
    ctx->pc = 0x1E5D64u;
label_1e5d64:
    // 0x1e5d64: 0x2762825  or          $a1, $s3, $s6
    ctx->pc = 0x1e5d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 22));
    // 0x1e5d68: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D68u;
    SET_GPR_U32(ctx, 31, 0x1E5D70u);
    ctx->pc = 0x1E5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D68u;
    // 0x1e5d6c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D68u, 0x1E5D70u)) {
        return;
    }
    ctx->pc = 0x1E5D70u;
label_1e5d70:
    // 0x1e5d70: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1e5d74: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e5d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e5d78: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D78u;
    SET_GPR_U32(ctx, 31, 0x1E5D80u);
    ctx->pc = 0x1E5D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D78u;
    // 0x1e5d7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D78u, 0x1E5D80u)) {
        return;
    }
    ctx->pc = 0x1E5D80u;
label_1e5d80:
    // 0x1e5d80: 0x2712825  or          $a1, $s3, $s1
    ctx->pc = 0x1e5d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
    // 0x1e5d84: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D84u;
    SET_GPR_U32(ctx, 31, 0x1E5D8Cu);
    ctx->pc = 0x1E5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D84u;
    // 0x1e5d88: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D84u, 0x1E5D8Cu)) {
        return;
    }
    ctx->pc = 0x1E5D8Cu;
label_1e5d8c:
    // 0x1e5d8c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1e5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1e5d90: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1e5d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1e5d94: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5D94u;
    SET_GPR_U32(ctx, 31, 0x1E5D9Cu);
    ctx->pc = 0x1E5D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D94u;
    // 0x1e5d98: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5D94u, 0x1E5D9Cu)) {
        return;
    }
    ctx->pc = 0x1E5D9Cu;
label_1e5d9c:
    // 0x1e5d9c: 0x3c051c00  lui         $a1, 0x1C00
    ctx->pc = 0x1e5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7168 << 16));
    // 0x1e5da0: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1e5da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1e5da4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5DA4u;
    SET_GPR_U32(ctx, 31, 0x1E5DACu);
    ctx->pc = 0x1E5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DA4u;
    // 0x1e5da8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5DA4u, 0x1E5DACu)) {
        return;
    }
    ctx->pc = 0x1E5DACu;
label_1e5dac:
    // 0x1e5dac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e5db0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e5db4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5DB4u;
    SET_GPR_U32(ctx, 31, 0x1E5DBCu);
    ctx->pc = 0x1E5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DB4u;
    // 0x1e5db8: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5DB4u, 0x1E5DBCu)) {
        return;
    }
    ctx->pc = 0x1E5DBCu;
label_1e5dbc:
    // 0x1e5dbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e5dc0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e5dc4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5DC4u;
    SET_GPR_U32(ctx, 31, 0x1E5DCCu);
    ctx->pc = 0x1E5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DC4u;
    // 0x1e5dc8: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5DC4u, 0x1E5DCCu)) {
        return;
    }
    ctx->pc = 0x1E5DCCu;
label_1e5dcc:
    // 0x1e5dcc: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E5DCCu;
    SET_GPR_U32(ctx, 31, 0x1E5DD4u);
    ctx->pc = 0x1E5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DCCu;
    // 0x1e5dd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E5DCCu, 0x1E5DD4u)) {
        return;
    }
    ctx->pc = 0x1E5DD4u;
label_1e5dd4:
    // 0x1e5dd4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e5dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5dd8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e5dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5ddc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e5ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5de0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e5de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5de4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5de4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5de8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e5de8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5dec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e5decu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5df4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DF4u;
        // 0x1e5df8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5DFCu;
    // 0x1e5dfc: 0x0  nop
    ctx->pc = 0x1e5dfcu;
    // NOP
    ctx->pc = 0x1e5e00u;
}
