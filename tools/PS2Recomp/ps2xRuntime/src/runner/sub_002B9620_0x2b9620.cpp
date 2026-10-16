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

// Function: sub_002B9620
// Address: 0x2b9620 - 0x2ba138
void sub_002B9620_0x2b9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9620_0x2b9620");
#endif

    switch (ctx->pc) {
        case 0x2b9820u: goto label_2b9820;
        case 0x2b9830u: goto label_2b9830;
        case 0x2b9840u: goto label_2b9840;
        case 0x2b98ccu: goto label_2b98cc;
        case 0x2b98e4u: goto label_2b98e4;
        case 0x2b9b10u: goto label_2b9b10;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0dcu: goto label_2ba0dc;
        default: break;
    }

    ctx->pc = 0x2b9620u;

    // 0x2b9620: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2b9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x2b9624: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2b9624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2b9628: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x2b9628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x2b962c: 0x2463e6e8  addiu       $v1, $v1, -0x1918
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960872));
    // 0x2b9630: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x2b9630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x2b9634: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b9634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9638: 0xe7ba01f0  swc1        $f26, 0x1F0($sp)
    ctx->pc = 0x2b9638u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2b963c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2b963cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2b9640: 0xe7b801e0  swc1        $f24, 0x1E0($sp)
    ctx->pc = 0x2b9640u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2b9644: 0x24a5e6d8  addiu       $a1, $a1, -0x1928
    ctx->pc = 0x2b9644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960856));
    // 0x2b9648: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x2b9648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x2b964c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2b964cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9650: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x2b9650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x2b9654: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x2b9654u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x2b9658: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x2b9658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x2b965c: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x2b965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x2b9660: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x2b9660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x2b9664: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x2b9664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x2b9668: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x2b9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x2b966c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2b966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2b9670: 0xe7be0210  swc1        $f30, 0x210($sp)
    ctx->pc = 0x2b9670u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x2b9674: 0xe7bd0208  swc1        $f29, 0x208($sp)
    ctx->pc = 0x2b9674u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2b9678: 0xe7bc0200  swc1        $f28, 0x200($sp)
    ctx->pc = 0x2b9678u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2b967c: 0xe7bb01f8  swc1        $f27, 0x1F8($sp)
    ctx->pc = 0x2b967cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2b9680: 0xe7b901e8  swc1        $f25, 0x1E8($sp)
    ctx->pc = 0x2b9680u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2b9684: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x2b9684u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2b9688: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x2b9688u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2b968c: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2b968cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2b9690: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2b9690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2b9694: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2b9694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2b9698: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x2b9698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b969c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b969cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b96a0: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x2b96a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x2b96a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b96a8: 0x960500b8  lhu         $a1, 0xB8($s0)
    ctx->pc = 0x2b96a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2b96ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b96b0: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2b96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2b96b4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2b96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2b96b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b96b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b96bc: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B96BCu;
    {
        const bool branch_taken_0x2b96bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96BCu;
        // 0x2b96c0: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96bc) {
            ctx->pc = 0x2B96E4u;
            goto label_2b96e4;
        }
    }
    ctx->pc = 0x2B96C4u;
    // 0x2b96c4: 0x960200b8  lhu         $v0, 0xB8($s0)
    ctx->pc = 0x2b96c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2b96c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b96c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b96cc: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x2b96ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2b96d0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2b96d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b96d4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2b96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b96d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b96dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B96DCu;
    {
        const bool branch_taken_0x2b96dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96DCu;
        // 0x2b96e0: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96dc) {
            ctx->pc = 0x2B96E8u;
            goto label_2b96e8;
        }
    }
    ctx->pc = 0x2B96E4u;
label_2b96e4:
    // 0x2b96e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b96e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b96e8:
    // 0x2b96e8: 0x960300c0  lhu         $v1, 0xC0($s0)
    ctx->pc = 0x2b96e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2b96ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b96ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b96f0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B96F0u;
    {
        const bool branch_taken_0x2b96f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F0u;
        // 0x2b96f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96f0) {
            ctx->pc = 0x2B9714u;
            goto label_2b9714;
        }
    }
    ctx->pc = 0x2B96F8u;
    // 0x2b96f8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b96fc: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x2b96fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2b9700: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2b9700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b9704: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2b9704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b9708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b970c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B970Cu;
    {
        const bool branch_taken_0x2b970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B970Cu;
        // 0x2b9710: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b970c) {
            ctx->pc = 0x2B9718u;
            goto label_2b9718;
        }
    }
    ctx->pc = 0x2B9714u;
