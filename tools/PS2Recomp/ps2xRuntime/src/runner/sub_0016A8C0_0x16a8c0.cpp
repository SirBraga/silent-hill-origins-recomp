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

// Function: sub_0016A8C0
// Address: 0x16a8c0 - 0x16ab30
void sub_0016A8C0_0x16a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A8C0_0x16a8c0");
#endif

    switch (ctx->pc) {
        case 0x16a900u: goto label_16a900;
        case 0x16a90cu: goto label_16a90c;
        case 0x16a918u: goto label_16a918;
        case 0x16a924u: goto label_16a924;
        case 0x16a99cu: goto label_16a99c;
        case 0x16a9a8u: goto label_16a9a8;
        case 0x16a9b4u: goto label_16a9b4;
        case 0x16a9d4u: goto label_16a9d4;
        case 0x16a9e0u: goto label_16a9e0;
        case 0x16a9ecu: goto label_16a9ec;
        case 0x16aa14u: goto label_16aa14;
        case 0x16aa20u: goto label_16aa20;
        case 0x16aa2cu: goto label_16aa2c;
        case 0x16aa5cu: goto label_16aa5c;
        case 0x16aa90u: goto label_16aa90;
        case 0x16aaa8u: goto label_16aaa8;
        case 0x16aae8u: goto label_16aae8;
        case 0x16aafcu: goto label_16aafc;
        case 0x16ab08u: goto label_16ab08;
        default: break;
    }

    ctx->pc = 0x16a8c0u;

    // 0x16a8c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16a8c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16a8c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16a8cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16a8d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16a8d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a8dc: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x16a8dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x16a8e0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x16a8e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x16a8e4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x16a8e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x16a8e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a8ec: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x16a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16a8f0: 0x54a20041  bnel        $a1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x16A8F0u;
    {
        const bool branch_taken_0x16a8f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a8f0) {
            ctx->pc = 0x16A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A8F0u;
            // 0x16a8f4: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A9F8u;
            goto label_16a9f8;
        }
    }
    ctx->pc = 0x16A8F8u;
    // 0x16a8f8: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x16A8F8u;
    SET_GPR_U32(ctx, 31, 0x16A900u);
    ctx->pc = 0x16A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8F8u;
    // 0x16a8fc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x16A8F8u, 0x16A900u)) {
        return;
    }
    ctx->pc = 0x16A900u;
label_16a900:
    // 0x16a900: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16a900u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x16a904: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x16A904u;
    SET_GPR_U32(ctx, 31, 0x16A90Cu);
    ctx->pc = 0x16A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A904u;
    // 0x16a908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x16A904u, 0x16A90Cu)) {
        return;
    }
    ctx->pc = 0x16A90Cu;
label_16a90c:
    // 0x16a90c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16a90cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x16a910: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x16A910u;
    SET_GPR_U32(ctx, 31, 0x16A918u);
    ctx->pc = 0x16A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A910u;
    // 0x16a914: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x16A910u, 0x16A918u)) {
        return;
    }
    ctx->pc = 0x16A918u;
label_16a918:
    // 0x16a918: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16a918u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x16a91c: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x16A91Cu;
    SET_GPR_U32(ctx, 31, 0x16A924u);
    ctx->pc = 0x16A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A91Cu;
    // 0x16a920: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x16A91Cu, 0x16A924u)) {
        return;
    }
    ctx->pc = 0x16A924u;
label_16a924:
    // 0x16a924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16a928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16a928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a92c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x16a92cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x16a930: 0x46160836  c.le.s      $f1, $f22
    ctx->pc = 0x16a930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a934: 0x0  nop
    ctx->pc = 0x16a934u;
    // NOP
    // 0x16a938: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x16A938u;
    {
        const bool branch_taken_0x16a938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A938u;
        // 0x16a93c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a938) {
            ctx->pc = 0x16A9C0u;
            goto label_16a9c0;
        }
    }
    ctx->pc = 0x16A940u;
    // 0x16a940: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x16a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x16a944: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A944u;
    {
        const bool branch_taken_0x16a944 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A944u;
        // 0x16a948: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a944) {
            ctx->pc = 0x16A960u;
            goto label_16a960;
        }
    }
    ctx->pc = 0x16A94Cu;
    // 0x16a94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a950: 0x0  nop
    ctx->pc = 0x16a950u;
    // NOP
    // 0x16a954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16A958u;
    {
        const bool branch_taken_0x16a958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a958) {
            ctx->pc = 0x16A978u;
            goto label_16a978;
        }
    }
    ctx->pc = 0x16A960u;
