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

// Function: sub_001CB028
// Address: 0x1cb028 - 0x1cb168
void sub_001CB028_0x1cb028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB028_0x1cb028");
#endif

    switch (ctx->pc) {
        case 0x1cb06cu: goto label_1cb06c;
        case 0x1cb094u: goto label_1cb094;
        case 0x1cb0a8u: goto label_1cb0a8;
        case 0x1cb0c4u: goto label_1cb0c4;
        case 0x1cb0fcu: goto label_1cb0fc;
        case 0x1cb108u: goto label_1cb108;
        case 0x1cb12cu: goto label_1cb12c;
        default: break;
    }

    ctx->pc = 0x1cb028u;

    // 0x1cb028: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1cb028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1cb02c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1cb02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1cb030: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1cb030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x1cb034: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cb034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb038: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cb038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb03c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1cb03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x1cb040: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1cb040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x1cb044: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1cb044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1cb048: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1cb048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x1cb04c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cb04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb050: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1cb050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x1cb054: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1cb054u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1cb058: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1cb058u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1cb05c: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1cb05cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1cb060: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1cb060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1cb064: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1CB064u;
    SET_GPR_U32(ctx, 31, 0x1CB06Cu);
    ctx->pc = 0x1CB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB064u;
    // 0x1cb068: 0x3c16006a  lui         $s6, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1CB064u, 0x1CB06Cu)) {
        return;
    }
    ctx->pc = 0x1CB06Cu;
label_1cb06c:
    // 0x1cb06c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cb06cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cb070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb078: 0xc6810080  lwc1        $f1, 0x80($s4)
    ctx->pc = 0x1cb078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb07c: 0x8e640278  lw          $a0, 0x278($s3)
    ctx->pc = 0x1cb07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1cb080: 0x0  nop
    ctx->pc = 0x1cb080u;
    // NOP
    // 0x1cb084: 0x0  nop
    ctx->pc = 0x1cb084u;
    // NOP
    // 0x1cb088: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1cb088u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1cb08c: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CB08Cu;
    SET_GPR_U32(ctx, 31, 0x1CB094u);
    ctx->pc = 0x1CB090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB08Cu;
    // 0x1cb090: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CB08Cu, 0x1CB094u)) {
        return;
    }
    ctx->pc = 0x1CB094u;
label_1cb094:
    // 0x1cb094: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cb094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cb098: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1cb09c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1cb09cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb0a0: 0x2450fc20  addiu       $s0, $v0, -0x3E0
    ctx->pc = 0x1cb0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966304));
    // 0x1cb0a4: 0x24750fc8  addiu       $s5, $v1, 0xFC8
    ctx->pc = 0x1cb0a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_1cb0a8:
    // 0x1cb0a8: 0x8e620280  lw          $v0, 0x280($s3)
    ctx->pc = 0x1cb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 640)));
    // 0x1cb0ac: 0x56420017  bnel        $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CB0ACu;
    {
        const bool branch_taken_0x1cb0ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb0ac) {
            ctx->pc = 0x1CB0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB0ACu;
            // 0x1cb0b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB10Cu;
            goto label_1cb10c;
        }
    }
    ctx->pc = 0x1CB0B4u;
    // 0x1cb0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0bc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB0BCu;
    SET_GPR_U32(ctx, 31, 0x1CB0C4u);
    ctx->pc = 0x1CB0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0BCu;
    // 0x1cb0c0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB0BCu, 0x1CB0C4u)) {
        return;
    }
    ctx->pc = 0x1CB0C4u;
label_1cb0c4:
    // 0x1cb0c4: 0xc6b00018  lwc1        $f16, 0x18($s5)
    ctx->pc = 0x1cb0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cb0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0cc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1cb0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb0d0: 0x26c5fc18  addiu       $a1, $s6, -0x3E8
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966296));
    // 0x1cb0d4: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1cb0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb0d8: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1cb0d8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1cb0dc: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1cb0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cb0e0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1cb0e0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1cb0e4: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x1cb0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cb0e8: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1cb0e8u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1cb0ec: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1cb0ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cb0f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb0f4: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CB0F4u;
    SET_GPR_U32(ctx, 31, 0x1CB0FCu);
    ctx->pc = 0x1CB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0F4u;
    // 0x1cb0f8: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CB0F4u, 0x1CB0FCu)) {
        return;
    }
    ctx->pc = 0x1CB0FCu;
label_1cb0fc:
    // 0x1cb0fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb100: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CB100u;
    SET_GPR_U32(ctx, 31, 0x1CB108u);
    ctx->pc = 0x1CB104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB100u;
    // 0x1cb104: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CB100u, 0x1CB108u)) {
        return;
    }
    ctx->pc = 0x1CB108u;
label_1cb108:
    // 0x1cb108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cb108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cb10c:
    // 0x1cb10c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1cb10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cb110: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1CB110u;
    {
        const bool branch_taken_0x1cb110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB110u;
        // 0x1cb114: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb110) {
            ctx->pc = 0x1CB0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CB118u;
    // 0x1cb118: 0x8e640260  lw          $a0, 0x260($s3)
    ctx->pc = 0x1cb118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x1cb11c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB11Cu;
    {
        const bool branch_taken_0x1cb11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB11Cu;
        // 0x1cb120: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb11c) {
            ctx->pc = 0x1CB130u;
            goto label_1cb130;
        }
    }
    ctx->pc = 0x1CB124u;
    // 0x1cb124: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1CB124u;
    SET_GPR_U32(ctx, 31, 0x1CB12Cu);
    ctx->pc = 0x1CB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB124u;
    // 0x1cb128: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1CB124u, 0x1CB12Cu)) {
        return;
    }
    ctx->pc = 0x1CB12Cu;
label_1cb12c:
    // 0x1cb12c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1cb12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1cb130:
    // 0x1cb130: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1cb130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1cb134: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1cb134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cb138: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1cb138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cb13c: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1cb13cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cb140: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1cb140u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cb144: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1cb144u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cb148: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1cb148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cb14c: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1cb14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cb150: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1cb150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cb154: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1cb154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb158: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB158u;
        // 0x1cb15c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB160u;
    // 0x1cb160: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cb164: 0x0  nop
    ctx->pc = 0x1cb164u;
    // NOP
    ctx->pc = 0x1cb168u;
}
