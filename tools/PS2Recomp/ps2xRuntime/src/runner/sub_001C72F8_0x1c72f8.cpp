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

// Function: sub_001C72F8
// Address: 0x1c72f8 - 0x1c7610
void sub_001C72F8_0x1c72f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C72F8_0x1c72f8");
#endif

    switch (ctx->pc) {
        case 0x1c7348u: goto label_1c7348;
        case 0x1c7370u: goto label_1c7370;
        case 0x1c7388u: goto label_1c7388;
        case 0x1c73a8u: goto label_1c73a8;
        case 0x1c7434u: goto label_1c7434;
        case 0x1c7440u: goto label_1c7440;
        case 0x1c74b0u: goto label_1c74b0;
        case 0x1c74bcu: goto label_1c74bc;
        case 0x1c751cu: goto label_1c751c;
        case 0x1c7528u: goto label_1c7528;
        case 0x1c7550u: goto label_1c7550;
        case 0x1c75acu: goto label_1c75ac;
        case 0x1c75b8u: goto label_1c75b8;
        case 0x1c75ccu: goto label_1c75cc;
        default: break;
    }

    ctx->pc = 0x1c72f8u;

    // 0x1c72f8: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1c72f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1c72fc: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x1c72fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x1c7300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7304: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x1c7304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x1c7308: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x1c7308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x1c730c: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x1c730cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x1c7310: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x1c7310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x1c7314: 0x26320278  addiu       $s2, $s1, 0x278
    ctx->pc = 0x1c7314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
    // 0x1c7318: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x1c7318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x1c731c: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x1c731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x1c7320: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7324: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x1c7324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x1c7328: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x1c7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x1c732c: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x1c732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x1c7330: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x1c7330u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x1c7334: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x1c7334u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1c7338: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1c7338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1c733c: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x1c733cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x1c7340: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1C7340u;
    SET_GPR_U32(ctx, 31, 0x1C7348u);
    ctx->pc = 0x1C7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7340u;
    // 0x1c7344: 0xe7b401c0  swc1        $f20, 0x1C0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1C7340u, 0x1C7348u)) {
        return;
    }
    ctx->pc = 0x1C7348u;
label_1c7348:
    // 0x1c7348: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1c7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c734c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7354: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x1c7354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7358: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x1c7358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x1c735c: 0x0  nop
    ctx->pc = 0x1c735cu;
    // NOP
    // 0x1c7360: 0x0  nop
    ctx->pc = 0x1c7360u;
    // NOP
    // 0x1c7364: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1c7364u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1c7368: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C7368u;
    SET_GPR_U32(ctx, 31, 0x1C7370u);
    ctx->pc = 0x1C736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7368u;
    // 0x1c736c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C7368u, 0x1C7370u)) {
        return;
    }
    ctx->pc = 0x1C7370u;
label_1c7370:
    // 0x1c7370: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1c7374: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7378: 0x247e0fc8  addiu       $fp, $v1, 0xFC8
    ctx->pc = 0x1c7378u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x1c737c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c737cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7380: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C7380u;
    SET_GPR_U32(ctx, 31, 0x1C7388u);
    ctx->pc = 0x1C7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7380u;
    // 0x1c7384: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C7380u, 0x1C7388u)) {
        return;
    }
    ctx->pc = 0x1C7388u;
label_1c7388:
    // 0x1c7388: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c738c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c7390: 0x2453f4d0  addiu       $s3, $v0, -0xB30
    ctx->pc = 0x1c7390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
    // 0x1c7394: 0x2470f430  addiu       $s0, $v1, -0xBD0
    ctx->pc = 0x1c7394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964272));
    // 0x1c7398: 0x26770004  addiu       $s7, $s3, 0x4
    ctx->pc = 0x1c7398u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c739c: 0x26760008  addiu       $s6, $s3, 0x8
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1c73a0: 0x2675000c  addiu       $s5, $s3, 0xC
    ctx->pc = 0x1c73a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1c73a4: 0x0  nop
    ctx->pc = 0x1c73a4u;
    // NOP
