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

// Function: sub_001CD678
// Address: 0x1cd678 - 0x1cd870
void sub_001CD678_0x1cd678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD678_0x1cd678");
#endif

    switch (ctx->pc) {
        case 0x1cd678u: goto label_1cd678;
        case 0x1cd67cu: goto label_1cd67c;
        case 0x1cd680u: goto label_1cd680;
        case 0x1cd684u: goto label_1cd684;
        case 0x1cd688u: goto label_1cd688;
        case 0x1cd68cu: goto label_1cd68c;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd694u: goto label_1cd694;
        case 0x1cd698u: goto label_1cd698;
        case 0x1cd69cu: goto label_1cd69c;
        case 0x1cd6a0u: goto label_1cd6a0;
        case 0x1cd6a4u: goto label_1cd6a4;
        case 0x1cd6a8u: goto label_1cd6a8;
        case 0x1cd6acu: goto label_1cd6ac;
        case 0x1cd6b0u: goto label_1cd6b0;
        case 0x1cd6b4u: goto label_1cd6b4;
        case 0x1cd6b8u: goto label_1cd6b8;
        case 0x1cd6bcu: goto label_1cd6bc;
        case 0x1cd6c0u: goto label_1cd6c0;
        case 0x1cd6c4u: goto label_1cd6c4;
        case 0x1cd6c8u: goto label_1cd6c8;
        case 0x1cd6ccu: goto label_1cd6cc;
        case 0x1cd6d0u: goto label_1cd6d0;
        case 0x1cd6d4u: goto label_1cd6d4;
        case 0x1cd6d8u: goto label_1cd6d8;
        case 0x1cd6dcu: goto label_1cd6dc;
        case 0x1cd6e0u: goto label_1cd6e0;
        case 0x1cd6e4u: goto label_1cd6e4;
        case 0x1cd6e8u: goto label_1cd6e8;
        case 0x1cd6ecu: goto label_1cd6ec;
        case 0x1cd6f0u: goto label_1cd6f0;
        case 0x1cd6f4u: goto label_1cd6f4;
        case 0x1cd6f8u: goto label_1cd6f8;
        case 0x1cd6fcu: goto label_1cd6fc;
        case 0x1cd700u: goto label_1cd700;
        case 0x1cd704u: goto label_1cd704;
        case 0x1cd708u: goto label_1cd708;
        case 0x1cd70cu: goto label_1cd70c;
        case 0x1cd710u: goto label_1cd710;
        case 0x1cd714u: goto label_1cd714;
        case 0x1cd718u: goto label_1cd718;
        case 0x1cd71cu: goto label_1cd71c;
        case 0x1cd720u: goto label_1cd720;
        case 0x1cd724u: goto label_1cd724;
        case 0x1cd728u: goto label_1cd728;
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd730u: goto label_1cd730;
        case 0x1cd734u: goto label_1cd734;
        case 0x1cd738u: goto label_1cd738;
        case 0x1cd73cu: goto label_1cd73c;
        case 0x1cd740u: goto label_1cd740;
        case 0x1cd744u: goto label_1cd744;
        case 0x1cd748u: goto label_1cd748;
        case 0x1cd74cu: goto label_1cd74c;
        case 0x1cd750u: goto label_1cd750;
        case 0x1cd754u: goto label_1cd754;
        case 0x1cd758u: goto label_1cd758;
        case 0x1cd75cu: goto label_1cd75c;
        case 0x1cd760u: goto label_1cd760;
        case 0x1cd764u: goto label_1cd764;
        case 0x1cd768u: goto label_1cd768;
        case 0x1cd76cu: goto label_1cd76c;
        case 0x1cd770u: goto label_1cd770;
        case 0x1cd774u: goto label_1cd774;
        case 0x1cd778u: goto label_1cd778;
        case 0x1cd77cu: goto label_1cd77c;
        case 0x1cd780u: goto label_1cd780;
        case 0x1cd784u: goto label_1cd784;
        case 0x1cd788u: goto label_1cd788;
        case 0x1cd78cu: goto label_1cd78c;
        case 0x1cd790u: goto label_1cd790;
        case 0x1cd794u: goto label_1cd794;
        case 0x1cd798u: goto label_1cd798;
        case 0x1cd79cu: goto label_1cd79c;
        case 0x1cd7a0u: goto label_1cd7a0;
        case 0x1cd7a4u: goto label_1cd7a4;
        case 0x1cd7a8u: goto label_1cd7a8;
        case 0x1cd7acu: goto label_1cd7ac;
        case 0x1cd7b0u: goto label_1cd7b0;
        case 0x1cd7b4u: goto label_1cd7b4;
        case 0x1cd7b8u: goto label_1cd7b8;
        case 0x1cd7bcu: goto label_1cd7bc;
        case 0x1cd7c0u: goto label_1cd7c0;
        case 0x1cd7c4u: goto label_1cd7c4;
        case 0x1cd7c8u: goto label_1cd7c8;
        case 0x1cd7ccu: goto label_1cd7cc;
        case 0x1cd7d0u: goto label_1cd7d0;
        case 0x1cd7d4u: goto label_1cd7d4;
        case 0x1cd7d8u: goto label_1cd7d8;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7e0u: goto label_1cd7e0;
        case 0x1cd7e4u: goto label_1cd7e4;
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd7ecu: goto label_1cd7ec;
        case 0x1cd7f0u: goto label_1cd7f0;
        case 0x1cd7f4u: goto label_1cd7f4;
        case 0x1cd7f8u: goto label_1cd7f8;
        case 0x1cd7fcu: goto label_1cd7fc;
        case 0x1cd800u: goto label_1cd800;
        case 0x1cd804u: goto label_1cd804;
        case 0x1cd808u: goto label_1cd808;
        case 0x1cd80cu: goto label_1cd80c;
        case 0x1cd810u: goto label_1cd810;
        case 0x1cd814u: goto label_1cd814;
        case 0x1cd818u: goto label_1cd818;
        case 0x1cd81cu: goto label_1cd81c;
        case 0x1cd820u: goto label_1cd820;
        case 0x1cd824u: goto label_1cd824;
        case 0x1cd828u: goto label_1cd828;
        case 0x1cd82cu: goto label_1cd82c;
        case 0x1cd830u: goto label_1cd830;
        case 0x1cd834u: goto label_1cd834;
        case 0x1cd838u: goto label_1cd838;
        case 0x1cd83cu: goto label_1cd83c;
        case 0x1cd840u: goto label_1cd840;
        case 0x1cd844u: goto label_1cd844;
        case 0x1cd848u: goto label_1cd848;
        case 0x1cd84cu: goto label_1cd84c;
        case 0x1cd850u: goto label_1cd850;
        case 0x1cd854u: goto label_1cd854;
        case 0x1cd858u: goto label_1cd858;
        case 0x1cd85cu: goto label_1cd85c;
        case 0x1cd860u: goto label_1cd860;
        case 0x1cd864u: goto label_1cd864;
        case 0x1cd868u: goto label_1cd868;
        case 0x1cd86cu: goto label_1cd86c;
        default: break;
    }

    ctx->pc = 0x1cd678u;