label_2b9714:
    // 0x2b9714: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b9714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9718:
    // 0x2b9718: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9718u;
    {
        const bool branch_taken_0x2b9718 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9718) {
            ctx->pc = 0x2B9740u;
            goto label_2b9740;
        }
    }
    ctx->pc = 0x2B9720u;
    // 0x2b9720: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2b9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b9724: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2b9724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2b9728: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2b9728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b972c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2b972cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2b9730: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b9730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b9738: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2b9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2b973c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2b973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2b9740:
    // 0x2b9740: 0x5260000a  beql        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B9740u;
    {
        const bool branch_taken_0x2b9740 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9740) {
            ctx->pc = 0x2B9744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9740u;
            // 0x2b9744: 0x8ea200f8  lw          $v0, 0xF8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B976Cu;
            goto label_2b976c;
        }
    }
    ctx->pc = 0x2B9748u;
    // 0x2b9748: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b9748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b974c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2b974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b9750: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2b9750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b9754: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2b9754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2b9758: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b9758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b975c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b9760: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2b9760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2b9764: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2b9764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x2b9768: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x2b9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_2b976c:
    // 0x2b976c: 0x8ea300b8  lw          $v1, 0xB8($s5)
    ctx->pc = 0x2b976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x2b9770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b9770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b9774: 0x8ea400ac  lw          $a0, 0xAC($s5)
    ctx->pc = 0x2b9774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x2b9778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b977c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b977cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b9780: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x2b9780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x2b9784: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x2b9784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x2b9788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b9788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b978c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b978cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b9790: 0xaea300bc  sw          $v1, 0xBC($s5)
    ctx->pc = 0x2b9790u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 3));
    // 0x2b9794: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b9794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b9798: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9798u;
    {
        const bool branch_taken_0x2b9798 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9798u;
        // 0x2b979c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9798) {
            ctx->pc = 0x2B97A4u;
            goto label_2b97a4;
        }
    }
    ctx->pc = 0x2B97A0u;
    // 0x2b97a0: 0x86830020  lh          $v1, 0x20($s4)
    ctx->pc = 0x2b97a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_2b97a4:
    // 0x2b97a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b97a8: 0x8ea300ac  lw          $v1, 0xAC($s5)
    ctx->pc = 0x2b97a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x2b97ac: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x2b97acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x2b97b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b97b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b97b8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B97B8u;
    {
        const bool branch_taken_0x2b97b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97B8u;
        // 0x2b97bc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97b8) {
            ctx->pc = 0x2B97C4u;
            goto label_2b97c4;
        }
    }
    ctx->pc = 0x2B97C0u;
    // 0x2b97c0: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x2b97c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_2b97c4:
    // 0x2b97c4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2b97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2b97c8: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x2b97c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x2b97cc: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2b97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2b97d0: 0x10400240  beqz        $v0, . + 4 + (0x240 << 2)
    ctx->pc = 0x2B97D0u;
    {
        const bool branch_taken_0x2b97d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97D0u;
        // 0x2b97d4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97d0) {
            ctx->pc = 0x2BA0D4u;
            goto label_2ba0d4;
        }
    }
    ctx->pc = 0x2B97D8u;
    // 0x2b97d8: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2b97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b97dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b97e0: 0x261e000c  addiu       $fp, $s0, 0xC
    ctx->pc = 0x2b97e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2b97e4: 0xc4593a68  lwc1        $f25, 0x3A68($v0)
    ctx->pc = 0x2b97e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b97e8: 0x3c17006b  lui         $s7, 0x6B
    ctx->pc = 0x2b97e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
    // 0x2b97ec: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x2b97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x2b97f0: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x2b97f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x2b97f4: 0xc797815c  lwc1        $f23, -0x7EA4($gp)
    ctx->pc = 0x2b97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b97f8: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x2b97f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97fc: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2b97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2b9800: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x2b9800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x2b9804: 0xc79b8160  lwc1        $f27, -0x7EA0($gp)
    ctx->pc = 0x2b9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2b9808: 0xc79c8164  lwc1        $f28, -0x7E9C($gp)
    ctx->pc = 0x2b9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2b980c: 0xc7958168  lwc1        $f21, -0x7E98($gp)
    ctx->pc = 0x2b980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b9810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b9814: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x2b9814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x2b9818: 0xc794816c  lwc1        $f20, -0x7E94($gp)
    ctx->pc = 0x2b9818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b981c: 0x0  nop
    ctx->pc = 0x2b981cu;
    // NOP
label_2b9820:
    // 0x2b9820: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2b9820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b9824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9828: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2B9828u;
    SET_GPR_U32(ctx, 31, 0x2B9830u);
    ctx->pc = 0x2B982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9828u;
    // 0x2b982c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2B9828u, 0x2B9830u)) {
        return;
    }
    ctx->pc = 0x2B9830u;
label_2b9830:
    // 0x2b9830: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b9830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b9834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9838: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2B9838u;
    SET_GPR_U32(ctx, 31, 0x2B9840u);
    ctx->pc = 0x2B983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9838u;
    // 0x2b983c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2B9838u, 0x2B9840u)) {
        return;
    }
    ctx->pc = 0x2B9840u;
label_2b9840:
    // 0x2b9840: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2b9840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b9844: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9844u;
    {
        const bool branch_taken_0x2b9844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9844u;
        // 0x2b9848: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9844) {
            ctx->pc = 0x2B9860u;
            goto label_2b9860;
        }
    }
    ctx->pc = 0x2B984Cu;
    // 0x2b984c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b9850: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b9850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2b9854: 0x14400218  bnez        $v0, . + 4 + (0x218 << 2)
    ctx->pc = 0x2B9854u;
    {
        const bool branch_taken_0x2b9854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9854u;
        // 0x2b9858: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9854) {
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2B985Cu;
    // 0x2b985c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2b985cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2b9860:
    // 0x2b9860: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2b9860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9864: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b9864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9868: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2b9868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b986c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b986cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b9870: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2b9870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9874: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2b9874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b9878: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b9878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b987c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2b987cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2b9880: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2b9880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b9884: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b9884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9888: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2b9888u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2b988c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2b988cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b9890: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2b9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2b9894: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b9894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9898: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2b9898u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b989c: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x2b989cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b98a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b98a4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2b98a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2b98a8: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x2b98a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2b98ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b98acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b98b0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2b98b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2b98b4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B98B4u;
    {
        const bool branch_taken_0x2b98b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98B4u;
        // 0x2b98b8: 0xe7a400a8  swc1        $f4, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98b4) {
            ctx->pc = 0x2B98D0u;
            goto label_2b98d0;
        }
    }
    ctx->pc = 0x2B98BCu;
    // 0x2b98bc: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x2b98bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2b98c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b98c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b98c4: 0xc0ab7d6  jal         func_2ADF58
    ctx->pc = 0x2B98C4u;
    SET_GPR_U32(ctx, 31, 0x2B98CCu);
    ctx->pc = 0x2B98C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98C4u;
    // 0x2b98c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ADF58u, 0x2B98C4u, 0x2B98CCu)) {
        return;
    }
    ctx->pc = 0x2B98CCu;