label_1c73a8:
    // 0x1c73a8: 0x8e2202a4  lw          $v0, 0x2A4($s1)
    ctx->pc = 0x1c73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
    // 0x1c73ac: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C73ACu;
    {
        const bool branch_taken_0x1c73ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c73ac) {
            ctx->pc = 0x1C73B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C73ACu;
            // 0x1c73b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C74C4u;
            goto label_1c74c4;
        }
    }
    ctx->pc = 0x1C73B4u;
    // 0x1c73b4: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1c73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x1c73b8: 0x56820042  bnel        $s4, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C73B8u;
    {
        const bool branch_taken_0x1c73b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c73b8) {
            ctx->pc = 0x1C73BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C73B8u;
            // 0x1c73bc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C74C4u;
            goto label_1c74c4;
        }
    }
    ctx->pc = 0x1C73C0u;
    // 0x1c73c0: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x1c73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x1c73c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c73c8: 0xc62d02b8  lwc1        $f13, 0x2B8($s1)
    ctx->pc = 0x1c73c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c73cc: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c73ccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c73d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c73d4: 0xc614000c  lwc1        $f20, 0xC($s0)
    ctx->pc = 0x1c73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c73d8: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1c73dc: 0x460dbbc1  sub.s       $f15, $f23, $f13
    ctx->pc = 0x1c73dcu;
    ctx->f[15] = FPU_SUB_S(ctx->f[23], ctx->f[13]);
    // 0x1c73e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c73e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c73e4: 0x460da342  mul.s       $f13, $f20, $f13
    ctx->pc = 0x1c73e4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x1c73e8: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c73ec: 0xc6150004  lwc1        $f21, 0x4($s0)
    ctx->pc = 0x1c73ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c73f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c73f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c73f4: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x1c73f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x1c73f8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1c73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1c73fc: 0x460fa3c2  mul.s       $f15, $f20, $f15
    ctx->pc = 0x1c73fcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[20], ctx->f[15]);
    // 0x1c7400: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x1c7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1c7404: 0x460dab40  add.s       $f13, $f21, $f13
    ctx->pc = 0x1c7404u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
    // 0x1c7408: 0xc4730000  lwc1        $f19, 0x0($v1)
    ctx->pc = 0x1c7408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1c740c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c740cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7410: 0xc7d00018  lwc1        $f16, 0x18($fp)
    ctx->pc = 0x1c7410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c7414: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c7414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c7418: 0x24a5f3e8  addiu       $a1, $a1, -0xC18
    ctx->pc = 0x1c7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964200));
    // 0x1c741c: 0xc4520000  lwc1        $f18, 0x0($v0)
    ctx->pc = 0x1c741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1c7420: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1c7420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7424: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1c7424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7428: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c7428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c742c: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C742Cu;
    SET_GPR_U32(ctx, 31, 0x1C7434u);
    ctx->pc = 0x1C7430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C742Cu;
    // 0x1c7430: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C742Cu, 0x1C7434u)) {
        return;
    }
    ctx->pc = 0x1C7434u;
label_1c7434:
    // 0x1c7434: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7438: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C7438u;
    SET_GPR_U32(ctx, 31, 0x1C7440u);
    ctx->pc = 0x1C743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7438u;
    // 0x1c743c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C7438u, 0x1C7440u)) {
        return;
    }
    ctx->pc = 0x1C7440u;
