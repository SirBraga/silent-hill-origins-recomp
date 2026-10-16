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

// Function: sub_001C9508
// Address: 0x1c9508 - 0x1c9750
void sub_001C9508_0x1c9508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9508_0x1c9508");
#endif

    switch (ctx->pc) {
        case 0x1c9590u: goto label_1c9590;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9638u: goto label_1c9638;
        case 0x1c964cu: goto label_1c964c;
        case 0x1c9664u: goto label_1c9664;
        case 0x1c9694u: goto label_1c9694;
        case 0x1c969cu: goto label_1c969c;
        default: break;
    }

    ctx->pc = 0x1c9508u;

    // 0x1c9508: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c9508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c950c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c9510: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c9510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c9514: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c9514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9518: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c951c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c9520: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1c9520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1c9524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9528: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1c9528u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c952c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c952cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c9530: 0x8e6202b4  lw          $v0, 0x2B4($s3)
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1c9534: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1c9534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c9538: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c953c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c953cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c9540: 0x3c110002  lui         $s1, 0x2
    ctx->pc = 0x1c9540u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
    // 0x1c9544: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c9544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c9548: 0xe4750028  swc1        $f21, 0x28($v1)
    ctx->pc = 0x1c9548u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1c954c: 0x36310003  ori         $s1, $s1, 0x3
    ctx->pc = 0x1c954cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3);
    // 0x1c9550: 0xe4750014  swc1        $f21, 0x14($v1)
    ctx->pc = 0x1c9550u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1c9554: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x1c9554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1c9558: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x1c9558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1c955c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c9560: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x1c9560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c9564: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1c9564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1c9568: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x1c9568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c956c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1c956cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1c9570: 0xe4740024  swc1        $f20, 0x24($v1)
    ctx->pc = 0x1c9570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1c9574: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x1c9574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1c9578: 0xe4740018  swc1        $f20, 0x18($v1)
    ctx->pc = 0x1c9578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1c957c: 0xe4740038  swc1        $f20, 0x38($v1)
    ctx->pc = 0x1c957cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1c9580: 0xe4740034  swc1        $f20, 0x34($v1)
    ctx->pc = 0x1c9580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1c9584: 0xe4740030  swc1        $f20, 0x30($v1)
    ctx->pc = 0x1c9584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1c9588: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x1C9588u;
    SET_GPR_U32(ctx, 31, 0x1C9590u);
    ctx->pc = 0x1C958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9588u;
    // 0x1c958c: 0x8e6402b4  lw          $a0, 0x2B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1C9588u, 0x1C9590u)) {
        return;
    }
    ctx->pc = 0x1C9590u;
label_1c9590:
    // 0x1c9590: 0x8e6302c4  lw          $v1, 0x2C4($s3)
    ctx->pc = 0x1c9590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 708)));
    // 0x1c9594: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x1c9594u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c9598: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x1c9598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1c959c: 0xe6150028  swc1        $f21, 0x28($s0)
    ctx->pc = 0x1c959cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1c95a0: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x1c95a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c95a4: 0xe6950010  swc1        $f21, 0x10($s4)
    ctx->pc = 0x1c95a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x1c95a8: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x1c95a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1c95ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c95b0: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x1c95b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c95b4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1c95b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1c95b8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1c95b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c95bc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c95c0: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x1c95c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c95c4: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x1c95c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c95c8: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x1c95c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1c95cc: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x1c95ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1c95d0: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x1c95d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c95d4: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x1c95d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c95d8: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
    // 0x1c95dc: 0xc66c0390  lwc1        $f12, 0x390($s3)
    ctx->pc = 0x1c95dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c95e0: 0x2652f960  addiu       $s2, $s2, -0x6A0
    ctx->pc = 0x1c95e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965600));
    // 0x1c95e4: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1c95e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c95e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c95ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c95ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95f0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c95f0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c95f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c95f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c95fc: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C95FCu;
    SET_GPR_U32(ctx, 31, 0x1C9604u);
    ctx->pc = 0x1C9600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95FCu;
    // 0x1c9600: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C95FCu, 0x1C9604u)) {
        return;
    }
    ctx->pc = 0x1C9604u;
label_1c9604:
    // 0x1c9604: 0xc66c0394  lwc1        $f12, 0x394($s3)
    ctx->pc = 0x1c9604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9608: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x1c9608u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x1c960c: 0x2631f950  addiu       $s1, $s1, -0x6B0
    ctx->pc = 0x1c960cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965584));
    // 0x1c9610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9614: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1c9614u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1c9618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c961c: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C961Cu;
    SET_GPR_U32(ctx, 31, 0x1C9624u);
    ctx->pc = 0x1C9620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C961Cu;
    // 0x1c9620: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C961Cu, 0x1C9624u)) {
        return;
    }
    ctx->pc = 0x1C9624u;
label_1c9624:
    // 0x1c9624: 0xc66c039c  lwc1        $f12, 0x39C($s3)
    ctx->pc = 0x1c9624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c962c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9630: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C9630u;
    SET_GPR_U32(ctx, 31, 0x1C9638u);
    ctx->pc = 0x1C9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9630u;
    // 0x1c9634: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C9630u, 0x1C9638u)) {
        return;
    }
    ctx->pc = 0x1C9638u;
label_1c9638:
    // 0x1c9638: 0xc66c03a0  lwc1        $f12, 0x3A0($s3)
    ctx->pc = 0x1c9638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c963c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c963cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9644: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C9644u;
    SET_GPR_U32(ctx, 31, 0x1C964Cu);
    ctx->pc = 0x1C9648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9644u;
    // 0x1c9648: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C9644u, 0x1C964Cu)) {
        return;
    }
    ctx->pc = 0x1C964Cu;