label_1cd678:
    // 0x1cd678: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1cd678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1cd67c:
    // 0x1cd67c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cd67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1cd680:
    // 0x1cd680: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1cd680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1cd684:
    // 0x1cd684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd688:
    // 0x1cd688: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1cd688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1cd68c:
    // 0x1cd68c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cd68cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd690:
    // 0x1cd690: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cd690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1cd694:
    // 0x1cd694: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1cd694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1cd698:
    // 0x1cd698: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1cd698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1cd69c:
    // 0x1cd69c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cd69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1cd6a0:
    // 0x1cd6a0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1cd6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1cd6a4:
    // 0x1cd6a4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1cd6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1cd6a8:
    // 0x1cd6a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1cd6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1cd6ac:
    // 0x1cd6ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cd6b0:
    // 0x1cd6b0: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1cd6b4:
    // 0x1cd6b4: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_1cd6b8:
    if (ctx->pc == 0x1CD6B8u) {
        ctx->pc = 0x1CD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6B4u;
        // 0x1cd6b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD6BCu;
        goto label_1cd6bc;
    }
    ctx->pc = 0x1CD6B4u;
    {
        const bool branch_taken_0x1cd6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6B4u;
        // 0x1cd6b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6b4) {
            ctx->pc = 0x1CD83Cu;
            goto label_1cd83c;
        }
    }
    ctx->pc = 0x1CD6BCu;