label_2b98cc:
    // 0x2b98cc: 0x0  nop
    ctx->pc = 0x2b98ccu;
    // NOP
label_2b98d0:
    // 0x2b98d0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B98D0u;
    {
        const bool branch_taken_0x2b98d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98D0u;
        // 0x2b98d4: 0x8fa60110  lw          $a2, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98d0) {
            ctx->pc = 0x2B98E4u;
            goto label_2b98e4;
        }
    }
    ctx->pc = 0x2B98D8u;
    // 0x2b98d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b98d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b98dc: 0xc0ab7d6  jal         func_2ADF58
    ctx->pc = 0x2B98DCu;
    SET_GPR_U32(ctx, 31, 0x2B98E4u);
    ctx->pc = 0x2B98E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98DCu;
    // 0x2b98e0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ADF58u, 0x2B98DCu, 0x2B98E4u)) {
        return;
    }
    ctx->pc = 0x2B98E4u;
label_2b98e4:
    // 0x2b98e4: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x2b98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b98e8: 0xc6450018  lwc1        $f5, 0x18($s2)
    ctx->pc = 0x2b98e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b98ec: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2b98ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2b98f0: 0xc643001c  lwc1        $f3, 0x1C($s2)
    ctx->pc = 0x2b98f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b98f4: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2b98f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2b98f8: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2b98f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2b98fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b98fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b9900: 0x46020580  add.s       $f22, $f0, $f2
    ctx->pc = 0x2b9900u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b9904: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x2b9904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9908: 0x0  nop
    ctx->pc = 0x2b9908u;
    // NOP
    // 0x2b990c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2B990Cu;
    {
        const bool branch_taken_0x2b990c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B990Cu;
        // 0x2b9910: 0xc7a100b0  lwc1        $f1, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b990c) {
            ctx->pc = 0x2B9948u;
            goto label_2b9948;
        }
    }
    ctx->pc = 0x2B9914u;
    // 0x2b9914: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x2b9914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9918: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x2b9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b991c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2b991cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2b9920: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x2b9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9924: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2b9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9928: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x2b9928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b992c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2b992cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2b9930: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2b9930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b9934: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2b9934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b9938: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x2b9938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b993c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B993Cu;
    {
        const bool branch_taken_0x2b993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B993Cu;
        // 0x2b9940: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b993c) {
            ctx->pc = 0x2B9960u;
            goto label_2b9960;
        }
    }
    ctx->pc = 0x2B9944u;
    // 0x2b9944: 0x0  nop
    ctx->pc = 0x2b9944u;
    // NOP
label_2b9948:
    // 0x2b9948: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x2b9948u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x2b994c: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x2b994cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x2b9950: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x2b9950u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x2b9954: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2b9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b9958: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2b9958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b995c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2b995cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2b9960:
    // 0x2b9960: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B9960u;
    {
        const bool branch_taken_0x2b9960 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9960) {
            ctx->pc = 0x2B99C8u;
            goto label_2b99c8;
        }
    }
    ctx->pc = 0x2B9968u;
    // 0x2b9968: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x2b9968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b996c: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x2b996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b9970: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b9970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b9974: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2b9974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9978: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2b9978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b997c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9980: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x2b9980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9984: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b9984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9988: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2b9988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b998c: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x2b998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9990: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2b9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9994: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x2b9994u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b9998: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2b9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b999c: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x2b999cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2b99a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b99a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b99a4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2b99a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b99a8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b99a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b99ac: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2b99acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2b99b0: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2b99b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2b99b4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2b99b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2b99b8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b99b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b99bc: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2b99bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b99c0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b99c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b99c4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2b99c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2b99c8:
    // 0x2b99c8: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B99C8u;
    {
        const bool branch_taken_0x2b99c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99c8) {
            ctx->pc = 0x2B99CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B99C8u;
            // 0x2b99cc: 0xc640000c  lwc1        $f0, 0xC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9A38u;
            goto label_2b9a38;
        }
    }
    ctx->pc = 0x2B99D0u;
    // 0x2b99d0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2b99d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b99d4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2b99d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b99d8: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2b99d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b99dc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2b99dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2b99e0: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2b99e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2b99e4: 0x46002147  neg.s       $f5, $f4
    ctx->pc = 0x2b99e4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[4]);
    // 0x2b99e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b99e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b99ec: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2b99ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b99f0: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2b99f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b99f4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2b99f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b99f8: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2b99f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b99fc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b99fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9a00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b9a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b9a04: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x2b9a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b9a08: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b9a08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b9a0c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2b9a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9a10: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2b9a10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2b9a14: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2b9a14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2b9a18: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2b9a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2b9a1c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2b9a1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b9a20: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2b9a20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2b9a24: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2b9a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b9a28: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2b9a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b9a2c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2b9a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b9a30: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2b9a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9a34: 0x0  nop
    ctx->pc = 0x2b9a34u;
    // NOP
