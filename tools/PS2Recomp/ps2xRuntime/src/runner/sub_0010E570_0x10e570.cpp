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

// Function: sub_0010E570
// Address: 0x10e570 - 0x10e6c0
void sub_0010E570_0x10e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E570_0x10e570");
#endif

    switch (ctx->pc) {
        case 0x10e5ecu: goto label_10e5ec;
        case 0x10e604u: goto label_10e604;
        case 0x10e644u: goto label_10e644;
        case 0x10e658u: goto label_10e658;
        case 0x10e670u: goto label_10e670;
        default: break;
    }

    ctx->pc = 0x10e570u;

    // 0x10e570: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10e574: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x10e574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x10e578: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x10e578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x10e57c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10e57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e580: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x10e580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x10e584: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10e584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e588: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10e58c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10e58cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e590: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x10e590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x10e594: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10e594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e598: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x10e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10e59c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10e59cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10e5a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e5a4: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x10E5A4u;
    {
        const bool branch_taken_0x10e5a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5A4u;
        // 0x10e5a8: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5a4) {
            ctx->pc = 0x10E680u;
            goto label_10e680;
        }
    }
    ctx->pc = 0x10E5ACu;
    // 0x10e5ac: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x10E5ACu;
    {
        const bool branch_taken_0x10e5ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ACu;
        // 0x10e5b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5ac) {
            ctx->pc = 0x10E680u;
            goto label_10e680;
        }
    }
    ctx->pc = 0x10E5B4u;
    // 0x10e5b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e5b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10e5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10e5bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10e5c0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x10e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x10e5c4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x10e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x10e5c8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x10e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x10e5cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10e5d0: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x10e5d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10e5d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x10e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x10e5d8: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x10e5d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x10e5dc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10e5e0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x10e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x10e5e4: 0xc043a04  jal         func_10E810
    ctx->pc = 0x10E5E4u;
    SET_GPR_U32(ctx, 31, 0x10E5ECu);
    ctx->pc = 0x10E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E5E4u;
    // 0x10e5e8: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E810u, 0x10E5E4u, 0x10E5ECu)) {
        return;
    }
    ctx->pc = 0x10E5ECu;
label_10e5ec:
    // 0x10e5ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e5f0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10E5F0u;
    {
        const bool branch_taken_0x10e5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5F0u;
        // 0x10e5f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5f0) {
            ctx->pc = 0x10E650u;
            goto label_10e650;
        }
    }
    ctx->pc = 0x10E5F8u;
    // 0x10e5f8: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10e5f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10e5fc: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10E5FCu;
    SET_GPR_U32(ctx, 31, 0x10E604u);
    ctx->pc = 0x10E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E5FCu;
    // 0x10e600: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10E5FCu, 0x10E604u)) {
        return;
    }
    ctx->pc = 0x10E604u;
label_10e604:
    // 0x10e604: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x10e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10e608: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e60c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10e60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10e610: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10E610u;
    {
        const bool branch_taken_0x10e610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E610u;
        // 0x10e614: 0x46140b02  mul.s       $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e610) {
            ctx->pc = 0x10E67Cu;
            goto label_10e67c;
        }
    }
    ctx->pc = 0x10E618u;
    // 0x10e618: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10e61c: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F4u));
    // 0x10e620: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10E620u;
    {
        const bool branch_taken_0x10e620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E620u;
        // 0x10e624: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e620) {
            ctx->pc = 0x10E680u;
            goto label_10e680;
        }
    }
    ctx->pc = 0x10E628u;
    // 0x10e628: 0xe48c0058  swc1        $f12, 0x58($a0)
    ctx->pc = 0x10e628u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x10e62c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e630: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10e634: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10E634u;
    {
        const bool branch_taken_0x10e634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E634u;
        // 0x10e638: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e634) {
            ctx->pc = 0x10E680u;
            goto label_10e680;
        }
    }
    ctx->pc = 0x10E63Cu;
    // 0x10e63c: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10E63Cu;
    SET_GPR_U32(ctx, 31, 0x10E644u);
    ctx->pc = 0x10E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E63Cu;
    // 0x10e640: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10E63Cu, 0x10E644u)) {
        return;
    }
    ctx->pc = 0x10E644u;
label_10e644:
    // 0x10e644: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10E644u;
    {
        const bool branch_taken_0x10e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E644u;
        // 0x10e648: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e644) {
            ctx->pc = 0x10E680u;
            goto label_10e680;
        }
    }
    ctx->pc = 0x10E64Cu;
    // 0x10e64c: 0x0  nop
    ctx->pc = 0x10e64cu;
    // NOP
label_10e650:
    // 0x10e650: 0xc04389e  jal         func_10E278
    ctx->pc = 0x10E650u;
    SET_GPR_U32(ctx, 31, 0x10E658u);
    ctx->pc = 0x10E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E650u;
    // 0x10e654: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E278u, 0x10E650u, 0x10E658u)) {
        return;
    }
    ctx->pc = 0x10E658u;
label_10e658:
    // 0x10e658: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x10e658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x10e65c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10e65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e660: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x10e660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x10e664: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e668: 0xc043a20  jal         func_10E880
    ctx->pc = 0x10E668u;
    SET_GPR_U32(ctx, 31, 0x10E670u);
    ctx->pc = 0x10E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E668u;
    // 0x10e66c: 0xe7b50014  swc1        $f21, 0x14($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E880u, 0x10E668u, 0x10E670u)) {
        return;
    }
    ctx->pc = 0x10E670u;
label_10e670:
    // 0x10e670: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E670u;
    {
        const bool branch_taken_0x10e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e670) {
            ctx->pc = 0x10E674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E670u;
            // 0x10e674: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E684u;
            goto label_10e684;
        }
    }
    ctx->pc = 0x10E678u;
    // 0x10e678: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x10e678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_10e67c:
    // 0x10e67c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10e67cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e680:
    // 0x10e680: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10e680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10e684:
    // 0x10e684: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x10e684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10e688: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x10e688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10e68c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x10e68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10e690: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x10e690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e694: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10e694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e698: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e69c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x10e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10e6a0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x10e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10e6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6A4u;
        // 0x10e6a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E6ACu;
    // 0x10e6ac: 0x0  nop
    ctx->pc = 0x10e6acu;
    // NOP
    // 0x10e6b0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x10e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x10e6b4: 0x0  nop
    ctx->pc = 0x10e6b4u;
    // NOP
    // 0x10e6b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10e6bc: 0x0  nop
    ctx->pc = 0x10e6bcu;
    // NOP
    ctx->pc = 0x10e6c0u;
}