label_1cd6bc:
    // 0x1cd6bc: 0xc06ba6c  jal         func_1AE9B0
label_1cd6c0:
    if (ctx->pc == 0x1CD6C0u) {
        ctx->pc = 0x1CD6C4u;
        goto label_1cd6c4;
    }
    ctx->pc = 0x1CD6BCu;
    SET_GPR_U32(ctx, 31, 0x1CD6C4u);
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1CD6BCu, 0x1CD6C4u)) {
        return;
    }
    ctx->pc = 0x1CD6C4u;
label_1cd6c4:
    // 0x1cd6c4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1cd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cd6c8:
    // 0x1cd6c8: 0x16820040  bne         $s4, $v0, . + 4 + (0x40 << 2)
label_1cd6cc:
    if (ctx->pc == 0x1CD6CCu) {
        ctx->pc = 0x1CD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6C8u;
        // 0x1cd6cc: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD6D0u;
        goto label_1cd6d0;
    }
    ctx->pc = 0x1CD6C8u;
    {
        const bool branch_taken_0x1cd6c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6C8u;
        // 0x1cd6cc: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6c8) {
            ctx->pc = 0x1CD7CCu;
            goto label_1cd7cc;
        }
    }
    ctx->pc = 0x1CD6D0u;
label_1cd6d0:
    // 0x1cd6d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1cd6d4:
    // 0x1cd6d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cd6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6d8:
    // 0x1cd6d8: 0x245201c8  addiu       $s2, $v0, 0x1C8
    ctx->pc = 0x1cd6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
label_1cd6dc:
    // 0x1cd6dc: 0x27b70004  addiu       $s7, $sp, 0x4
    ctx->pc = 0x1cd6dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1cd6e0:
    // 0x1cd6e0: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x1cd6e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6e4:
    // 0x1cd6e4: 0x27b60008  addiu       $s6, $sp, 0x8
    ctx->pc = 0x1cd6e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1cd6e8:
    // 0x1cd6e8: 0x27b5000c  addiu       $s5, $sp, 0xC
    ctx->pc = 0x1cd6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1cd6ec:
    // 0x1cd6ec: 0x26530004  addiu       $s3, $s2, 0x4
    ctx->pc = 0x1cd6ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1cd6f0:
    // 0x1cd6f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6f4:
    // 0x1cd6f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6f8:
    // 0x1cd6f8: 0xc0c493d  jal         func_3124F4
label_1cd6fc:
    if (ctx->pc == 0x1CD6FCu) {
        ctx->pc = 0x1CD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6F8u;
        // 0x1cd6fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD700u;
        goto label_1cd700;
    }
    ctx->pc = 0x1CD6F8u;
    SET_GPR_U32(ctx, 31, 0x1CD700u);
    ctx->pc = 0x1CD6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6F8u;
    // 0x1cd6fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CD6F8u, 0x1CD700u)) {
        return;
    }
    ctx->pc = 0x1CD700u;
label_1cd700:
    // 0x1cd700: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1cd704:
    // 0x1cd704: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1cd704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cd708:
    // 0x1cd708: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1cd708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1cd70c:
    // 0x1cd70c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1cd70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd710:
    // 0x1cd710: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cd710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cd714:
    // 0x1cd714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd718:
    // 0x1cd718: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1cd718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd71c:
    // 0x1cd71c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1cd71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cd720:
    // 0x1cd720: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1cd720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cd724:
    // 0x1cd724: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1cd724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cd728:
    // 0x1cd728: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1cd728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cd72c:
    // 0x1cd72c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1cd72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1cd730:
    // 0x1cd730: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1cd730u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cd734:
    // 0x1cd734: 0xc06cda0  jal         func_1B3680
label_1cd738:
    if (ctx->pc == 0x1CD738u) {
        ctx->pc = 0x1CD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD734u;
        // 0x1cd738: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD73Cu;
        goto label_1cd73c;
    }
    ctx->pc = 0x1CD734u;
    SET_GPR_U32(ctx, 31, 0x1CD73Cu);
    ctx->pc = 0x1CD738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD734u;
    // 0x1cd738: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1CD734u, 0x1CD73Cu)) {
        return;
    }
    ctx->pc = 0x1CD73Cu;
