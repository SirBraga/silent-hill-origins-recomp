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

// Function: sub_002C49B0
// Address: 0x2c49b0 - 0x2c4b30
void sub_002C49B0_0x2c49b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C49B0_0x2c49b0");
#endif

    switch (ctx->pc) {
        case 0x2c4a0cu: goto label_2c4a0c;
        case 0x2c4a28u: goto label_2c4a28;
        case 0x2c4a40u: goto label_2c4a40;
        case 0x2c4a5cu: goto label_2c4a5c;
        case 0x2c4b18u: goto label_2c4b18;
        default: break;
    }

    ctx->pc = 0x2c49b0u;

    // 0x2c49b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c49b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c49b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c49b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c49b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c49b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c49bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c49bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c49c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c49c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c49c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c49c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c49cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c49ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c49d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2c49d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2c49d8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2c49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2c49dc: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2c49dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
    // 0x2c49e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c49e4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2c49e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2c49e8: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x2c49e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c49ec: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2c49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2c49f0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2c49f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c49f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2c49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2c49fc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2c49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2c4a00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c4a04: 0xc0b5582  jal         func_2D5608
    ctx->pc = 0x2C4A04u;
    SET_GPR_U32(ctx, 31, 0x2C4A0Cu);
    ctx->pc = 0x2C4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A04u;
    // 0x2c4a08: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5608u, 0x2C4A04u, 0x2C4A0Cu)) {
        return;
    }
    ctx->pc = 0x2C4A0Cu;
label_2c4a0c:
    // 0x2c4a0c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c4a10: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2c4a14: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2c4a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    // 0x2c4a18: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c4a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c4a1c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c4a20: 0xc0b559e  jal         func_2D5678
    ctx->pc = 0x2C4A20u;
    SET_GPR_U32(ctx, 31, 0x2C4A28u);
    ctx->pc = 0x2C4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A20u;
    // 0x2c4a24: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5678u, 0x2C4A20u, 0x2C4A28u)) {
        return;
    }
    ctx->pc = 0x2C4A28u;
label_2c4a28:
    // 0x2c4a28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c4a2c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2c4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2c4a30: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2c4a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2c4a34: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2c4a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
    // 0x2c4a38: 0xc0b5582  jal         func_2D5608
    ctx->pc = 0x2C4A38u;
    SET_GPR_U32(ctx, 31, 0x2C4A40u);
    ctx->pc = 0x2C4A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A38u;
    // 0x2c4a3c: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5608u, 0x2C4A38u, 0x2C4A40u)) {
        return;
    }
    ctx->pc = 0x2C4A40u;
label_2c4a40:
    // 0x2c4a40: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2c4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c4a44: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2c4a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2c4a48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c4a4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c4a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c4a50: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2c4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2c4a54: 0xc0b559e  jal         func_2D5678
    ctx->pc = 0x2C4A54u;
    SET_GPR_U32(ctx, 31, 0x2C4A5Cu);
    ctx->pc = 0x2C4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A54u;
    // 0x2c4a58: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5678u, 0x2C4A54u, 0x2C4A5Cu)) {
        return;
    }
    ctx->pc = 0x2C4A5Cu;
label_2c4a5c:
    // 0x2c4a5c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x2c4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2c4a60: 0x24050120  addiu       $a1, $zero, 0x120
    ctx->pc = 0x2c4a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2c4a64: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2c4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2c4a68: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c4a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2c4a6c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x2c4a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x2c4a70: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x2c4a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2c4a74: 0x34c6fff0  ori         $a2, $a2, 0xFFF0
    ctx->pc = 0x2c4a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    // 0x2c4a78: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c4a7c: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x2c4a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2c4a80: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2c4a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2c4a84: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2c4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x2c4a88: 0x2408004c  addiu       $t0, $zero, 0x4C
    ctx->pc = 0x2c4a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c4a8c: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x2c4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2c4a90: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2c4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c4a94: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2c4a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2c4a98: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2c4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2c4a9c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2c4a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c4aa0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x2c4aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2c4aa4: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x2c4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    // 0x2c4aa8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2c4aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2c4aac: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2c4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2c4ab0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x2c4ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2c4ab4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2c4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2c4ab8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c4ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c4abc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c4ac0: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2c4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x2c4ac4: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x2c4ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c4ac8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2c4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2c4acc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2c4accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2c4ad0: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2c4ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2c4ad4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c4ad8: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2c4adc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2c4adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2c4ae0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c4ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4ae4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2c4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c4ae8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x2c4ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x2c4aec: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x2c4aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c4af0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c4af4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c4af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2c4af8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x2c4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x2c4afc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c4b00: 0xae07007c  sw          $a3, 0x7C($s0)
    ctx->pc = 0x2c4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 7));
    // 0x2c4b04: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c4b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2c4b08: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2c4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4b0c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2c4b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2c4b10: 0xc0b55b8  jal         func_2D56E0
    ctx->pc = 0x2C4B10u;
    SET_GPR_U32(ctx, 31, 0x2C4B18u);
    ctx->pc = 0x2C4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B10u;
    // 0x2c4b14: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D56E0u, 0x2C4B10u, 0x2C4B18u)) {
        return;
    }
    ctx->pc = 0x2C4B18u;
label_2c4b18:
    // 0x2c4b18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c4b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4b1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c4b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4b20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c4b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4b28: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B28u;
        // 0x2c4b2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4B30u;
}
