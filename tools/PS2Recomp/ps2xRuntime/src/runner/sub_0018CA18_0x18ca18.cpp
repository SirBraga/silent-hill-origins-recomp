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

// Function: sub_0018CA18
// Address: 0x18ca18 - 0x18cd18
void sub_0018CA18_0x18ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CA18_0x18ca18");
#endif

    switch (ctx->pc) {
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb84u: goto label_18cb84;
        case 0x18cba4u: goto label_18cba4;
        case 0x18cbb8u: goto label_18cbb8;
        case 0x18cbc8u: goto label_18cbc8;
        case 0x18cbe0u: goto label_18cbe0;
        case 0x18cbf8u: goto label_18cbf8;
        case 0x18cc10u: goto label_18cc10;
        case 0x18cc28u: goto label_18cc28;
        case 0x18cc44u: goto label_18cc44;
        case 0x18cc60u: goto label_18cc60;
        case 0x18cc7cu: goto label_18cc7c;
        case 0x18cc98u: goto label_18cc98;
        case 0x18ccacu: goto label_18ccac;
        case 0x18ccc0u: goto label_18ccc0;
        case 0x18ccd4u: goto label_18ccd4;
        case 0x18cce8u: goto label_18cce8;
        case 0x18ccf0u: goto label_18ccf0;
        default: break;
    }

    ctx->pc = 0x18ca18u;

    // 0x18ca18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18ca1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18ca20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18ca24: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x18ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x18ca28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18ca2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ca2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18ca34: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x18ca34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ca38: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18ca3c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x18ca40: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18ca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18ca44: 0x24e79500  addiu       $a3, $a3, -0x6B00
    ctx->pc = 0x18ca44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939904));
    // 0x18ca48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ca4c: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x18ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x18ca50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x18ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18ca54: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x18ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x18ca58: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x18ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x18ca5c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x18ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x18ca60: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x18ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x18ca64: 0x2606003c  addiu       $a2, $s0, 0x3C
    ctx->pc = 0x18ca64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x18ca68: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x18ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x18ca6c: 0x2608004c  addiu       $t0, $s0, 0x4C
    ctx->pc = 0x18ca6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x18ca70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x18ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x18ca74: 0x3c0b006a  lui         $t3, 0x6A
    ctx->pc = 0x18ca74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)106 << 16));
    // 0x18ca78: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x18ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x18ca7c: 0x2609009c  addiu       $t1, $s0, 0x9C
    ctx->pc = 0x18ca7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x18ca80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18ca84: 0x256b94e8  addiu       $t3, $t3, -0x6B18
    ctx->pc = 0x18ca84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294939880));
    // 0x18ca88: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x18ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x18ca8c: 0x2602005c  addiu       $v0, $s0, 0x5C
    ctx->pc = 0x18ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x18ca90: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x18ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x18ca94: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x18ca94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
    // 0x18ca98: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x18ca9c: 0x254a94d0  addiu       $t2, $t2, -0x6B30
    ctx->pc = 0x18ca9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939856));
    // 0x18caa0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18caa4: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x18caa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x18caa8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x18caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x18caac: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x18caacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18cab0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x18cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x18cab4: 0x263193a8  addiu       $s1, $s1, -0x6C58
    ctx->pc = 0x18cab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939560));
    // 0x18cab8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18cabc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18cac0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18cac4: 0x24a59398  addiu       $a1, $a1, -0x6C68
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939544));
    // 0x18cac8: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x18cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x18cacc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18caccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18cad0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x18cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x18cad4: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18cad8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x18cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x18cadc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x18cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x18cae0: 0xad07000c  sw          $a3, 0xC($t0)
    ctx->pc = 0x18cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
    // 0x18cae4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cae8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x18cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x18caec: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x18caecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x18caf0: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x18caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x18caf4: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x18caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x18caf8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x18caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x18cafc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x18cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x18cb00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18cb04: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x18cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x18cb08: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x18cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x18cb0c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x18cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x18cb10: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x18cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x18cb14: 0xad2b000c  sw          $t3, 0xC($t1)
    ctx->pc = 0x18cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 11));
    // 0x18cb18: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x18cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x18cb1c: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x18cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x18cb20: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x18cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x18cb24: 0xae0c00ac  sw          $t4, 0xAC($s0)
    ctx->pc = 0x18cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 12));
    // 0x18cb28: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x18cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x18cb2c: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x18cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x18cb30: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x18cb34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18cb38: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18cb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x18cb3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cb3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cb40: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x18cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x18cb44: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x18cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x18cb48: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x18cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x18cb4c: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x18cb50: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x18cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x18cb54: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x18cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x18cb58: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x18cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x18cb5c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x18cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x18cb60: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x18cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x18cb64: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x18CB64u;
    SET_GPR_U32(ctx, 31, 0x18CB6Cu);
    ctx->pc = 0x18CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB64u;
    // 0x18cb68: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x18CB64u, 0x18CB6Cu)) {
        return;
    }
    ctx->pc = 0x18CB6Cu;
