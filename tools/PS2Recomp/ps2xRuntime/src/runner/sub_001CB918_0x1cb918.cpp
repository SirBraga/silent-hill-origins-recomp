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

// Function: sub_001CB918
// Address: 0x1cb918 - 0x1cbca0
void sub_001CB918_0x1cb918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB918_0x1cb918");
#endif

    switch (ctx->pc) {
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbd8u: goto label_1cbbd8;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbc3cu: goto label_1cbc3c;
        case 0x1cbc48u: goto label_1cbc48;
        case 0x1cbc5cu: goto label_1cbc5c;
        default: break;
    }

    ctx->pc = 0x1cb918u;

    // 0x1cb918: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1cb91c: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x1cb91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x1cb920: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x1cb920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x1cb924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cb924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb928: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1cb928u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb92c: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x1cb92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x1cb930: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x1cb930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x1cb934: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x1cb934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x1cb938: 0xe7b601f0  swc1        $f22, 0x1F0($sp)
    ctx->pc = 0x1cb938u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1cb93c: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x1cb93cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x1cb940: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x1cb940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x1cb944: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x1cb944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x1cb948: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x1cb948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x1cb94c: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x1cb94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
    // 0x1cb950: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1cb950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x1cb954: 0xe7b701f8  swc1        $f23, 0x1F8($sp)
    ctx->pc = 0x1cb954u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x1cb958: 0xe7b501e8  swc1        $f21, 0x1E8($sp)
    ctx->pc = 0x1cb958u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x1cb95c: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1CB95Cu;
    SET_GPR_U32(ctx, 31, 0x1CB964u);
    ctx->pc = 0x1CB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB95Cu;
    // 0x1cb960: 0xe7b401e0  swc1        $f20, 0x1E0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1CB95Cu, 0x1CB964u)) {
        return;
    }
    ctx->pc = 0x1CB964u;
label_1cb964:
    // 0x1cb964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb968: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb96c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1cb96cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb970: 0xc6c00080  lwc1        $f0, 0x80($s6)
    ctx->pc = 0x1cb970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb974: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x1cb974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x1cb978: 0x0  nop
    ctx->pc = 0x1cb978u;
    // NOP
    // 0x1cb97c: 0x0  nop
    ctx->pc = 0x1cb97cu;
    // NOP
    // 0x1cb980: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1cb980u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1cb984: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CB984u;
    {
        const bool branch_taken_0x1cb984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB984u;
        // 0x1cb988: 0x27b50110  addiu       $s5, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb984) {
            ctx->pc = 0x1CBA28u;
            goto label_1cba28;
        }
    }
    ctx->pc = 0x1CB98Cu;
    // 0x1cb98c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cb990: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1cb990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1cb994: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1cb994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1cb998: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x1cb998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb99c: 0x247e0fc8  addiu       $fp, $v1, 0xFC8
    ctx->pc = 0x1cb99cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x1cb9a0: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1cb9a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x1cb9a4: 0x2450fdf0  addiu       $s0, $v0, -0x210
    ctx->pc = 0x1cb9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x1cb9a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cb9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9ac: 0x0  nop
    ctx->pc = 0x1cb9acu;
    // NOP
label_1cb9b0:
    // 0x1cb9b0: 0x8e420288  lw          $v0, 0x288($s2)
    ctx->pc = 0x1cb9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
    // 0x1cb9b4: 0x56220019  bnel        $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CB9B4u;
    {
        const bool branch_taken_0x1cb9b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb9b4) {
            ctx->pc = 0x1CB9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB9B4u;
            // 0x1cb9b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA1Cu;
            goto label_1cba1c;
        }
    }
    ctx->pc = 0x1CB9BCu;
    // 0x1cb9bc: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CB9BCu;
    SET_GPR_U32(ctx, 31, 0x1CB9C4u);
    ctx->pc = 0x1CB9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9BCu;
    // 0x1cb9c0: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CB9BCu, 0x1CB9C4u)) {
        return;
    }
    ctx->pc = 0x1CB9C4u;
label_1cb9c4:
    // 0x1cb9c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB9CCu;
    SET_GPR_U32(ctx, 31, 0x1CB9D4u);
    ctx->pc = 0x1CB9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9CCu;
    // 0x1cb9d0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB9CCu, 0x1CB9D4u)) {
        return;
    }
    ctx->pc = 0x1CB9D4u;