label_1cd73c:
    // 0x1cd73c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cd73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cd740:
    // 0x1cd740: 0xc06dc32  jal         func_1B70C8
label_1cd744:
    if (ctx->pc == 0x1CD744u) {
        ctx->pc = 0x1CD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD740u;
        // 0x1cd744: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD748u;
        goto label_1cd748;
    }
    ctx->pc = 0x1CD740u;
    SET_GPR_U32(ctx, 31, 0x1CD748u);
    ctx->pc = 0x1CD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD740u;
    // 0x1cd744: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1CD740u, 0x1CD748u)) {
        return;
    }
    ctx->pc = 0x1CD748u;
label_1cd748:
    // 0x1cd748: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1cd74c:
    if (ctx->pc == 0x1CD74Cu) {
        ctx->pc = 0x1CD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD748u;
        // 0x1cd74c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD750u;
        goto label_1cd750;
    }
    ctx->pc = 0x1CD748u;
    {
        const bool branch_taken_0x1cd748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd748) {
            ctx->pc = 0x1CD74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD748u;
            // 0x1cd74c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD7B4u;
            goto label_1cd7b4;
        }
    }
    ctx->pc = 0x1CD750u;
label_1cd750:
    // 0x1cd750: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1cd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1cd754:
    // 0x1cd754: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1cd758:
    if (ctx->pc == 0x1CD758u) {
        ctx->pc = 0x1CD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD754u;
        // 0x1cd758: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD75Cu;
        goto label_1cd75c;
    }
    ctx->pc = 0x1CD754u;
    {
        const bool branch_taken_0x1cd754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd754) {
            ctx->pc = 0x1CD758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD754u;
            // 0x1cd758: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD7B4u;
            goto label_1cd7b4;
        }
    }
    ctx->pc = 0x1CD75Cu;
label_1cd75c:
    // 0x1cd75c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd760:
    // 0x1cd760: 0xae110274  sw          $s1, 0x274($s0)
    ctx->pc = 0x1cd760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 17));
label_1cd764:
    // 0x1cd764: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cd764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cd768:
    // 0x1cd768: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_1cd76c:
    if (ctx->pc == 0x1CD76Cu) {
        ctx->pc = 0x1CD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD768u;
        // 0x1cd76c: 0xae030270  sw          $v1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD770u;
        goto label_1cd770;
    }
    ctx->pc = 0x1CD768u;
    {
        const bool branch_taken_0x1cd768 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD768u;
        // 0x1cd76c: 0xae030270  sw          $v1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd768) {
            ctx->pc = 0x1CD794u;
            goto label_1cd794;
        }
    }
    ctx->pc = 0x1CD770u;
label_1cd770:
    // 0x1cd770: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cd770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cd774:
    // 0x1cd774: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cd774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cd778:
    // 0x1cd778: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd77c:
    // 0x1cd77c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd77cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd780:
    // 0x1cd780: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd784:
    // 0x1cd784: 0x60f809  jalr        $v1
label_1cd788:
    if (ctx->pc == 0x1CD788u) {
        ctx->pc = 0x1CD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD784u;
        // 0x1cd788: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD78Cu;
        goto label_1cd78c;
    }
    ctx->pc = 0x1CD784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD78Cu);
        ctx->pc = 0x1CD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD784u;
        // 0x1cd788: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD784u, 0x1CD78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD78Cu;
label_1cd78c:
    // 0x1cd78c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cd790:
    if (ctx->pc == 0x1CD790u) {
        ctx->pc = 0x1CD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD78Cu;
        // 0x1cd790: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD794u;
        goto label_1cd794;
    }
    ctx->pc = 0x1CD78Cu;
    {
        const bool branch_taken_0x1cd78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD78Cu;
        // 0x1cd790: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd78c) {
            ctx->pc = 0x1CD7B4u;
            goto label_1cd7b4;
        }
    }
    ctx->pc = 0x1CD794u;