label_1c7440:
    // 0x1c7440: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c7440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c7444: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7448: 0xc62f02b8  lwc1        $f15, 0x2B8($s1)
    ctx->pc = 0x1c7448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c744c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1c744cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1c7450: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c7454: 0xc7d00018  lwc1        $f16, 0x18($fp)
    ctx->pc = 0x1c7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c7458: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x1c7458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1c745c: 0x460fbcc1  sub.s       $f19, $f23, $f15
    ctx->pc = 0x1c745cu;
    ctx->f[19] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x1c7460: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1c7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7464: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x1c7464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1c7468: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c7468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c746c: 0x762821  addu        $a1, $v1, $s6
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c7470: 0x461304c2  mul.s       $f19, $f0, $f19
    ctx->pc = 0x1c7470u;
    ctx->f[19] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x1c7474: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1c7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7478: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x1c7478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x1c747c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1c747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1c7480: 0x460fa3c2  mul.s       $f15, $f20, $f15
    ctx->pc = 0x1c7480u;
    ctx->f[15] = FPU_MUL_S(ctx->f[20], ctx->f[15]);
    // 0x1c7484: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1c7484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7488: 0x46130cc0  add.s       $f19, $f1, $f19
    ctx->pc = 0x1c7488u;
    ctx->f[19] = FPU_ADD_S(ctx->f[1], ctx->f[19]);
    // 0x1c748c: 0xc4720000  lwc1        $f18, 0x0($v1)
    ctx->pc = 0x1c748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1c7490: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1c7490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7494: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c7494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c7498: 0x24a5f3e8  addiu       $a1, $a1, -0xC18
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964200));
    // 0x1c749c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c749cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c74a0: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c74a0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c74a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c74a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c74a8: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C74A8u;
    SET_GPR_U32(ctx, 31, 0x1C74B0u);
    ctx->pc = 0x1C74ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74A8u;
    // 0x1c74ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C74A8u, 0x1C74B0u)) {
        return;
    }
    ctx->pc = 0x1C74B0u;
label_1c74b0:
    // 0x1c74b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c74b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c74b4: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C74B4u;
    SET_GPR_U32(ctx, 31, 0x1C74BCu);
    ctx->pc = 0x1C74B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74B4u;
    // 0x1c74b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C74B4u, 0x1C74BCu)) {
        return;
    }
    ctx->pc = 0x1C74BCu;
label_1c74bc:
    // 0x1c74bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C74BCu;
    {
        const bool branch_taken_0x1c74bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74BCu;
        // 0x1c74c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74bc) {
            ctx->pc = 0x1C752Cu;
            goto label_1c752c;
        }
    }
    ctx->pc = 0x1C74C4u;
label_1c74c4:
    // 0x1c74c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c74c8: 0x2445f3e8  addiu       $a1, $v0, -0xC18
    ctx->pc = 0x1c74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964200));
    // 0x1c74cc: 0xc7d00018  lwc1        $f16, 0x18($fp)
    ctx->pc = 0x1c74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c74d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c74d4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1c74d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c74d8: 0x733021  addu        $a2, $v1, $s3
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1c74dc: 0x753821  addu        $a3, $v1, $s5
    ctx->pc = 0x1c74dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1c74e0: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c74e4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1c74e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c74e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c74e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c74ec: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x1c74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1c74f0: 0xc4d20000  lwc1        $f18, 0x0($a2)
    ctx->pc = 0x1c74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1c74f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c74f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c74f8: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1c74f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c74fc: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c74fcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c7500: 0xc4730000  lwc1        $f19, 0x0($v1)
    ctx->pc = 0x1c7500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1c7504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7508: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1c7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c750c: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x1c750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c7510: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c7510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c7514: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C7514u;
    SET_GPR_U32(ctx, 31, 0x1C751Cu);
    ctx->pc = 0x1C7518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7514u;
    // 0x1c7518: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C7514u, 0x1C751Cu)) {
        return;
    }
    ctx->pc = 0x1C751Cu;
label_1c751c:
    // 0x1c751c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7520: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C7520u;
    SET_GPR_U32(ctx, 31, 0x1C7528u);
    ctx->pc = 0x1C7524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7520u;
    // 0x1c7524: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C7520u, 0x1C7528u)) {
        return;
    }
    ctx->pc = 0x1C7528u;