label_16a960:
    // 0x16a960: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16a964: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16a964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16a968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a96c: 0x0  nop
    ctx->pc = 0x16a96cu;
    // NOP
    // 0x16a970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a974: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16a974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16a978:
    // 0x16a978: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x16a978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a97c: 0x0  nop
    ctx->pc = 0x16a97cu;
    // NOP
    // 0x16a980: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x16A980u;
    {
        const bool branch_taken_0x16a980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a980) {
            ctx->pc = 0x16A9C0u;
            goto label_16a9c0;
        }
    }
    ctx->pc = 0x16A988u;
    // 0x16a988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16a988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16a98c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16a98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a990: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16a990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16a994: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16A994u;
    SET_GPR_U32(ctx, 31, 0x16A99Cu);
    ctx->pc = 0x16A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A994u;
    // 0x16a998: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16A994u, 0x16A99Cu)) {
        return;
    }
    ctx->pc = 0x16A99Cu;
label_16a99c:
    // 0x16a99c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16a9a0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16A9A0u;
    SET_GPR_U32(ctx, 31, 0x16A9A8u);
    ctx->pc = 0x16A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9A0u;
    // 0x16a9a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16A9A0u, 0x16A9A8u)) {
        return;
    }
    ctx->pc = 0x16A9A8u;
label_16a9a8:
    // 0x16a9a8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x16a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16a9ac: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16A9ACu;
    SET_GPR_U32(ctx, 31, 0x16A9B4u);
    ctx->pc = 0x16A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9ACu;
    // 0x16a9b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16A9ACu, 0x16A9B4u)) {
        return;
    }
    ctx->pc = 0x16A9B4u;
label_16a9b4:
    // 0x16a9b4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16a9b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16A9B8u;
    {
        const bool branch_taken_0x16a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9B8u;
        // 0x16a9bc: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9b8) {
            ctx->pc = 0x16AA34u;
            goto label_16aa34;
        }
    }
    ctx->pc = 0x16A9C0u;
label_16a9c0:
    // 0x16a9c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16a9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16a9c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16a9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a9c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16a9c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16a9cc: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16A9CCu;
    SET_GPR_U32(ctx, 31, 0x16A9D4u);
    ctx->pc = 0x16A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9CCu;
    // 0x16a9d0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16A9CCu, 0x16A9D4u)) {
        return;
    }
    ctx->pc = 0x16A9D4u;
label_16a9d4:
    // 0x16a9d4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x16a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16a9d8: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16A9D8u;
    SET_GPR_U32(ctx, 31, 0x16A9E0u);
    ctx->pc = 0x16A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9D8u;
    // 0x16a9dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16A9D8u, 0x16A9E0u)) {
        return;
    }
    ctx->pc = 0x16A9E0u;
label_16a9e0:
    // 0x16a9e0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x16a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16a9e4: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16A9E4u;
    SET_GPR_U32(ctx, 31, 0x16A9ECu);
    ctx->pc = 0x16A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9E4u;
    // 0x16a9e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16A9E4u, 0x16A9ECu)) {
        return;
    }
    ctx->pc = 0x16A9ECu;
label_16a9ec:
    // 0x16a9ec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16a9f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16A9F0u;
    {
        const bool branch_taken_0x16a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9F0u;
        // 0x16a9f4: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9f0) {
            ctx->pc = 0x16AA34u;
            goto label_16aa34;
        }
    }
    ctx->pc = 0x16A9F8u;
label_16a9f8:
    // 0x16a9f8: 0x54a2001a  bnel        $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A9F8u;
    {
        const bool branch_taken_0x16a9f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a9f8) {
            ctx->pc = 0x16A9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A9F8u;
            // 0x16a9fc: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AA64u;
            goto label_16aa64;
        }
    }
    ctx->pc = 0x16AA00u;
    // 0x16aa00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16aa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16aa04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16aa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16aa08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16aa08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16aa0c: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16AA0Cu;
    SET_GPR_U32(ctx, 31, 0x16AA14u);
    ctx->pc = 0x16AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA0Cu;
    // 0x16aa10: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16AA0Cu, 0x16AA14u)) {
        return;
    }
    ctx->pc = 0x16AA14u;
label_16aa14:
    // 0x16aa14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16aa18: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16AA18u;
    SET_GPR_U32(ctx, 31, 0x16AA20u);
    ctx->pc = 0x16AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA18u;
    // 0x16aa1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16AA18u, 0x16AA20u)) {
        return;
    }
    ctx->pc = 0x16AA20u;
label_16aa20:
    // 0x16aa20: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x16aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16aa24: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16AA24u;
    SET_GPR_U32(ctx, 31, 0x16AA2Cu);
    ctx->pc = 0x16AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA24u;
    // 0x16aa28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16AA24u, 0x16AA2Cu)) {
        return;
    }
    ctx->pc = 0x16AA2Cu;
