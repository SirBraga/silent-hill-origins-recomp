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

// Function: sub_00251868
// Address: 0x251868 - 0x251e88
void sub_00251868_0x251868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251868_0x251868");
#endif

    ctx->pc = 0x251868u;

    // 0x251868: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x251868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25186c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x25186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251870: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x251870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251874: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x251874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x251878: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x251878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x25187c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x25187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251880: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x251880u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x251884: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x251884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251888: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x251888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25188c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x25188cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x251890: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x251890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x251894: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x251894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x251898: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x251898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x25189c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25189cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2518a0: 0x46020a80  add.s       $f10, $f1, $f2
    ctx->pc = 0x2518a0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2518a4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2518a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2518a8: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2518a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2518ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2518acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2518b0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2518b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2518b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2518b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2518b8: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2518b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2518bc: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x2518bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2518c0: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x2518c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2518c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2518c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2518c8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2518c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2518cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2518ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2518d0: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x2518d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2518d4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2518d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2518d8: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2518d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2518dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2518dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2518e0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2518e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2518e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2518e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2518e8: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2518e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2518ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2518ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2518f0: 0x0  nop
    ctx->pc = 0x2518f0u;
    // NOP
    // 0x2518f4: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x2518f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2518f8: 0x0  nop
    ctx->pc = 0x2518f8u;
    // NOP
    // 0x2518fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2518FCu;
    {
        const bool branch_taken_0x2518fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518FCu;
        // 0x251900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518fc) {
            ctx->pc = 0x251908u;
            goto label_251908;
        }
    }
    ctx->pc = 0x251904u;
    // 0x251904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251908:
    // 0x251908: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x251908u;
    {
        const bool branch_taken_0x251908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251908) {
            ctx->pc = 0x251948u;
            goto label_251948;
        }
    }
    ctx->pc = 0x251910u;
    // 0x251910: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x251910u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x251914: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x251914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251918: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x251918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25191c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25191cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x251920: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x251920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251924: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x251924u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x251928: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x251928u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25192c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x25192cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x251930: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x251930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x251934: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x251934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x251938: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x251938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25193c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25193cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x251940: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x251940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x251944: 0x0  nop
    ctx->pc = 0x251944u;
    // NOP
label_251948:
    // 0x251948: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x251948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x25194c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x25194cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x251950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25195c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x25195cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x251960: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x251960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251964: 0x0  nop
    ctx->pc = 0x251964u;
    // NOP
    // 0x251968: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x251968u;
    {
        const bool branch_taken_0x251968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251968u;
        // 0x25196c: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251968) {
            ctx->pc = 0x251974u;
            goto label_251974;
        }
    }
    ctx->pc = 0x251970u;
    // 0x251970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251974:
    // 0x251974: 0x5440012c  bnel        $v0, $zero, . + 4 + (0x12C << 2)
    ctx->pc = 0x251974u;
    {
        const bool branch_taken_0x251974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251974) {
            ctx->pc = 0x251978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251974u;
            // 0x251978: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x251E28u;
            goto label_251e28;
        }
    }
    ctx->pc = 0x25197Cu;
    // 0x25197c: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x25197cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251980: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x251980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251984: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x251984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x251988: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x251988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25198c: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x25198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x251990: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x251990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x251994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251998: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x251998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25199c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25199Cu;
    {
        const bool branch_taken_0x25199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25199c) {
            ctx->pc = 0x2519A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25199Cu;
            // 0x2519a0: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519C0u;
            goto label_2519c0;
        }
    }
    ctx->pc = 0x2519A4u;
    // 0x2519a4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2519a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2519a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2519a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2519ac: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2519acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2519b0: 0x5ce000d7  bgtzl       $a3, . + 4 + (0xD7 << 2)
    ctx->pc = 0x2519B0u;
    {
        const bool branch_taken_0x2519b0 = (GPR_S64(ctx, 7) > 0);
        if (branch_taken_0x2519b0) {
            ctx->pc = 0x2519B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519B0u;
            // 0x2519b4: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251D10u;
            goto label_251d10;
        }
    }
    ctx->pc = 0x2519B8u;
    // 0x2519b8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2519B8u;
    {
        const bool branch_taken_0x2519b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519B8u;
        // 0x2519bc: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519b8) {
            ctx->pc = 0x251D18u;
            goto label_251d18;
        }
    }
    ctx->pc = 0x2519C0u;