label_1cb9d4:
    // 0x1cb9d4: 0xc7d00018  lwc1        $f16, 0x18($fp)
    ctx->pc = 0x1cb9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cb9d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9dc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1cb9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb9e0: 0x26e5fde8  addiu       $a1, $s7, -0x218
    ctx->pc = 0x1cb9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966760));
    // 0x1cb9e4: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1cb9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb9e8: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1cb9e8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1cb9ec: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1cb9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cb9f0: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1cb9f0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1cb9f4: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x1cb9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cb9f8: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1cb9f8u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x1cb9fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cb9fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cba00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cba04: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CBA04u;
    SET_GPR_U32(ctx, 31, 0x1CBA0Cu);
    ctx->pc = 0x1CBA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA04u;
    // 0x1cba08: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CBA04u, 0x1CBA0Cu)) {
        return;
    }
    ctx->pc = 0x1CBA0Cu;
label_1cba0c:
    // 0x1cba0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba10: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CBA10u;
    SET_GPR_U32(ctx, 31, 0x1CBA18u);
    ctx->pc = 0x1CBA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA10u;
    // 0x1cba14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CBA10u, 0x1CBA18u)) {
        return;
    }
    ctx->pc = 0x1CBA18u;
label_1cba18:
    // 0x1cba18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cba18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cba1c:
    // 0x1cba1c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1cba1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cba20: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1CBA20u;
    {
        const bool branch_taken_0x1cba20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA20u;
        // 0x1cba24: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba20) {
            ctx->pc = 0x1CB9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb9b0;
        }
    }
    ctx->pc = 0x1CBA28u;
label_1cba28:
    // 0x1cba28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cba2c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1cba2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1cba30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cba34: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1cba34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1cba38: 0x2451fdf0  addiu       $s1, $v0, -0x210
    ctx->pc = 0x1cba38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x1cba3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cba3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba40: 0x265e02d8  addiu       $fp, $s2, 0x2D8
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 728));
    // 0x1cba44: 0x26530368  addiu       $s3, $s2, 0x368
    ctx->pc = 0x1cba44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 872));
label_1cba48:
    // 0x1cba48: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CBA48u;
    SET_GPR_U32(ctx, 31, 0x1CBA50u);
    ctx->pc = 0x1CBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA48u;
    // 0x1cba4c: 0x8e4402bc  lw          $a0, 0x2BC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CBA48u, 0x1CBA50u)) {
        return;
    }
    ctx->pc = 0x1CBA50u;
label_1cba50:
    // 0x1cba50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cba54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba58: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CBA58u;
    SET_GPR_U32(ctx, 31, 0x1CBA60u);
    ctx->pc = 0x1CBA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA58u;
    // 0x1cba5c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CBA58u, 0x1CBA60u)) {
        return;
    }
    ctx->pc = 0x1CBA60u;
label_1cba60:
    // 0x1cba60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba68: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CBA68u;
    SET_GPR_U32(ctx, 31, 0x1CBA70u);
    ctx->pc = 0x1CBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA68u;
    // 0x1cba6c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CBA68u, 0x1CBA70u)) {
        return;
    }
    ctx->pc = 0x1CBA70u;
label_1cba70:
    // 0x1cba70: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1cba74: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1cba74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1cba78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cba78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cba7c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1cba7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cba80: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1cba84: 0x2484fe10  addiu       $a0, $a0, -0x1F0
    ctx->pc = 0x1cba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966800));
    // 0x1cba88: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cba8c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1cba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cba90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cba94: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1cba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cba98: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x1cba98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cba9c: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x1cba9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1cbaa0: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1CBAA0u;
    SET_GPR_U32(ctx, 31, 0x1CBAA8u);
    ctx->pc = 0x1CBAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBAA0u;
    // 0x1cbaa4: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1CBAA0u, 0x1CBAA8u)) {
        return;
    }
    ctx->pc = 0x1CBAA8u;
label_1cbaa8:
    // 0x1cbaa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBAA8u;
    {
        const bool branch_taken_0x1cbaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbaa8) {
            ctx->pc = 0x1CBAB8u;
            goto label_1cbab8;
        }
    }
    ctx->pc = 0x1CBAB0u;
    // 0x1cbab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBAB0u;
    {
        const bool branch_taken_0x1cbab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAB0u;
        // 0x1cbab4: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbab0) {
            ctx->pc = 0x1CBAC8u;
            goto label_1cbac8;
        }
    }
    ctx->pc = 0x1CBAB8u;