label_1cd794:
    // 0x1cd794: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cd794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cd798:
    // 0x1cd798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd79c:
    // 0x1cd79c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd7a0:
    // 0x1cd7a0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd7a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd7a4:
    // 0x1cd7a4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd7a8:
    // 0x1cd7a8: 0x60f809  jalr        $v1
label_1cd7ac:
    if (ctx->pc == 0x1CD7ACu) {
        ctx->pc = 0x1CD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7A8u;
        // 0x1cd7ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7B0u;
        goto label_1cd7b0;
    }
    ctx->pc = 0x1CD7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD7B0u);
        ctx->pc = 0x1CD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7A8u;
        // 0x1cd7ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD7A8u, 0x1CD7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD7B0u;
label_1cd7b0:
    // 0x1cd7b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cd7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cd7b4:
    // 0x1cd7b4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1cd7b8:
    // 0x1cd7b8: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1cd7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_1cd7bc:
    // 0x1cd7bc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_1cd7c0:
    if (ctx->pc == 0x1CD7C0u) {
        ctx->pc = 0x1CD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7BCu;
        // 0x1cd7c0: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7C4u;
        goto label_1cd7c4;
    }
    ctx->pc = 0x1CD7BCu;
    {
        const bool branch_taken_0x1cd7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7BCu;
        // 0x1cd7c0: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7bc) {
            ctx->pc = 0x1CD6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd6f0;
        }
    }
    ctx->pc = 0x1CD7C4u;
label_1cd7c4:
    // 0x1cd7c4: 0x10000015  b           . + 4 + (0x15 << 2)
label_1cd7c8:
    if (ctx->pc == 0x1CD7C8u) {
        ctx->pc = 0x1CD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7C4u;
        // 0x1cd7c8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7CCu;
        goto label_1cd7cc;
    }
    ctx->pc = 0x1CD7C4u;
    {
        const bool branch_taken_0x1cd7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7C4u;
        // 0x1cd7c8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7c4) {
            ctx->pc = 0x1CD81Cu;
            goto label_1cd81c;
        }
    }
    ctx->pc = 0x1CD7CCu;
label_1cd7cc:
    // 0x1cd7cc: 0x56820013  bnel        $s4, $v0, . + 4 + (0x13 << 2)
label_1cd7d0:
    if (ctx->pc == 0x1CD7D0u) {
        ctx->pc = 0x1CD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7CCu;
        // 0x1cd7d0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7D4u;
        goto label_1cd7d4;
    }
    ctx->pc = 0x1CD7CCu;
    {
        const bool branch_taken_0x1cd7cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd7cc) {
            ctx->pc = 0x1CD7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD7CCu;
            // 0x1cd7d0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD81Cu;
            goto label_1cd81c;
        }
    }
    ctx->pc = 0x1CD7D4u;
label_1cd7d4:
    // 0x1cd7d4: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1cd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1cd7d8:
    // 0x1cd7d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1cd7dc:
    if (ctx->pc == 0x1CD7DCu) {
        ctx->pc = 0x1CD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7D8u;
        // 0x1cd7dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7E0u;
        goto label_1cd7e0;
    }
    ctx->pc = 0x1CD7D8u;
    {
        const bool branch_taken_0x1cd7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7D8u;
        // 0x1cd7dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7d8) {
            ctx->pc = 0x1CD818u;
            goto label_1cd818;
        }
    }
    ctx->pc = 0x1CD7E0u;
label_1cd7e0:
    // 0x1cd7e0: 0x8e030274  lw          $v1, 0x274($s0)
    ctx->pc = 0x1cd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1cd7e4:
    // 0x1cd7e4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1cd7e8:
    if (ctx->pc == 0x1CD7E8u) {
        ctx->pc = 0x1CD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7E4u;
        // 0x1cd7e8: 0xae000270  sw          $zero, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7ECu;
        goto label_1cd7ec;
    }
    ctx->pc = 0x1CD7E4u;
    {
        const bool branch_taken_0x1cd7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7E4u;
        // 0x1cd7e8: 0xae000270  sw          $zero, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7e4) {
            ctx->pc = 0x1CD810u;
            goto label_1cd810;
        }
    }
    ctx->pc = 0x1CD7ECu;