label_2b9a38:
    // 0x2b9a38: 0x461e0036  c.le.s      $f0, $f30
    ctx->pc = 0x2b9a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9a3c: 0x0  nop
    ctx->pc = 0x2b9a3cu;
    // NOP
    // 0x2b9a40: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9A40u;
    {
        const bool branch_taken_0x2b9a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9a40) {
            ctx->pc = 0x2B9A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9A40u;
            // 0x2b9a44: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9A4Cu;
            goto label_2b9a4c;
        }
    }
    ctx->pc = 0x2B9A48u;
    // 0x2b9a48: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b9a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2b9a4c:
    // 0x2b9a4c: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B9A4Cu;
    {
        const bool branch_taken_0x2b9a4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a4c) {
            ctx->pc = 0x2B9A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9A4Cu;
            // 0x2b9a50: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9A80u;
            goto label_2b9a80;
        }
    }
    ctx->pc = 0x2B9A54u;
    // 0x2b9a54: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b9a58: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b9a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2b9a5c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9A5Cu;
    {
        const bool branch_taken_0x2b9a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a5c) {
            ctx->pc = 0x2B9A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9A5Cu;
            // 0x2b9a60: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9A80u;
            goto label_2b9a80;
        }
    }
    ctx->pc = 0x2B9A64u;
    // 0x2b9a64: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9a68: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b9a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b9a6c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2b9a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9a70: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2b9a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b9a74: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2b9a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9A78u;
    {
        const bool branch_taken_0x2b9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A78u;
        // 0x2b9a7c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a78) {
            ctx->pc = 0x2B9A88u;
            goto label_2b9a88;
        }
    }
    ctx->pc = 0x2B9A80u;
label_2b9a80:
    // 0x2b9a80: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2b9a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2b9a84: 0xe7bb0060  swc1        $f27, 0x60($sp)
    ctx->pc = 0x2b9a84u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2b9a88:
    // 0x2b9a88: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9A88u;
    {
        const bool branch_taken_0x2b9a88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a88) {
            ctx->pc = 0x2B9A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9A88u;
            // 0x2b9a8c: 0xc60600c8  lwc1        $f6, 0xC8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9AA4u;
            goto label_2b9aa4;
        }
    }
    ctx->pc = 0x2B9A90u;
    // 0x2b9a90: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b9a94: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b9a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2b9a98: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9A98u;
    {
        const bool branch_taken_0x2b9a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a98) {
            ctx->pc = 0x2B9A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9A98u;
            // 0x2b9a9c: 0xc60600c8  lwc1        $f6, 0xC8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9AA4u;
            goto label_2b9aa4;
        }
    }
    ctx->pc = 0x2B9AA0u;
    // 0x2b9aa0: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x2b9aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2b9aa4:
    // 0x2b9aa4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b9aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9aa8: 0x461cd142  mul.s       $f5, $f26, $f28
    ctx->pc = 0x2b9aa8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[26], ctx->f[28]);
    // 0x2b9aac: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2b9aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9ab0: 0xc7a400d0  lwc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b9ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9ab4: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2b9ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9ab8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b9ab8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9abc: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x2b9abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9ac0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b9ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b9ac4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b9ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9ac8: 0xe7b9005c  swc1        $f25, 0x5C($sp)
    ctx->pc = 0x2b9ac8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2b9acc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b9accu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b9ad0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2b9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2b9ad4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2b9ad4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b9ad8: 0xe7b90054  swc1        $f25, 0x54($sp)
    ctx->pc = 0x2b9ad8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2b9adc: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2b9adcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2b9ae0: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x2b9ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9ae4: 0x0  nop
    ctx->pc = 0x2b9ae4u;
    // NOP
    // 0x2b9ae8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9AE8u;
    {
        const bool branch_taken_0x2b9ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AE8u;
        // 0x2b9aec: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ae8) {
            ctx->pc = 0x2B9B00u;
            goto label_2b9b00;
        }
    }
    ctx->pc = 0x2B9AF0u;
    // 0x2b9af0: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x2b9af0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x2b9af4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b9af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b9af8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9AF8u;
    {
        const bool branch_taken_0x2b9af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AF8u;
        // 0x2b9afc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9af8) {
            ctx->pc = 0x2B9B04u;
            goto label_2b9b04;
        }
    }
    ctx->pc = 0x2B9B00u;
label_2b9b00:
    // 0x2b9b00: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2b9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2b9b04:
    // 0x2b9b04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b08: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B9B08u;
    SET_GPR_U32(ctx, 31, 0x2B9B10u);
    ctx->pc = 0x2B9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B08u;
    // 0x2b9b0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B9B08u, 0x2B9B10u)) {
        return;
    }
    ctx->pc = 0x2B9B10u;
label_2b9b10:
    // 0x2b9b10: 0x960200ce  lhu         $v0, 0xCE($s0)
    ctx->pc = 0x2b9b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 206)));
    // 0x2b9b14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b9b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b9b18: 0x14400167  bnez        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x2B9B18u;
    {
        const bool branch_taken_0x2b9b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B18u;
        // 0x2b9b1c: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b18) {
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2B9B20u;
    // 0x2b9b20: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2b9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2b9b24: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2b9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2b9b28: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2b9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2b9b2c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2b9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2b9b30: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2b9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2b9b34: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B9B34u;
    {
        const bool branch_taken_0x2b9b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B34u;
        // 0x2b9b38: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b34) {
            ctx->pc = 0x2B9BB0u;
            goto label_2b9bb0;
        }
    }
    ctx->pc = 0x2B9B3Cu;
    // 0x2b9b3c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b9b40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b9b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b9b44: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B9B44u;
    {
        const bool branch_taken_0x2b9b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b44) {
            ctx->pc = 0x2B9B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9B44u;
            // 0x2b9b48: 0xc6050004  lwc1        $f5, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9BB8u;
            goto label_2b9bb8;
        }
    }
    ctx->pc = 0x2B9B4Cu;
    // 0x2b9b4c: 0x6a230013  ldl         $v1, 0x13($s1)
    ctx->pc = 0x2b9b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b9b50: 0x6e23000c  ldr         $v1, 0xC($s1)
    ctx->pc = 0x2b9b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b9b54: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2b9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b9b58: 0xb3a30077  sdl         $v1, 0x77($sp)
    ctx->pc = 0x2b9b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9b5c: 0xb7a30070  sdr         $v1, 0x70($sp)
    ctx->pc = 0x2b9b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9b60: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2b9b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2b9b64: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2b9b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9b68: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b9b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9b6c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2b9b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9b70: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x2b9b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9b74: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2b9b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9b78: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x2b9b78u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b9b7c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2b9b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9b80: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x2b9b80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2b9b84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b9b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9b88: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2b9b88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b9b8c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b9b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b9b90: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2b9b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2b9b94: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2b9b94u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2b9b98: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2b9b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2b9b9c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b9b9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b9ba0: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x2b9ba0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b9ba4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2b9ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b9ba8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2B9BA8u;
    {
        const bool branch_taken_0x2b9ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BA8u;
        // 0x2b9bac: 0xe7a20084  swc1        $f2, 0x84($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ba8) {
            ctx->pc = 0x2B9DE0u;
            goto label_2b9de0;
        }
    }
    ctx->pc = 0x2B9BB0u;
