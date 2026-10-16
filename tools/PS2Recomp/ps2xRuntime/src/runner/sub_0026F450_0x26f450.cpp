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

// Function: sub_0026F450
// Address: 0x26f450 - 0x26f7f0
void sub_0026F450_0x26f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F450_0x26f450");
#endif

    switch (ctx->pc) {
        case 0x26f610u: goto label_26f610;
        case 0x26f6f4u: goto label_26f6f4;
        default: break;
    }

    ctx->pc = 0x26f450u;

    // 0x26f450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26f454: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x26f454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26f458: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26f45c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26f464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26f468: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x26f468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f46c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x26f46cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26f470: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26f474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f478: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26f478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26f47c: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x26f47cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x26f480: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F480u;
    {
        const bool branch_taken_0x26f480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x26F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F480u;
        // 0x26f484: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f480) {
            ctx->pc = 0x26F4B0u;
            goto label_26f4b0;
        }
    }
    ctx->pc = 0x26F488u;
    // 0x26f488: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26f488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26f48c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26f48cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26f490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f494: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x26f494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x26f498: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x26f498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x26f49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f4a0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x26f4a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x26f4a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x26f4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26f4a8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x26F4A8u;
    {
        const bool branch_taken_0x26f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4A8u;
        // 0x26f4ac: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4a8) {
            ctx->pc = 0x26F7CCu;
            goto label_26f7cc;
        }
    }
    ctx->pc = 0x26F4B0u;
label_26f4b0:
    // 0x26f4b0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x26f4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26f4b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F4B4u;
    {
        const bool branch_taken_0x26f4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4B4u;
        // 0x26f4b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4b4) {
            ctx->pc = 0x26F4D4u;
            goto label_26f4d4;
        }
    }
    ctx->pc = 0x26F4BCu;
    // 0x26f4bc: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x26f4bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x26f4c0: 0x0  nop
    ctx->pc = 0x26f4c0u;
    // NOP
    // 0x26f4c4: 0x0  nop
    ctx->pc = 0x26f4c4u;
    // NOP
    // 0x26f4c8: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x26f4c8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[0]);
    // 0x26f4cc: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x26F4CCu;
    {
        const bool branch_taken_0x26f4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4CCu;
        // 0x26f4d0: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4cc) {
            ctx->pc = 0x26F7D4u;
            goto label_26f7d4;
        }
    }
    ctx->pc = 0x26F4D4u;
label_26f4d4:
    // 0x26f4d4: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x26f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x26f4d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f4dc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26f4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26f4e0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26F4E0u;
    {
        const bool branch_taken_0x26f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4E0u;
        // 0x26f4e4: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4e0) {
            ctx->pc = 0x26F608u;
            goto label_26f608;
        }
    }
    ctx->pc = 0x26F4E8u;
    // 0x26f4e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f4ec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26f4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26f4f0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x26F4F0u;
    {
        const bool branch_taken_0x26f4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f4f0) {
            ctx->pc = 0x26F4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F4F0u;
            // 0x26f4f4: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F524u;
            goto label_26f524;
        }
    }
    ctx->pc = 0x26F4F8u;
    // 0x26f4f8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x26f4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x26f4fc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x26f4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x26f500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f508: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f50c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x26f50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26f510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f514: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26F514u;
    {
        const bool branch_taken_0x26f514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f514) {
            ctx->pc = 0x26F524u;
            goto label_26f524;
        }
    }
    ctx->pc = 0x26F51Cu;
    // 0x26f51c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x26F51Cu;
    {
        const bool branch_taken_0x26f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F51Cu;
        // 0x26f520: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f51c) {
            ctx->pc = 0x26F7CCu;
            goto label_26f7cc;
        }
    }
    ctx->pc = 0x26F524u;
label_26f524:
    // 0x26f524: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x26f524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x26f528: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x26f528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x26f52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f530: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x26f534: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x26f534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x26f538: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f53c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f540: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x26f544: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x26f544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x26f548: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26f548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26f54c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x26f550: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x26f550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x26f554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f558: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x26f558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x26f55c: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x26f55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x26f560: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f564: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26f564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26f568: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x26f568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x26f56c: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x26f56cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x26f570: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26f570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26f574: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f578: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x26f578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x26f57c: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x26f57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x26f580: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f584: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x26f584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x26f588: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x26f588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x26f58c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x26f58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26f590: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f594: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x26f594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x26f598: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x26f598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x26f59c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26f5a0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26f5a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26f5a4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x26f5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x26f5a8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26f5a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x26f5ac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x26f5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x26f5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f5b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f5b8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x26f5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x26f5bc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f5c0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f5c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26f5c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26f5c8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x26f5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x26f5cc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f5ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f5d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f5d4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x26f5d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26f5d8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x26f5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x26f5dc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f5dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f5e0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f5e4: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x26f5e4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26f5e8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x26f5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x26f5ec: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x26f5ecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f5f0: 0x0  nop
    ctx->pc = 0x26f5f0u;
    // NOP
    // 0x26f5f4: 0x0  nop
    ctx->pc = 0x26f5f4u;
    // NOP
    // 0x26f5f8: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x26f5f8u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[22]);
    // 0x26f5fc: 0x46086002  mul.s       $f0, $f12, $f8
    ctx->pc = 0x26f5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x26f600: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x26F600u;
    {
        const bool branch_taken_0x26f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F600u;
        // 0x26f604: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f600) {
            ctx->pc = 0x26F7CCu;
            goto label_26f7cc;
        }
    }
    ctx->pc = 0x26F608u;
label_26f608:
    // 0x26f608: 0xc09b122  jal         func_26C488
    ctx->pc = 0x26F608u;
    SET_GPR_U32(ctx, 31, 0x26F610u);
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x26F608u, 0x26F610u)) {
        return;
    }
    ctx->pc = 0x26F610u;