label_18cb6c:
    // 0x18cb6c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18cb70: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18cb74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb78: 0x24a593b8  addiu       $a1, $a1, -0x6C48
    ctx->pc = 0x18cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939576));
    // 0x18cb7c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x18CB7Cu;
    SET_GPR_U32(ctx, 31, 0x18CB84u);
    ctx->pc = 0x18CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB7Cu;
    // 0x18cb80: 0x2484bd88  addiu       $a0, $a0, -0x4278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x18CB7Cu, 0x18CB84u)) {
        return;
    }
    ctx->pc = 0x18CB84u;
label_18cb84:
    // 0x18cb84: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x18cb84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x18cb88: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18cb8c: 0x2631bd90  addiu       $s1, $s1, -0x4270
    ctx->pc = 0x18cb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950288));
    // 0x18cb90: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x18cb94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb98: 0x24a593c8  addiu       $a1, $a1, -0x6C38
    ctx->pc = 0x18cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    // 0x18cb9c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x18CB9Cu;
    SET_GPR_U32(ctx, 31, 0x18CBA4u);
    ctx->pc = 0x18CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB9Cu;
    // 0x18cba0: 0x24c693e0  addiu       $a2, $a2, -0x6C20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x18CB9Cu, 0x18CBA4u)) {
        return;
    }
    ctx->pc = 0x18CBA4u;
label_18cba4:
    // 0x18cba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cba8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x18cba8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18cbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbb0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CBB0u;
    SET_GPR_U32(ctx, 31, 0x18CBB8u);
    ctx->pc = 0x18CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBB0u;
    // 0x18cbb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CBB0u, 0x18CBB8u)) {
        return;
    }
    ctx->pc = 0x18CBB8u;
label_18cbb8:
    // 0x18cbb8: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x18cbbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbc0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18CBC0u;
    SET_GPR_U32(ctx, 31, 0x18CBC8u);
    ctx->pc = 0x18CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBC0u;
    // 0x18cbc4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18CBC0u, 0x18CBC8u)) {
        return;
    }
    ctx->pc = 0x18CBC8u;
label_18cbc8:
    // 0x18cbc8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x18cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x18cbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbd0: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x18cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x18cbd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbd8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CBD8u;
    SET_GPR_U32(ctx, 31, 0x18CBE0u);
    ctx->pc = 0x18CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBD8u;
    // 0x18cbdc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CBD8u, 0x18CBE0u)) {
        return;
    }
    ctx->pc = 0x18CBE0u;
label_18cbe0:
    // 0x18cbe0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x18cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x18cbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbe8: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x18cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x18cbec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbf0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CBF0u;
    SET_GPR_U32(ctx, 31, 0x18CBF8u);
    ctx->pc = 0x18CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBF0u;
    // 0x18cbf4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CBF0u, 0x18CBF8u)) {
        return;
    }
    ctx->pc = 0x18CBF8u;
label_18cbf8:
    // 0x18cbf8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x18cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x18cbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc00: 0x24a586d0  addiu       $a1, $a1, -0x7930
    ctx->pc = 0x18cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    // 0x18cc04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc08: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CC08u;
    SET_GPR_U32(ctx, 31, 0x18CC10u);
    ctx->pc = 0x18CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC08u;
    // 0x18cc0c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CC08u, 0x18CC10u)) {
        return;
    }
    ctx->pc = 0x18CC10u;
label_18cc10:
    // 0x18cc10: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x18cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x18cc14: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x18cc14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18cc18: 0x24a586c8  addiu       $a1, $a1, -0x7938
    ctx->pc = 0x18cc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    // 0x18cc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc20: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CC20u;
    SET_GPR_U32(ctx, 31, 0x18CC28u);
    ctx->pc = 0x18CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC20u;
    // 0x18cc24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CC20u, 0x18CC28u)) {
        return;
    }
    ctx->pc = 0x18CC28u;