label_2b9bb0:
    // 0x2b9bb0: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x2b9bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b9bb4: 0x0  nop
    ctx->pc = 0x2b9bb4u;
    // NOP
label_2b9bb8:
    // 0x2b9bb8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b9bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9bbc: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x2b9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9bc0: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x2b9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9bc4: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x2b9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b9bc8: 0x460428c2  mul.s       $f3, $f5, $f4
    ctx->pc = 0x2b9bc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b9bcc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2b9bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9bd0: 0x46020982  mul.s       $f6, $f1, $f2
    ctx->pc = 0x2b9bd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b9bd4: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x2b9bd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2b9bd8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2b9bd8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b9bdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b9bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9be0: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2b9be0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2b9be4: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2b9be4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2b9be8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2b9be8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2b9bec: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2b9becu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2b9bf0: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x2b9bf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2b9bf4: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2b9bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2b9bf8: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2b9bf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2b9bfc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2b9bfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2b9c00: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b9c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b9c04: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b9c04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b9c08: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b9c08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b9c0c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2b9c0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b9c10: 0x46171834  c.lt.s      $f3, $f23
    ctx->pc = 0x2b9c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9c14: 0x0  nop
    ctx->pc = 0x2b9c14u;
    // NOP
    // 0x2b9c18: 0x45020041  bc1fl       . + 4 + (0x41 << 2)
    ctx->pc = 0x2B9C18u;
    {
        const bool branch_taken_0x2b9c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9c18) {
            ctx->pc = 0x2B9C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9C18u;
            // 0x2b9c1c: 0xc7a500e0  lwc1        $f5, 0xE0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D20u;
            goto label_2b9d20;
        }
    }
    ctx->pc = 0x2B9C20u;
    // 0x2b9c20: 0x46003805  abs.s       $f0, $f7
    ctx->pc = 0x2b9c20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[7]);
    // 0x2b9c24: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b9c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9c28: 0x0  nop
    ctx->pc = 0x2b9c28u;
    // NOP
    // 0x2b9c2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9C2Cu;
    {
        const bool branch_taken_0x2b9c2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C2Cu;
        // 0x2b9c30: 0x26e2e700  addiu       $v0, $s7, -0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c2c) {
            ctx->pc = 0x2B9C38u;
            goto label_2b9c38;
        }
    }
    ctx->pc = 0x2B9C34u;
    // 0x2b9c34: 0x26c2e710  addiu       $v0, $s6, -0x18F0
    ctx->pc = 0x2b9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960912));
label_2b9c38:
    // 0x2b9c38: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2b9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9c3c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b9c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9c40: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9c44: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x2b9c44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b9c48: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2b9c48u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2b9c4c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b9c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9c50: 0x0  nop
    ctx->pc = 0x2b9c50u;
    // NOP
    // 0x2b9c54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9C54u;
    {
        const bool branch_taken_0x2b9c54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C54u;
        // 0x2b9c58: 0x26e2e700  addiu       $v0, $s7, -0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c54) {
            ctx->pc = 0x2B9C60u;
            goto label_2b9c60;
        }
    }
    ctx->pc = 0x2B9C5Cu;
    // 0x2b9c5c: 0x26c2e710  addiu       $v0, $s6, -0x18F0
    ctx->pc = 0x2b9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960912));
label_2b9c60:
    // 0x2b9c60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b9c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9c64: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b9c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9c68: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2b9c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9c6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b9c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9c70: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2b9c70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2b9c74: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x2b9c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2b9c78: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2b9c78u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2b9c7c: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x2b9c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9c80: 0x0  nop
    ctx->pc = 0x2b9c80u;
    // NOP
    // 0x2b9c84: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9C84u;
    {
        const bool branch_taken_0x2b9c84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C84u;
        // 0x2b9c88: 0x26e2e700  addiu       $v0, $s7, -0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c84) {
            ctx->pc = 0x2B9C90u;
            goto label_2b9c90;
        }
    }
    ctx->pc = 0x2B9C8Cu;
    // 0x2b9c8c: 0x26c2e710  addiu       $v0, $s6, -0x18F0
    ctx->pc = 0x2b9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960912));
label_2b9c90:
    // 0x2b9c90: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b9c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9c94: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b9c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9c98: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9c9c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2b9c9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b9ca0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2b9ca0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2b9ca4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b9ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9ca8: 0x0  nop
    ctx->pc = 0x2b9ca8u;
    // NOP
    // 0x2b9cac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9CACu;
    {
        const bool branch_taken_0x2b9cac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CACu;
        // 0x2b9cb0: 0x26e2e700  addiu       $v0, $s7, -0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cac) {
            ctx->pc = 0x2B9CB8u;
            goto label_2b9cb8;
        }
    }
    ctx->pc = 0x2B9CB4u;
    // 0x2b9cb4: 0x26c2e710  addiu       $v0, $s6, -0x18F0
    ctx->pc = 0x2b9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960912));