label_1cd7ec:
    // 0x1cd7ec: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cd7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cd7f0:
    // 0x1cd7f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd7f4:
    // 0x1cd7f4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd7f8:
    // 0x1cd7f8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd7fc:
    // 0x1cd7fc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd800:
    // 0x1cd800: 0x60f809  jalr        $v1
label_1cd804:
    if (ctx->pc == 0x1CD804u) {
        ctx->pc = 0x1CD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD800u;
        // 0x1cd804: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD808u;
        goto label_1cd808;
    }
    ctx->pc = 0x1CD800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD808u);
        ctx->pc = 0x1CD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD800u;
        // 0x1cd804: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD800u, 0x1CD808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD808u;
label_1cd808:
    // 0x1cd808: 0xc0736f0  jal         func_1CDBC0
label_1cd80c:
    if (ctx->pc == 0x1CD80Cu) {
        ctx->pc = 0x1CD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD808u;
        // 0x1cd80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD810u;
        goto label_1cd810;
    }
    ctx->pc = 0x1CD808u;
    SET_GPR_U32(ctx, 31, 0x1CD810u);
    ctx->pc = 0x1CD80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD808u;
    // 0x1cd80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CDBC0u, 0x1CD808u, 0x1CD810u)) {
        return;
    }
    ctx->pc = 0x1CD810u;
label_1cd810:
    // 0x1cd810: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cd810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cd814:
    // 0x1cd814: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1cd814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_1cd818:
    // 0x1cd818: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cd818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cd81c:
    // 0x1cd81c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1cd820:
    if (ctx->pc == 0x1CD820u) {
        ctx->pc = 0x1CD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD81Cu;
        // 0x1cd820: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD824u;
        goto label_1cd824;
    }
    ctx->pc = 0x1CD81Cu;
    {
        const bool branch_taken_0x1cd81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd81c) {
            ctx->pc = 0x1CD820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD81Cu;
            // 0x1cd820: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD840u;
            goto label_1cd840;
        }
    }
    ctx->pc = 0x1CD824u;
label_1cd824:
    // 0x1cd824: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1cd828:
    // 0x1cd828: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1cd82c:
    if (ctx->pc == 0x1CD82Cu) {
        ctx->pc = 0x1CD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD828u;
        // 0x1cd82c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD830u;
        goto label_1cd830;
    }
    ctx->pc = 0x1CD828u;
    {
        const bool branch_taken_0x1cd828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD828u;
        // 0x1cd82c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd828) {
            ctx->pc = 0x1CD840u;
            goto label_1cd840;
        }
    }
    ctx->pc = 0x1CD830u;
label_1cd830:
    // 0x1cd830: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cd830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cd834:
    // 0x1cd834: 0xc06dbc8  jal         func_1B6F20
label_1cd838:
    if (ctx->pc == 0x1CD838u) {
        ctx->pc = 0x1CD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD834u;
        // 0x1cd838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD83Cu;
        goto label_1cd83c;
    }
    ctx->pc = 0x1CD834u;
    SET_GPR_U32(ctx, 31, 0x1CD83Cu);
    ctx->pc = 0x1CD838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD834u;
    // 0x1cd838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1CD834u, 0x1CD83Cu)) {
        return;
    }
    ctx->pc = 0x1CD83Cu;
label_1cd83c:
    // 0x1cd83c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cd83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cd840:
    // 0x1cd840: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cd840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cd844:
    // 0x1cd844: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1cd844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cd848:
    // 0x1cd848: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1cd848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cd84c:
    // 0x1cd84c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1cd84cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cd850:
    // 0x1cd850: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cd850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cd854:
    // 0x1cd854: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1cd854u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd858:
    // 0x1cd858: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1cd858u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd85c:
    // 0x1cd85c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1cd85cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd860:
    // 0x1cd860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd864:
    // 0x1cd864: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1cd864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cd868:
    // 0x1cd868: 0x3e00008  jr          $ra
label_1cd86c:
    if (ctx->pc == 0x1CD86Cu) {
        ctx->pc = 0x1CD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD868u;
        // 0x1cd86c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD870u;
        goto label_fallthrough_0x1cd868;
    }
    ctx->pc = 0x1CD868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD868u;
        // 0x1cd86c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd868:
    ctx->pc = 0x1CD870u;
}