label_18cc28:
    // 0x18cc28: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x18cc28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x18cc2c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18cc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18cc30: 0x269446f8  addiu       $s4, $s4, 0x46F8
    ctx->pc = 0x18cc30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 18168));
    // 0x18cc34: 0x24a593e8  addiu       $a1, $a1, -0x6C18
    ctx->pc = 0x18cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939624));
    // 0x18cc38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18cc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc3c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x18CC3Cu;
    SET_GPR_U32(ctx, 31, 0x18CC44u);
    ctx->pc = 0x18CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC3Cu;
    // 0x18cc40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x18CC3Cu, 0x18CC44u)) {
        return;
    }
    ctx->pc = 0x18CC44u;
label_18cc44:
    // 0x18cc44: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x18cc48: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18cc4c: 0x26734700  addiu       $s3, $s3, 0x4700
    ctx->pc = 0x18cc4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18176));
    // 0x18cc50: 0x24a593f8  addiu       $a1, $a1, -0x6C08
    ctx->pc = 0x18cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939640));
    // 0x18cc54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18cc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc58: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x18CC58u;
    SET_GPR_U32(ctx, 31, 0x18CC60u);
    ctx->pc = 0x18CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC58u;
    // 0x18cc5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x18CC58u, 0x18CC60u)) {
        return;
    }
    ctx->pc = 0x18CC60u;
label_18cc60:
    // 0x18cc60: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x18cc60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x18cc64: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18cc68: 0x26524720  addiu       $s2, $s2, 0x4720
    ctx->pc = 0x18cc68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18208));
    // 0x18cc6c: 0x24a59408  addiu       $a1, $a1, -0x6BF8
    ctx->pc = 0x18cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939656));
    // 0x18cc70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc74: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x18CC74u;
    SET_GPR_U32(ctx, 31, 0x18CC7Cu);
    ctx->pc = 0x18CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC74u;
    // 0x18cc78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x18CC74u, 0x18CC7Cu)) {
        return;
    }
    ctx->pc = 0x18CC7Cu;
label_18cc7c:
    // 0x18cc7c: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x18cc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x18cc80: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18cc84: 0x26314728  addiu       $s1, $s1, 0x4728
    ctx->pc = 0x18cc84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18216));
    // 0x18cc88: 0x24a59420  addiu       $a1, $a1, -0x6BE0
    ctx->pc = 0x18cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939680));
    // 0x18cc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc90: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x18CC90u;
    SET_GPR_U32(ctx, 31, 0x18CC98u);
    ctx->pc = 0x18CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC90u;
    // 0x18cc94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x18CC90u, 0x18CC98u)) {
        return;
    }
    ctx->pc = 0x18CC98u;
label_18cc98:
    // 0x18cc98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18cc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cca4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CCA4u;
    SET_GPR_U32(ctx, 31, 0x18CCACu);
    ctx->pc = 0x18CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCA4u;
    // 0x18cca8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CCA4u, 0x18CCACu)) {
        return;
    }
    ctx->pc = 0x18CCACu;
label_18ccac:
    // 0x18ccac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ccacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ccb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccb8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CCB8u;
    SET_GPR_U32(ctx, 31, 0x18CCC0u);
    ctx->pc = 0x18CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCB8u;
    // 0x18ccbc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CCB8u, 0x18CCC0u)) {
        return;
    }
    ctx->pc = 0x18CCC0u;
label_18ccc0:
    // 0x18ccc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18ccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ccc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cccc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CCCCu;
    SET_GPR_U32(ctx, 31, 0x18CCD4u);
    ctx->pc = 0x18CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCCCu;
    // 0x18ccd0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CCCCu, 0x18CCD4u)) {
        return;
    }
    ctx->pc = 0x18CCD4u;
label_18ccd4:
    // 0x18ccd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ccd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ccdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cce0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18CCE0u;
    SET_GPR_U32(ctx, 31, 0x18CCE8u);
    ctx->pc = 0x18CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCE0u;
    // 0x18cce4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18CCE0u, 0x18CCE8u)) {
        return;
    }
    ctx->pc = 0x18CCE8u;
label_18cce8:
    // 0x18cce8: 0xc06408c  jal         func_190230
    ctx->pc = 0x18CCE8u;
    SET_GPR_U32(ctx, 31, 0x18CCF0u);
    ctx->pc = 0x18CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCE8u;
    // 0x18ccec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190230u, 0x18CCE8u, 0x18CCF0u)) {
        return;
    }
    ctx->pc = 0x18CCF0u;
label_18ccf0:
    // 0x18ccf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ccf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccf4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18ccf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ccf8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18ccf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ccfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18ccfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cd00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18cd00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cd04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18cd04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cd08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD0Cu;
        // 0x18cd10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CD14u;
    // 0x18cd14: 0x0  nop
    ctx->pc = 0x18cd14u;
    // NOP
    ctx->pc = 0x18cd18u;
}