label_2b9cb8:
    // 0x2b9cb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b9cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9cbc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2b9cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9cc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b9cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9cc4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2b9cc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b9cc8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2b9cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2b9ccc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2b9cccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2b9cd0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2b9cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9cd4: 0x0  nop
    ctx->pc = 0x2b9cd4u;
    // NOP
    // 0x2b9cd8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9CD8u;
    {
        const bool branch_taken_0x2b9cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD8u;
        // 0x2b9cdc: 0x26e2e700  addiu       $v0, $s7, -0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cd8) {
            ctx->pc = 0x2B9CE4u;
            goto label_2b9ce4;
        }
    }
    ctx->pc = 0x2B9CE0u;
    // 0x2b9ce0: 0x26c2e710  addiu       $v0, $s6, -0x18F0
    ctx->pc = 0x2b9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960912));
label_2b9ce4:
    // 0x2b9ce4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b9ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9ce8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b9ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9cec: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2b9cecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9cf0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2b9cf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2b9cf4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b9cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9cf8: 0x0  nop
    ctx->pc = 0x2b9cf8u;
    // NOP
    // 0x2b9cfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9CFCu;
    {
        const bool branch_taken_0x2b9cfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CFCu;
        // 0x2b9d00: 0x26e2e700  addiu       $v0, $s7, -0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cfc) {
            ctx->pc = 0x2B9D08u;
            goto label_2b9d08;
        }
    }
    ctx->pc = 0x2B9D04u;
    // 0x2b9d04: 0x26c2e710  addiu       $v0, $s6, -0x18F0
    ctx->pc = 0x2b9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960912));
label_2b9d08:
    // 0x2b9d08: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9d0c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b9d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b9d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9d14: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2b9d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b9d18: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2b9d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2b9d1c: 0xc7a500e0  lwc1        $f5, 0xE0($sp)
    ctx->pc = 0x2b9d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2b9d20:
    // 0x2b9d20: 0xc7a700e4  lwc1        $f7, 0xE4($sp)
    ctx->pc = 0x2b9d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b9d24: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2b9d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2b9d28: 0xc7a600e8  lwc1        $f6, 0xE8($sp)
    ctx->pc = 0x2b9d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9d2c: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x2b9d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2b9d30: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x2b9d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2b9d34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b9d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b9d38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b9d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b9d3c: 0x4600e816  rsqrt.s     $f0, $f29, $f0
    ctx->pc = 0x2b9d3cu;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[29], ctx->f[0]);
    // 0x2b9d40: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2b9d40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b9d44: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2b9d44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b9d48: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x2b9d48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2b9d4c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2b9d4cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2b9d50: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x2b9d50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2b9d54: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x2b9d54u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2b9d58: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2b9d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9d5c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b9d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9d60: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x2b9d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b9d64: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2b9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9d68: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x2b9d68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2b9d6c: 0x46002a02  mul.s       $f8, $f5, $f0
    ctx->pc = 0x2b9d6cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b9d70: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x2b9d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2b9d74: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2b9d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b9d78: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2b9d78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2b9d7c: 0x46014201  sub.s       $f8, $f8, $f1
    ctx->pc = 0x2b9d7cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x2b9d80: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2b9d80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2b9d84: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2b9d84u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2b9d88: 0xe7a800f8  swc1        $f8, 0xF8($sp)
    ctx->pc = 0x2b9d88u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b9d8c: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x2b9d8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b9d90: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b9d90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b9d94: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x2b9d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2b9d98: 0x46033840  add.s       $f1, $f7, $f3
    ctx->pc = 0x2b9d98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x2b9d9c: 0x46083080  add.s       $f2, $f6, $f8
    ctx->pc = 0x2b9d9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2b9da0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b9da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b9da4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2b9da4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2b9da8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2b9da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b9dac: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2b9dacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2b9db0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2b9db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b9db4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2b9db4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b9db8: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x2b9db8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2b9dbc: 0x460339c1  sub.s       $f7, $f7, $f3
    ctx->pc = 0x2b9dbcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x2b9dc0: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x2b9dc0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x2b9dc4: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2b9dc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2b9dc8: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x2b9dc8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x2b9dcc: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x2b9dccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b9dd0: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x2b9dd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x2b9dd4: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x2b9dd4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2b9dd8: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x2b9dd8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b9ddc: 0x0  nop
    ctx->pc = 0x2b9ddcu;
    // NOP
label_2b9de0:
    // 0x2b9de0: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B9DE0u;
    {
        const bool branch_taken_0x2b9de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9de0) {
            ctx->pc = 0x2B9DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DE0u;
            // 0x2b9de4: 0xc60000c4  lwc1        $f0, 0xC4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E0Cu;
            goto label_2b9e0c;
        }
    }
    ctx->pc = 0x2B9DE8u;
    // 0x2b9de8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b9dec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b9decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b9df0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9DF0u;
    {
        const bool branch_taken_0x2b9df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9df0) {
            ctx->pc = 0x2B9DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DF0u;
            // 0x2b9df4: 0xc60000c4  lwc1        $f0, 0xC4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E0Cu;
            goto label_2b9e0c;
        }
    }
    ctx->pc = 0x2B9DF8u;
    // 0x2b9df8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2b9df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9dfc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b9dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b9e00: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2b9e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9E04u;
    {
        const bool branch_taken_0x2b9e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E04u;
        // 0x2b9e08: 0xe7a1005c  swc1        $f1, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e04) {
            ctx->pc = 0x2B9E1Cu;
            goto label_2b9e1c;
        }
    }
    ctx->pc = 0x2B9E0Cu;