label_2519c0:
    // 0x2519c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2519c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2519c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2519c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2519c8: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2519C8u;
    {
        const bool branch_taken_0x2519c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2519CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519C8u;
        // 0x2519cc: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519c8) {
            ctx->pc = 0x251AE4u;
            goto label_251ae4;
        }
    }
    ctx->pc = 0x2519D0u;
    // 0x2519d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2519d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2519d4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2519D4u;
    {
        const bool branch_taken_0x2519d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519d4) {
            ctx->pc = 0x2519D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519D4u;
            // 0x2519d8: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519F0u;
            goto label_2519f0;
        }
    }
    ctx->pc = 0x2519DCu;
    // 0x2519dc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2519dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2519e0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2519e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2519e4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2519e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2519e8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2519E8u;
    {
        const bool branch_taken_0x2519e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519E8u;
        // 0x2519ec: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519e8) {
            ctx->pc = 0x251D18u;
            goto label_251d18;
        }
    }
    ctx->pc = 0x2519F0u;
label_2519f0:
    // 0x2519f0: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2519f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2519f4: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2519f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2519f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2519f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2519fc: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2519fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x251a00: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x251a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x251a04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251a08: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x251a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x251a0c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x251a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x251a10: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x251a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x251a14: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251a18: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x251a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x251a1c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x251a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x251a20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251a24: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x251a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x251a28: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x251a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x251a2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251a30: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251a30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251a34: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x251a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x251a38: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x251a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x251a3c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x251a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x251a40: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x251a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x251a44: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x251a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x251a48: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x251a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x251a4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251a50: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x251a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x251a54: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x251a54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x251a58: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x251a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x251a5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x251a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x251a60: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x251a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x251a64: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x251a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x251a68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251a6c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251a70: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x251a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x251a74: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x251a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x251a78: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x251a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x251a7c: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x251a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x251a80: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x251a80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x251a84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251a88: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251a8c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x251a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x251a90: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x251a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x251a94: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x251a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x251a98: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x251a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x251a9c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x251a9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x251aa0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251aa4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251aa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251aa8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x251aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x251aac: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x251aacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x251ab0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251ab4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251ab8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x251ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x251abc: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x251abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x251ac0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251ac4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x251ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x251ac8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251acc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x251accu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x251ad0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x251ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x251ad4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x251ad4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x251ad8: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x251ad8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x251adc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x251ADCu;
    {
        const bool branch_taken_0x251adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251ADCu;
        // 0x251ae0: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251adc) {
            ctx->pc = 0x251D10u;
            goto label_251d10;
        }
    }
    ctx->pc = 0x251AE4u;
label_251ae4:
    // 0x251ae4: 0x4e30044  bgezl       $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x251AE4u;
    {
        const bool branch_taken_0x251ae4 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x251ae4) {
            ctx->pc = 0x251AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251AE4u;
            // 0x251ae8: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BF8u;
            goto label_251bf8;
        }
    }
    ctx->pc = 0x251AECu;
    // 0x251aec: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x251aecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x251af0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x251af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x251af4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251af8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x251af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x251afc: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x251afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x251b00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251b04: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x251b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x251b08: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x251b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x251b0c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251b10: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x251b10u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x251b14: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x251b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x251b18: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x251b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x251b1c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x251b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x251b20: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x251b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x251b24: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x251b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x251b28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251b2c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x251b30: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x251b30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x251b34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251b38: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251b3c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x251b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x251b40: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x251b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x251b44: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x251b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x251b48: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251b4c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x251b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x251b50: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x251b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x251b54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251b58: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x251b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x251b5c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x251b5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x251b60: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x251b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x251b64: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x251b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x251b68: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x251b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x251b6c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x251b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x251b70: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x251b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x251b74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x251b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x251b78: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x251b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x251b7c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x251b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x251b80: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251b84: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251b88: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251b8c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x251b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x251b90: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x251b90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x251b94: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251b98: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251b9c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x251b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x251ba0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x251ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x251ba4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251ba8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251bac: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x251bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x251bb0: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x251bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x251bb4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251bb8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x251bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x251bbc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251bc0: 0x460b0344  c1          0xB0344
    ctx->pc = 0x251bc0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[11]);
    // 0x251bc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x251bc4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x251bc8: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x251bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x251bcc: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x251bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x251bd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251bd4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x251bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x251bd8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x251bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x251bdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251be0: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x251be0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x251be4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x251be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x251be8: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x251be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x251bec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x251becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x251bf0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x251BF0u;
    {
        const bool branch_taken_0x251bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BF0u;
        // 0x251bf4: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bf0) {
            ctx->pc = 0x251D10u;
            goto label_251d10;
        }
    }
    ctx->pc = 0x251BF8u;