label_1cbab8:
    // 0x1cbab8: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x1cbab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x1cbabc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbac0: 0x0  nop
    ctx->pc = 0x1cbac0u;
    // NOP
    // 0x1cbac4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1cbac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1cbac8:
    // 0x1cbac8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1cbac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1cbacc: 0x6ba50117  ldl         $a1, 0x117($sp)
    ctx->pc = 0x1cbaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1cbad0: 0x6fa50110  ldr         $a1, 0x110($sp)
    ctx->pc = 0x1cbad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1cbad4: 0xb3a50137  sdl         $a1, 0x137($sp)
    ctx->pc = 0x1cbad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cbad8: 0xb7a50130  sdr         $a1, 0x130($sp)
    ctx->pc = 0x1cbad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cbadc: 0x3c014238  lui         $at, 0x4238
    ctx->pc = 0x1cbadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16952 << 16));
    // 0x1cbae0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cbae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cbae4: 0x9fa40134  lwu         $a0, 0x134($sp)
    ctx->pc = 0x1cbae4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1cbae8: 0x9fa20130  lwu         $v0, 0x130($sp)
    ctx->pc = 0x1cbae8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cbaec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cbaecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1cbaf0: 0xc06cdf0  jal         func_1B37C0
    ctx->pc = 0x1CBAF0u;
    SET_GPR_U32(ctx, 31, 0x1CBAF8u);
    ctx->pc = 0x1CBAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBAF0u;
    // 0x1cbaf4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1CBAF0u, 0x1CBAF8u)) {
        return;
    }
    ctx->pc = 0x1CBAF8u;
label_1cbaf8:
    // 0x1cbaf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1cbaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cbafc: 0x3c014240  lui         $at, 0x4240
    ctx->pc = 0x1cbafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16960 << 16));
    // 0x1cbb00: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1cbb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1cbb04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cbb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1cbb08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cbb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cbb0c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1cbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1cbb10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cbb14: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1cbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1cbb18: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1cbb18u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1cbb1c: 0x6ba50127  ldl         $a1, 0x127($sp)
    ctx->pc = 0x1cbb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1cbb20: 0x6fa50120  ldr         $a1, 0x120($sp)
    ctx->pc = 0x1cbb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1cbb24: 0xb3a50117  sdl         $a1, 0x117($sp)
    ctx->pc = 0x1cbb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cbb28: 0xb7a50110  sdr         $a1, 0x110($sp)
    ctx->pc = 0x1cbb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cbb2c: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1cbb2cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1cbb30: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x1cbb34: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1cbb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1cbb38: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1cbb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cbb3c: 0x24a50fc8  addiu       $a1, $a1, 0xFC8
    ctx->pc = 0x1cbb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
    // 0x1cbb40: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x1cbb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cbb44: 0xc4b00018  lwc1        $f16, 0x18($a1)
    ctx->pc = 0x1cbb44u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cbb48: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1cbb48u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x1cbb4c: 0xc7ad0114  lwc1        $f13, 0x114($sp)
    ctx->pc = 0x1cbb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cbb50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb54: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x1cbb54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cbb58: 0x26e5fde8  addiu       $a1, $s7, -0x218
    ctx->pc = 0x1cbb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966760));
    // 0x1cbb5c: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CBB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB64u);
    ctx->pc = 0x1CBB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB5Cu;
    // 0x1cbb60: 0xe7b70008  swc1        $f23, 0x8($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CBB5Cu, 0x1CBB64u)) {
        return;
    }
    ctx->pc = 0x1CBB64u;
label_1cbb64:
    // 0x1cbb64: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cbb68: 0xc7ae0014  lwc1        $f14, 0x14($sp)
    ctx->pc = 0x1cbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cbb6c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1cbb6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cbb70: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1cbb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1cbb74: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1cbb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1cbb78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cbb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbb7c: 0x46147380  add.s       $f14, $f14, $f20
    ctx->pc = 0x1cbb7cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
    // 0x1cbb80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cbb84: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1cbb84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1cbb88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbb8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cbb90: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cbb94: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1cbb98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cbb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbb9c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1cbb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cbba0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1cbba0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1cbba4: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x1CBBA4u;
    SET_GPR_U32(ctx, 31, 0x1CBBACu);
    ctx->pc = 0x1CBBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBA4u;
    // 0x1cbba8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x1CBBA4u, 0x1CBBACu)) {
        return;
    }
    ctx->pc = 0x1CBBACu;
label_1cbbac:
    // 0x1cbbac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cbbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cbbb0: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CBBB0u;
    SET_GPR_U32(ctx, 31, 0x1CBBB8u);
    ctx->pc = 0x1CBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBB0u;
    // 0x1cbbb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CBBB0u, 0x1CBBB8u)) {
        return;
    }
    ctx->pc = 0x1CBBB8u;