label_2b9e0c:
    // 0x2b9e0c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2b9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2b9e10: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2b9e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2b9e14: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b9e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b9e18: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b9e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2b9e1c:
    // 0x2b9e1c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B9E1Cu;
    {
        const bool branch_taken_0x2b9e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E1Cu;
        // 0x2b9e20: 0xc7a0005c  lwc1        $f0, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e1c) {
            ctx->pc = 0x2B9E48u;
            goto label_2b9e48;
        }
    }
    ctx->pc = 0x2B9E24u;
    // 0x2b9e24: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b9e28: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b9e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b9e2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9E2Cu;
    {
        const bool branch_taken_0x2b9e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e2c) {
            ctx->pc = 0x2B9E48u;
            goto label_2b9e48;
        }
    }
    ctx->pc = 0x2B9E34u;
    // 0x2b9e34: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2b9e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9e38: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2b9e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2b9e3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b9e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b9e40: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b9e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2b9e44: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9e48:
    // 0x2b9e48: 0x4616b834  c.lt.s      $f23, $f22
    ctx->pc = 0x2b9e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9e4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b9e4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b9e50: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2B9E50u;
    {
        const bool branch_taken_0x2b9e50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E50u;
        // 0x2b9e54: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e50) {
            ctx->pc = 0x2B9E88u;
            goto label_2b9e88;
        }
    }
    ctx->pc = 0x2B9E58u;
    // 0x2b9e58: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2b9e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9e5c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2b9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9e60: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b9e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9e64: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2b9e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9e68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b9e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9e6c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2b9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9e70: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b9e70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b9e74: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2b9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9e78: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b9e78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b9e7c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b9e7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b9e80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b9e80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b9e84: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b9e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b9e88:
    // 0x2b9e88: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B9E88u;
    {
        const bool branch_taken_0x2b9e88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e88) {
            ctx->pc = 0x2B9EF0u;
            goto label_2b9ef0;
        }
    }
    ctx->pc = 0x2B9E90u;
    // 0x2b9e90: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x2b9e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b9e94: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x2b9e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b9e98: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2b9e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2b9e9c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2b9e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9ea0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2b9ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9ea4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9ea8: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x2b9ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9eac: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2b9eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9eb0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2b9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9eb4: 0xc7a60078  lwc1        $f6, 0x78($sp)
    ctx->pc = 0x2b9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9eb8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2b9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9ebc: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x2b9ebcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b9ec0: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2b9ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9ec4: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x2b9ec4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2b9ec8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b9ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9ecc: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2b9eccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b9ed0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b9ed0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b9ed4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2b9ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2b9ed8: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2b9ed8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2b9edc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2b9edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2b9ee0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b9ee0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b9ee4: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2b9ee4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b9ee8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b9ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b9eec: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2b9eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2b9ef0:
    // 0x2b9ef0: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B9EF0u;
    {
        const bool branch_taken_0x2b9ef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EF0u;
        // 0x2b9ef4: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ef0) {
            ctx->pc = 0x2B9F58u;
            goto label_2b9f58;
        }
    }
    ctx->pc = 0x2B9EF8u;
    // 0x2b9ef8: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x2b9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9efc: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x2b9efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9f00: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2b9f00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2b9f04: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2b9f04u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2b9f08: 0x46002147  neg.s       $f5, $f4
    ctx->pc = 0x2b9f08u;
    ctx->f[5] = FPU_NEG_S(ctx->f[4]);
    // 0x2b9f0c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b9f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b9f10: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2b9f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b9f14: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2b9f14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b9f18: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2b9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9f1c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2b9f1cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b9f20: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9f24: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b9f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b9f28: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x2b9f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b9f2c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b9f2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b9f30: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2b9f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9f34: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2b9f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2b9f38: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2b9f38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2b9f3c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2b9f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2b9f40: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2b9f40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b9f44: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2b9f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2b9f48: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2b9f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b9f4c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2b9f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b9f50: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2b9f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b9f54: 0x0  nop
    ctx->pc = 0x2b9f54u;
    // NOP
label_2b9f58:
    // 0x2b9f58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f5c: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B9F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F64u);
    ctx->pc = 0x2B9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F5Cu;
    // 0x2b9f60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B9F5Cu, 0x2B9F64u)) {
        return;
    }
    ctx->pc = 0x2B9F64u;