label_251bf8:
    // 0x251bf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x251bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x251bfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251c00: 0x0  nop
    ctx->pc = 0x251c00u;
    // NOP
    // 0x251c04: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x251c04u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251c08: 0x460b0344  c1          0xB0344
    ctx->pc = 0x251c08u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[11]);
    // 0x251c0c: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x251c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251c10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x251c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x251c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x251c18: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x251c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x251c1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x251c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251c20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x251c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251c24: 0x0  nop
    ctx->pc = 0x251c24u;
    // NOP
    // 0x251c28: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x251c28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x251c2c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x251c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x251c30: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x251c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x251c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251c38: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x251c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x251c3c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x251c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x251c40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251c44: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251c48: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x251c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x251c4c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x251c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x251c50: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x251c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x251c54: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x251c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x251c58: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x251c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x251c5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251c60: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x251c60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x251c64: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x251c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x251c68: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x251c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x251c6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x251c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x251c70: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x251c70u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x251c74: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x251c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x251c78: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x251c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x251c7c: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x251c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x251c80: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x251c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x251c84: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251c88: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x251c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x251c8c: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x251c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x251c90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251c94: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x251c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x251c98: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x251c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x251c9c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x251c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x251ca0: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x251ca0u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[3]);
    // 0x251ca4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251ca8: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x251ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x251cac: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x251cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x251cb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251cb4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x251cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x251cb8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x251cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x251cbc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x251cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x251cc0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x251cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x251cc4: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x251cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x251cc8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251ccc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251cd0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x251cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x251cd4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x251cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x251cd8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251cdc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251ce0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x251ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x251ce4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x251ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x251ce8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x251ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x251cec: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251cf0: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x251cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x251cf4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x251cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x251cf8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x251cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x251cfc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x251cfcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x251d00: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x251d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x251d04: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x251d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x251d08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x251d08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251d0c: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x251d0cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_251d10:
    // 0x251d10: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x251d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x251d14: 0x0  nop
    ctx->pc = 0x251d14u;
    // NOP
label_251d18:
    // 0x251d18: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x251d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x251d1c: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x251d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x251d20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251d24: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x251d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x251d28: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x251d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x251d2c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x251d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x251d30: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x251d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x251d34: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x251d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x251d38: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x251d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x251d3c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x251d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x251d40: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x251d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x251d44: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x251d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x251d48: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x251d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x251d4c: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x251d50: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x251d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x251d54: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x251d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x251d58: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x251d58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x251d5c: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x251d60: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x251d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x251d64: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x251d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x251d68: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x251d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x251d6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251d70: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x251d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x251d74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251d78: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x251d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x251d7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251d80: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x251d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x251d84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x251d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251d88: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x251d88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x251d8c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x251d8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x251d90: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x251d90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x251d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251d98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251d9c: 0x0  nop
    ctx->pc = 0x251d9cu;
    // NOP
    // 0x251da0: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x251da0u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x251da4: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x251da4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x251da8: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x251da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x251dac: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x251dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x251db0: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x251db0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x251db4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x251db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x251db8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251dbc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x251dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x251dc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251dc4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x251dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x251dc8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251dcc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x251dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x251dd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x251dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251dd4: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x251dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x251dd8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x251dd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x251ddc: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x251ddcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x251de0: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x251de0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x251de4: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x251de4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x251de8: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x251de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x251dec: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x251decu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251df0: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x251df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x251df4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x251df4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x251df8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x251df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251dfc: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x251dfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x251e00: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x251e00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251e04: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x251e04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x251e08: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x251e08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251e0c: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x251e0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x251e10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x251e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251e14: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x251e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x251e18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x251e18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x251e1c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x251e1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x251e20: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x251e20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x251e24: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x251e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251e28:
    // 0x251e28: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x251e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e2c: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x251e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x251e30: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x251e34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x251e34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251e38: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x251e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x251e3c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x251e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251e40: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x251e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e44: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x251e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x251e48: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x251e4c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x251e4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251e50: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x251e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x251e54: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x251e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251e58: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x251e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e5c: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x251e5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x251e60: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x251e64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x251e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251e68: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x251e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x251e6c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x251e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251e70: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x251e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e74: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x251e74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x251e78: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x251e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x251e7c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x251e7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x251e80: 0x3e00008  jr          $ra
    ctx->pc = 0x251E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E80u;
        // 0x251e84: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251E88u;
}