label_16aa2c:
    // 0x16aa2c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16aa30: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x16aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_16aa34:
    // 0x16aa34: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x16aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x16aa38: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x16AA38u;
    {
        const bool branch_taken_0x16aa38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA38u;
        // 0x16aa3c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa38) {
            ctx->pc = 0x16AB0Cu;
            goto label_16ab0c;
        }
    }
    ctx->pc = 0x16AA40u;
    // 0x16aa40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16aa44: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x16AA44u;
    {
        const bool branch_taken_0x16aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA44u;
        // 0x16aa48: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa44) {
            ctx->pc = 0x16AB10u;
            goto label_16ab10;
        }
    }
    ctx->pc = 0x16AA4Cu;
    // 0x16aa4c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16aa50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa54: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16AA54u;
    SET_GPR_U32(ctx, 31, 0x16AA5Cu);
    ctx->pc = 0x16AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA54u;
    // 0x16aa58: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16AA54u, 0x16AA5Cu)) {
        return;
    }
    ctx->pc = 0x16AA5Cu;
label_16aa5c:
    // 0x16aa5c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16AA5Cu;
    {
        const bool branch_taken_0x16aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA5Cu;
        // 0x16aa60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa5c) {
            ctx->pc = 0x16AB0Cu;
            goto label_16ab0c;
        }
    }
    ctx->pc = 0x16AA64u;
label_16aa64:
    // 0x16aa64: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16AA64u;
    {
        const bool branch_taken_0x16aa64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA64u;
        // 0x16aa68: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa64) {
            ctx->pc = 0x16AAB0u;
            goto label_16aab0;
        }
    }
    ctx->pc = 0x16AA6Cu;
    // 0x16aa6c: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x16aa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16aa70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aa74: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16aa74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16aa78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa7c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16aa80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16aa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa84: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x16aa84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16aa88: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16AA88u;
    SET_GPR_U32(ctx, 31, 0x16AA90u);
    ctx->pc = 0x16AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA88u;
    // 0x16aa8c: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16AA88u, 0x16AA90u)) {
        return;
    }
    ctx->pc = 0x16AA90u;
label_16aa90:
    // 0x16aa90: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16aa94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa98: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x16aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x16aa9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16aa9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaa0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16AAA0u;
    SET_GPR_U32(ctx, 31, 0x16AAA8u);
    ctx->pc = 0x16AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAA0u;
    // 0x16aaa4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16AAA0u, 0x16AAA8u)) {
        return;
    }
    ctx->pc = 0x16AAA8u;
label_16aaa8:
    // 0x16aaa8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16AAA8u;
    {
        const bool branch_taken_0x16aaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAA8u;
        // 0x16aaac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aaa8) {
            ctx->pc = 0x16AB0Cu;
            goto label_16ab0c;
        }
    }
    ctx->pc = 0x16AAB0u;
label_16aab0:
    // 0x16aab0: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x16aab0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x16aab4: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x16aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
    // 0x16aab8: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AAB8u;
    {
        const bool branch_taken_0x16aab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAB8u;
        // 0x16aabc: 0x24738880  addiu       $s3, $v1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aab8) {
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16AAC0u;
    // 0x16aac0: 0x8e428898  lw          $v0, -0x7768($s2)
    ctx->pc = 0x16aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936728)));
    // 0x16aac4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16AAC4u;
    {
        const bool branch_taken_0x16aac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAC4u;
        // 0x16aac8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aac4) {
            ctx->pc = 0x16AB0Cu;
            goto label_16ab0c;
        }
    }
    ctx->pc = 0x16AACCu;
label_16aacc:
    // 0x16aacc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16aad0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16aad4: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x16aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x16aad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16aad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aadc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16aadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aae0: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x16AAE0u;
    SET_GPR_U32(ctx, 31, 0x16AAE8u);
    ctx->pc = 0x16AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAE0u;
    // 0x16aae4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x16AAE0u, 0x16AAE8u)) {
        return;
    }
    ctx->pc = 0x16AAE8u;
label_16aae8:
    // 0x16aae8: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x16aae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16aaec: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x16aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x16aaf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16aaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaf4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16AAF4u;
    SET_GPR_U32(ctx, 31, 0x16AAFCu);
    ctx->pc = 0x16AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAF4u;
    // 0x16aaf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16AAF4u, 0x16AAFCu)) {
        return;
    }
    ctx->pc = 0x16AAFCu;
label_16aafc:
    // 0x16aafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab00: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16AB00u;
    SET_GPR_U32(ctx, 31, 0x16AB08u);
    ctx->pc = 0x16AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB00u;
    // 0x16ab04: 0x26458898  addiu       $a1, $s2, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16AB00u, 0x16AB08u)) {
        return;
    }
    ctx->pc = 0x16AB08u;
label_16ab08:
    // 0x16ab08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16ab08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16ab0c:
    // 0x16ab0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16ab0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16ab10:
    // 0x16ab10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16ab10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ab14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16ab14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ab18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ab18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ab1c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x16ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16ab20: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x16ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16ab24: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x16ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ab28: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB28u;
        // 0x16ab2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB30u;
}