label_2b9f64:
    // 0x2b9f64: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B9F64u;
    {
        const bool branch_taken_0x2b9f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f64) {
            ctx->pc = 0x2B9F98u;
            goto label_2b9f98;
        }
    }
    ctx->pc = 0x2B9F6Cu;
    // 0x2b9f6c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b9f70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b9f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b9f74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9F74u;
    {
        const bool branch_taken_0x2b9f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f74) {
            ctx->pc = 0x2B9F98u;
            goto label_2b9f98;
        }
    }
    ctx->pc = 0x2B9F7Cu;
    // 0x2b9f7c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2b9f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9f80: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b9f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b9f84: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2b9f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9f88: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2b9f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2b9f8c: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2b9f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9f90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b9f90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b9f94: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2b9f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2b9f98:
    // 0x2b9f98: 0x4616b834  c.lt.s      $f23, $f22
    ctx->pc = 0x2b9f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9f9c: 0x0  nop
    ctx->pc = 0x2b9f9cu;
    // NOP
    // 0x2b9fa0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2B9FA0u;
    {
        const bool branch_taken_0x2b9fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA0u;
        // 0x2b9fa4: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fa0) {
            ctx->pc = 0x2B9FD4u;
            goto label_2b9fd4;
        }
    }
    ctx->pc = 0x2B9FA8u;
    // 0x2b9fa8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2b9fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9fac: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b9facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9fb0: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x2b9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9fb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b9fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9fb8: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2b9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9fbc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b9fbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b9fc0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2b9fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9fc4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b9fc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b9fc8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b9fc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b9fcc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b9fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b9fd0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b9fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b9fd4:
    // 0x2b9fd4: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B9FD4u;
    {
        const bool branch_taken_0x2b9fd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9fd4) {
            ctx->pc = 0x2BA040u;
            goto label_2ba040;
        }
    }
    ctx->pc = 0x2B9FDCu;
    // 0x2b9fdc: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x2b9fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b9fe0: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x2b9fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b9fe4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2b9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2b9fe8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2b9fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9fec: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2b9fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9ff0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9ff4: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x2b9ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9ff8: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2b9ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9ffc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2b9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba000: 0xc7a60088  lwc1        $f6, 0x88($sp)
    ctx->pc = 0x2ba000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ba004: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2ba004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba008: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x2ba008u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ba00c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x2ba00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba010: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x2ba010u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2ba014: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ba014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba018: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2ba018u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2ba01c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ba01cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ba020: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2ba020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2ba024: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2ba024u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2ba028: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2ba028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2ba02c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2ba02cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ba030: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2ba030u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ba034: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2ba034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ba038: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2ba038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ba03c: 0x0  nop
    ctx->pc = 0x2ba03cu;
    // NOP
label_2ba040:
    // 0x2ba040: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BA040u;
    {
        const bool branch_taken_0x2ba040 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA040u;
        // 0x2ba044: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba040) {
            ctx->pc = 0x2BA0A8u;
            goto label_2ba0a8;
        }
    }
    ctx->pc = 0x2BA048u;
    // 0x2ba048: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x2ba048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba04c: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x2ba04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ba050: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2ba050u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2ba054: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2ba054u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2ba058: 0x46002147  neg.s       $f5, $f4
    ctx->pc = 0x2ba058u;
    ctx->f[5] = FPU_NEG_S(ctx->f[4]);
    // 0x2ba05c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2ba05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ba060: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2ba060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ba064: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2ba064u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ba068: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2ba068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba06c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2ba06cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ba070: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ba070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba074: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2ba074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ba078: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x2ba078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ba07c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ba07cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ba080: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2ba080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba084: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2ba084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2ba088: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2ba088u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2ba08c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2ba08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2ba090: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2ba090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2ba094: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2ba094u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2ba098: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2ba098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ba09c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2ba09cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ba0a0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2ba0a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ba0a4: 0x0  nop
    ctx->pc = 0x2ba0a4u;
    // NOP
label_2ba0a8:
    // 0x2ba0a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ba0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba0ac: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BA0ACu;
    SET_GPR_U32(ctx, 31, 0x2BA0B4u);
    ctx->pc = 0x2BA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0ACu;
    // 0x2ba0b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BA0ACu, 0x2BA0B4u)) {
        return;
    }
    ctx->pc = 0x2BA0B4u;
label_2ba0b4:
    // 0x2ba0b4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2ba0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2ba0b8:
    // 0x2ba0b8: 0x26520028  addiu       $s2, $s2, 0x28
    ctx->pc = 0x2ba0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x2ba0bc: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2ba0c0: 0x27de0028  addiu       $fp, $fp, 0x28
    ctx->pc = 0x2ba0c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x2ba0c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ba0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ba0c8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ba0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ba0cc: 0x1440fdd4  bnez        $v0, . + 4 + (-0x22C << 2)
    ctx->pc = 0x2BA0CCu;
    {
        const bool branch_taken_0x2ba0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0CCu;
        // 0x2ba0d0: 0xafa30108  sw          $v1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0cc) {
            ctx->pc = 0x2B9820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9820;
        }
    }
    ctx->pc = 0x2BA0D4u;
label_2ba0d4:
    // 0x2ba0d4: 0xc0ae4f8  jal         func_2B93E0
    ctx->pc = 0x2BA0D4u;
    SET_GPR_U32(ctx, 31, 0x2BA0DCu);
    ctx->pc = 0x2BA0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0D4u;
    // 0x2ba0d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B93E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B93E0u, 0x2BA0D4u, 0x2BA0DCu)) {
        return;
    }
    ctx->pc = 0x2BA0DCu;
label_2ba0dc:
    // 0x2ba0dc: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x2ba0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ba0e0: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x2ba0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ba0e4: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x2ba0e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ba0e8: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x2ba0e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ba0ec: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x2ba0ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ba0f0: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x2ba0f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ba0f4: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x2ba0f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2ba0f8: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x2ba0f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2ba0fc: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x2ba0fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2ba100: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2ba100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ba104: 0xc7be0210  lwc1        $f30, 0x210($sp)
    ctx->pc = 0x2ba104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2ba108: 0xc7bd0208  lwc1        $f29, 0x208($sp)
    ctx->pc = 0x2ba108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2ba10c: 0xc7bc0200  lwc1        $f28, 0x200($sp)
    ctx->pc = 0x2ba10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2ba110: 0xc7bb01f8  lwc1        $f27, 0x1F8($sp)
    ctx->pc = 0x2ba110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2ba114: 0xc7ba01f0  lwc1        $f26, 0x1F0($sp)
    ctx->pc = 0x2ba114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2ba118: 0xc7b901e8  lwc1        $f25, 0x1E8($sp)
    ctx->pc = 0x2ba118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ba11c: 0xc7b801e0  lwc1        $f24, 0x1E0($sp)
    ctx->pc = 0x2ba11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ba120: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x2ba120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ba124: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x2ba124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ba128: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2ba128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ba12c: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2ba12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ba130: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA130u;
        // 0x2ba134: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA138u;
}