label_1cbbb8:
    // 0x1cbbb8: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1cbbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cbbbc: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x1CBBBCu;
    {
        const bool branch_taken_0x1cbbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbbc) {
            ctx->pc = 0x1CBA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cba48;
        }
    }
    ctx->pc = 0x1CBBC4u;
    // 0x1cbbc4: 0x8e420294  lw          $v0, 0x294($s2)
    ctx->pc = 0x1cbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 660)));
    // 0x1cbbc8: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CBBC8u;
    {
        const bool branch_taken_0x1cbbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbc8) {
            ctx->pc = 0x1CBBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBBC8u;
            // 0x1cbbcc: 0x8e440260  lw          $a0, 0x260($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBC4Cu;
            goto label_1cbc4c;
        }
    }
    ctx->pc = 0x1CBBD0u;
    // 0x1cbbd0: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CBBD0u;
    SET_GPR_U32(ctx, 31, 0x1CBBD8u);
    ctx->pc = 0x1CBBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBD0u;
    // 0x1cbbd4: 0x8e4402c0  lw          $a0, 0x2C0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CBBD0u, 0x1CBBD8u)) {
        return;
    }
    ctx->pc = 0x1CBBD8u;
label_1cbbd8:
    // 0x1cbbd8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbbdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbe0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CBBE0u;
    SET_GPR_U32(ctx, 31, 0x1CBBE8u);
    ctx->pc = 0x1CBBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBE0u;
    // 0x1cbbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CBBE0u, 0x1CBBE8u)) {
        return;
    }
    ctx->pc = 0x1CBBE8u;
label_1cbbe8:
    // 0x1cbbe8: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x1cbbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x1cbbec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cbbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cbbf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbbf4: 0x24c20fc8  addiu       $v0, $a2, 0xFC8
    ctx->pc = 0x1cbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
    // 0x1cbbf8: 0x3c01430d  lui         $at, 0x430D
    ctx->pc = 0x1cbbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17165 << 16));
    // 0x1cbbfc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1cbbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cbc00: 0xc4500018  lwc1        $f16, 0x18($v0)
    ctx->pc = 0x1cbc00u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cbc04: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1cbc04u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1cbc08: 0x3c014412  lui         $at, 0x4412
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17426 << 16));
    // 0x1cbc0c: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x1cbc0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x1cbc10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cbc10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cbc14: 0x26e5fde8  addiu       $a1, $s7, -0x218
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966760));
    // 0x1cbc18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc1c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cbc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cbc20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1cbc20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1cbc24: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1cbc24u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1cbc28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cbc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cbc2c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1cbc2cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1cbc30: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1cbc30u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1cbc34: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CBC34u;
    SET_GPR_U32(ctx, 31, 0x1CBC3Cu);
    ctx->pc = 0x1CBC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC34u;
    // 0x1cbc38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CBC34u, 0x1CBC3Cu)) {
        return;
    }
    ctx->pc = 0x1CBC3Cu;
label_1cbc3c:
    // 0x1cbc3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc40: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CBC40u;
    SET_GPR_U32(ctx, 31, 0x1CBC48u);
    ctx->pc = 0x1CBC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC40u;
    // 0x1cbc44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CBC40u, 0x1CBC48u)) {
        return;
    }
    ctx->pc = 0x1CBC48u;
label_1cbc48:
    // 0x1cbc48: 0x8e440260  lw          $a0, 0x260($s2)
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1cbc4c:
    // 0x1cbc4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBC4Cu;
    {
        const bool branch_taken_0x1cbc4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC4Cu;
        // 0x1cbc50: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc4c) {
            ctx->pc = 0x1CBC60u;
            goto label_1cbc60;
        }
    }
    ctx->pc = 0x1CBC54u;
    // 0x1cbc54: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1CBC54u;
    SET_GPR_U32(ctx, 31, 0x1CBC5Cu);
    ctx->pc = 0x1CBC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC54u;
    // 0x1cbc58: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1CBC54u, 0x1CBC5Cu)) {
        return;
    }
    ctx->pc = 0x1CBC5Cu;
label_1cbc5c:
    // 0x1cbc5c: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x1cbc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1cbc60:
    // 0x1cbc60: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x1cbc60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1cbc64: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x1cbc64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1cbc68: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x1cbc68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1cbc6c: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x1cbc6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1cbc70: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x1cbc70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cbc74: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x1cbc74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1cbc78: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x1cbc78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cbc7c: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x1cbc7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cbc80: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1cbc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cbc84: 0xc7b701f8  lwc1        $f23, 0x1F8($sp)
    ctx->pc = 0x1cbc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1cbc88: 0xc7b601f0  lwc1        $f22, 0x1F0($sp)
    ctx->pc = 0x1cbc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cbc8c: 0xc7b501e8  lwc1        $f21, 0x1E8($sp)
    ctx->pc = 0x1cbc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cbc90: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x1cbc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cbc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC94u;
        // 0x1cbc98: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBC9Cu;
    // 0x1cbc9c: 0x0  nop
    ctx->pc = 0x1cbc9cu;
    // NOP
    ctx->pc = 0x1cbca0u;
}