label_1c964c:
    // 0x1c964c: 0xc66c03a4  lwc1        $f12, 0x3A4($s3)
    ctx->pc = 0x1c964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9650: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c9650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c9654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9658: 0x24a5f970  addiu       $a1, $a1, -0x690
    ctx->pc = 0x1c9658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
    // 0x1c965c: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x1C965Cu;
    SET_GPR_U32(ctx, 31, 0x1C9664u);
    ctx->pc = 0x1C9660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C965Cu;
    // 0x1c9660: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1C965Cu, 0x1C9664u)) {
        return;
    }
    ctx->pc = 0x1C9664u;
label_1c9664:
    // 0x1c9664: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c9664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c9668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c966c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c966cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9670: 0x2469f818  addiu       $t1, $v1, -0x7E8
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965272));
    // 0x1c9674: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x1c9674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c9678: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x1c9678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c967c: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x1c967cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x69F820u));
    // 0x1c9680: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1c9680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9684: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1c9684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9688: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1c9688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1c968c: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x1C968Cu;
    SET_GPR_U32(ctx, 31, 0x1C9694u);
    ctx->pc = 0x1C9690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C968Cu;
    // 0x1c9690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x1C968Cu, 0x1C9694u)) {
        return;
    }
    ctx->pc = 0x1C9694u;
label_1c9694:
    // 0x1c9694: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x1C9694u;
    SET_GPR_U32(ctx, 31, 0x1C969Cu);
    ctx->pc = 0x1C9698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9694u;
    // 0x1c9698: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1C9694u, 0x1C969Cu)) {
        return;
    }
    ctx->pc = 0x1C969Cu;
label_1c969c:
    // 0x1c969c: 0x8e6302c8  lw          $v1, 0x2C8($s3)
    ctx->pc = 0x1c969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
    // 0x1c96a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c96a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c96a4: 0x6a820017  ldl         $v0, 0x17($s4)
    ctx->pc = 0x1c96a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c96a8: 0x6e820010  ldr         $v0, 0x10($s4)
    ctx->pc = 0x1c96a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c96ac: 0x6a84001f  ldl         $a0, 0x1F($s4)
    ctx->pc = 0x1c96acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c96b0: 0x6e840018  ldr         $a0, 0x18($s4)
    ctx->pc = 0x1c96b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c96b4: 0x6a850027  ldl         $a1, 0x27($s4)
    ctx->pc = 0x1c96b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c96b8: 0x6e850020  ldr         $a1, 0x20($s4)
    ctx->pc = 0x1c96b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c96bc: 0x6a86002f  ldl         $a2, 0x2F($s4)
    ctx->pc = 0x1c96bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c96c0: 0x6e860028  ldr         $a2, 0x28($s4)
    ctx->pc = 0x1c96c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c96c4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1c96c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96c8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1c96c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96cc: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x1c96ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96d0: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x1c96d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96d4: 0xb0650017  sdl         $a1, 0x17($v1)
    ctx->pc = 0x1c96d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96d8: 0xb4650010  sdr         $a1, 0x10($v1)
    ctx->pc = 0x1c96d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96dc: 0xb066001f  sdl         $a2, 0x1F($v1)
    ctx->pc = 0x1c96dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96e0: 0xb4660018  sdr         $a2, 0x18($v1)
    ctx->pc = 0x1c96e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c96e4: 0x6a820037  ldl         $v0, 0x37($s4)
    ctx->pc = 0x1c96e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c96e8: 0x6e820030  ldr         $v0, 0x30($s4)
    ctx->pc = 0x1c96e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c96ec: 0x6a84003f  ldl         $a0, 0x3F($s4)
    ctx->pc = 0x1c96ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c96f0: 0x6e840038  ldr         $a0, 0x38($s4)
    ctx->pc = 0x1c96f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c96f4: 0x6a850047  ldl         $a1, 0x47($s4)
    ctx->pc = 0x1c96f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c96f8: 0x6e850040  ldr         $a1, 0x40($s4)
    ctx->pc = 0x1c96f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c96fc: 0x6a86004f  ldl         $a2, 0x4F($s4)
    ctx->pc = 0x1c96fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c9700: 0x6e860048  ldr         $a2, 0x48($s4)
    ctx->pc = 0x1c9700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c9704: 0xb0620027  sdl         $v0, 0x27($v1)
    ctx->pc = 0x1c9704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9708: 0xb4620020  sdr         $v0, 0x20($v1)
    ctx->pc = 0x1c9708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c970c: 0xb064002f  sdl         $a0, 0x2F($v1)
    ctx->pc = 0x1c970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9710: 0xb4640028  sdr         $a0, 0x28($v1)
    ctx->pc = 0x1c9710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9714: 0xb0650037  sdl         $a1, 0x37($v1)
    ctx->pc = 0x1c9714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9718: 0xb4650030  sdr         $a1, 0x30($v1)
    ctx->pc = 0x1c9718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c971c: 0xb066003f  sdl         $a2, 0x3F($v1)
    ctx->pc = 0x1c971cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9720: 0xb4660038  sdr         $a2, 0x38($v1)
    ctx->pc = 0x1c9720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c9724: 0xe6740390  swc1        $f20, 0x390($s3)
    ctx->pc = 0x1c9724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 912), bits); }
    // 0x1c9728: 0xe6740394  swc1        $f20, 0x394($s3)
    ctx->pc = 0x1c9728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 916), bits); }
    // 0x1c972c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c972cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9730: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c9730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c9734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9738: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1c9738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c973c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9740: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1c9740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c9744: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c9744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9748: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9748u;
        // 0x1c974c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9750u;
}