label_26f610:
    // 0x26f610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f614: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x26f614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x26f618: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26f618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26f61c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f620: 0x46005201  sub.s       $f8, $f10, $f0
    ctx->pc = 0x26f620u;
    ctx->f[8] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x26f624: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x26f624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x26f628: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x26f628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x26f62c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26f630: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x26f634: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x26f634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x26f638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f63c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x26f640: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x26f640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x26f644: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x26f644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26f648: 0x46024502  mul.s       $f20, $f8, $f2
    ctx->pc = 0x26f648u;
    ctx->f[20] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x26f64c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x26f64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x26f650: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x26f650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x26f654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f658: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x26f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x26f65c: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x26f65cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x26f660: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f664: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x26f664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x26f668: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x26f668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x26f66c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x26f66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x26f670: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f674: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x26f674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x26f678: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x26f678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x26f67c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f680: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f684: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x26f684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x26f688: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x26f688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x26f68c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x26f68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x26f690: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x26f690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x26f694: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x26f694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x26f698: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26f698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26f69c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26f69cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26f6a0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x26f6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x26f6a4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x26f6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x26f6a8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26f6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x26f6ac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26f6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26f6b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26f6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26f6b4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f6b8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f6bc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x26f6bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x26f6c0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26f6c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26f6c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f6c8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f6cc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x26f6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x26f6d0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x26f6d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x26f6d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f6d8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x26f6d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26f6dc: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x26f6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x26f6e0: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x26f6e0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x26f6e4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x26f6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26f6e8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x26f6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x26f6ec: 0xc09c1d2  jal         func_270748
    ctx->pc = 0x26F6ECu;
    SET_GPR_U32(ctx, 31, 0x26F6F4u);
    ctx->pc = 0x26F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6ECu;
    // 0x26f6f0: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x270748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270748u, 0x26F6ECu, 0x26F6F4u)) {
        return;
    }
    ctx->pc = 0x26F6F4u;
label_26f6f4:
    // 0x26f6f4: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x26f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x26f6f8: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x26f6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x26f6fc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26f6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26f700: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26F700u;
    {
        const bool branch_taken_0x26f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F700u;
        // 0x26f704: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f700) {
            ctx->pc = 0x26F744u;
            goto label_26f744;
        }
    }
    ctx->pc = 0x26F708u;
    // 0x26f708: 0x0  nop
    ctx->pc = 0x26f708u;
    // NOP
    // 0x26f70c: 0x0  nop
    ctx->pc = 0x26f70cu;
    // NOP
    // 0x26f710: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x26f710u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[22]);
    // 0x26f714: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x26f714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x26f718: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x26f718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x26f71c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f720: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26f720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26f724: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26f724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26f728: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26f728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26f72c: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x26f72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x26f730: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x26f730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x26f734: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26f734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26f738: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26f738u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f73c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26F73Cu;
    {
        const bool branch_taken_0x26f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F73Cu;
        // 0x26f740: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f73c) {
            ctx->pc = 0x26F7C0u;
            goto label_26f7c0;
        }
    }
    ctx->pc = 0x26F744u;
label_26f744:
    // 0x26f744: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x26f744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26f748: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26f748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f74c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26f750: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x26f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x26f754: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26f754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f758: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x26f758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x26f75c: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x26f75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x26f760: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x26f760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x26f764: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x26f764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x26f768: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26f768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26f76c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x26f770: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f774: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26f774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26f778: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x26f778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x26f77c: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x26f77cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x26f780: 0x0  nop
    ctx->pc = 0x26f780u;
    // NOP
    // 0x26f784: 0x0  nop
    ctx->pc = 0x26f784u;
    // NOP
    // 0x26f788: 0x4616a943  div.s       $f5, $f21, $f22
    ctx->pc = 0x26f788u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[22]);
    // 0x26f78c: 0x46073840  add.s       $f1, $f7, $f7
    ctx->pc = 0x26f78cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x26f790: 0x0  nop
    ctx->pc = 0x26f790u;
    // NOP
    // 0x26f794: 0x0  nop
    ctx->pc = 0x26f794u;
    // NOP
    // 0x26f798: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x26f798u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x26f79c: 0x46084080  add.s       $f2, $f8, $f8
    ctx->pc = 0x26f79cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x26f7a0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x26f7a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x26f7a4: 0x46023581  sub.s       $f22, $f6, $f2
    ctx->pc = 0x26f7a4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x26f7a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26f7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26f7ac: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x26f7acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26f7b0: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->pc = 0x26f7b0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x26f7b4: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x26f7b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x26f7b8: 0x46003501  sub.s       $f20, $f6, $f0
    ctx->pc = 0x26f7b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x26f7bc: 0x0  nop
    ctx->pc = 0x26f7bcu;
    // NOP
label_26f7c0:
    // 0x26f7c0: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26F7C0u;
    {
        const bool branch_taken_0x26f7c0 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x26F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7C0u;
        // 0x26f7c4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7c0) {
            ctx->pc = 0x26F7CCu;
            goto label_26f7cc;
        }
    }
    ctx->pc = 0x26F7C8u;
    // 0x26f7c8: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x26f7c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_26f7cc:
    // 0x26f7cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26f7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f7d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26f7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26f7d4:
    // 0x26f7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f7d8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x26f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26f7dc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x26f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26f7e0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26f7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26F7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7E4u;
        // 0x26f7e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F7ECu;
    // 0x26f7ec: 0x0  nop
    ctx->pc = 0x26f7ecu;
    // NOP
    ctx->pc = 0x26f7f0u;
}