label_1c7528:
    // 0x1c7528: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c752c:
    // 0x1c752c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1c752cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c7530: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x1c7530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c7534: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x1C7534u;
    {
        const bool branch_taken_0x1c7534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7534u;
        // 0x1c7538: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7534) {
            ctx->pc = 0x1C73A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c73a8;
        }
    }
    ctx->pc = 0x1C753Cu;
    // 0x1c753c: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x1c753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x1c7540: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C7540u;
    {
        const bool branch_taken_0x1c7540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7540) {
            ctx->pc = 0x1C7544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7540u;
            // 0x1c7544: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C75BCu;
            goto label_1c75bc;
        }
    }
    ctx->pc = 0x1C7548u;
    // 0x1c7548: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C7548u;
    SET_GPR_U32(ctx, 31, 0x1C7550u);
    ctx->pc = 0x1C754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7548u;
    // 0x1c754c: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C7548u, 0x1C7550u)) {
        return;
    }
    ctx->pc = 0x1C7550u;
label_1c7550:
    // 0x1c7550: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1c7550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1c7554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c755c: 0x24620fc8  addiu       $v0, $v1, 0xFC8
    ctx->pc = 0x1c755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x1c7560: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1c7560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1c7564: 0xc4500018  lwc1        $f16, 0x18($v0)
    ctx->pc = 0x1c7564u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c7568: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c7568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c756c: 0x3c014363  lui         $at, 0x4363
    ctx->pc = 0x1c756cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17251 << 16));
    // 0x1c7570: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c7570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7574: 0x2465f3e8  addiu       $a1, $v1, -0xC18
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964200));
    // 0x1c7578: 0x3c0143ba  lui         $at, 0x43BA
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17338 << 16));
    // 0x1c757c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c757cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c7580: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7584: 0x3c0143e5  lui         $at, 0x43E5
    ctx->pc = 0x1c7584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17381 << 16));
    // 0x1c7588: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1c7588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c758c: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1c758cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1c7590: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x1c7590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x1c7594: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1c7594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c7598: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1c7598u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1c759c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c759cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c75a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c75a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c75a4: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C75A4u;
    SET_GPR_U32(ctx, 31, 0x1C75ACu);
    ctx->pc = 0x1C75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75A4u;
    // 0x1c75a8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C75A4u, 0x1C75ACu)) {
        return;
    }
    ctx->pc = 0x1C75ACu;
label_1c75ac:
    // 0x1c75ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c75acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c75b0: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C75B0u;
    SET_GPR_U32(ctx, 31, 0x1C75B8u);
    ctx->pc = 0x1C75B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75B0u;
    // 0x1c75b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C75B0u, 0x1C75B8u)) {
        return;
    }
    ctx->pc = 0x1C75B8u;
label_1c75b8:
    // 0x1c75b8: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1c75b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1c75bc:
    // 0x1c75bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C75BCu;
    {
        const bool branch_taken_0x1c75bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75BCu;
        // 0x1c75c0: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75bc) {
            ctx->pc = 0x1C75D0u;
            goto label_1c75d0;
        }
    }
    ctx->pc = 0x1C75C4u;
    // 0x1c75c4: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1C75C4u;
    SET_GPR_U32(ctx, 31, 0x1C75CCu);
    ctx->pc = 0x1C75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75C4u;
    // 0x1c75c8: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1C75C4u, 0x1C75CCu)) {
        return;
    }
    ctx->pc = 0x1C75CCu;
label_1c75cc:
    // 0x1c75cc: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x1c75ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1c75d0:
    // 0x1c75d0: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x1c75d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c75d4: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x1c75d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c75d8: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x1c75d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c75dc: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x1c75dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c75e0: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x1c75e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c75e4: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x1c75e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1c75e8: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x1c75e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c75ec: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x1c75ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c75f0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1c75f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c75f4: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x1c75f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c75f8: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x1c75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c75fc: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x1c75fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c7600: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x1c7600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7604: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7604u;
        // 0x1c7608: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C760Cu;
    // 0x1c760c: 0x0  nop
    ctx->pc = 0x1c760cu;
    // NOP
    ctx->pc = 0x1c7610u;
}
