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

// Function: sub_0025E140
// Address: 0x25e140 - 0x25e440
void sub_0025E140_0x25e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E140_0x25e140");
#endif

    switch (ctx->pc) {
        case 0x25e168u: goto label_25e168;
        case 0x25e190u: goto label_25e190;
        case 0x25e1bcu: goto label_25e1bc;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e214u: goto label_25e214;
        case 0x25e234u: goto label_25e234;
        case 0x25e250u: goto label_25e250;
        case 0x25e274u: goto label_25e274;
        case 0x25e298u: goto label_25e298;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e318u: goto label_25e318;
        case 0x25e334u: goto label_25e334;
        case 0x25e358u: goto label_25e358;
        case 0x25e374u: goto label_25e374;
        case 0x25e398u: goto label_25e398;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e418u: goto label_25e418;
        case 0x25e42cu: goto label_25e42c;
        default: break;
    }

    ctx->pc = 0x25e140u;

    // 0x25e140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e144: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e148: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e14c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25e150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e154: 0x24c6ce50  addiu       $a2, $a2, -0x31B0
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954576));
    // 0x25e158: 0x24e7cf48  addiu       $a3, $a3, -0x30B8
    ctx->pc = 0x25e158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954824));
    // 0x25e15c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x25e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25e160: 0xc0895e6  jal         func_225798
    ctx->pc = 0x25E160u;
    SET_GPR_U32(ctx, 31, 0x25E168u);
    ctx->pc = 0x25E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E160u;
    // 0x25e164: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x25E160u, 0x25E168u)) {
        return;
    }
    ctx->pc = 0x25E168u;
label_25e168:
    // 0x25e168: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e16c: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e16cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e170: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x25e174: 0x24c6d200  addiu       $a2, $a2, -0x2E00
    ctx->pc = 0x25e174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955520));
    // 0x25e178: 0x24e7d2b0  addiu       $a3, $a3, -0x2D50
    ctx->pc = 0x25e178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955696));
    // 0x25e17c: 0x2508d260  addiu       $t0, $t0, -0x2DA0
    ctx->pc = 0x25e17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955616));
    // 0x25e180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e184: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x25e184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x25e188: 0xc089470  jal         func_2251C0
    ctx->pc = 0x25E188u;
    SET_GPR_U32(ctx, 31, 0x25E190u);
    ctx->pc = 0x25E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E188u;
    // 0x25e18c: 0x24050509  addiu       $a1, $zero, 0x509 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2251C0u, 0x25E188u, 0x25E190u)) {
        return;
    }
    ctx->pc = 0x25E190u;
label_25e190:
    // 0x25e190: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e194: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e194u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e198: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25e198u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x25e19c: 0x24c6d6d0  addiu       $a2, $a2, -0x2930
    ctx->pc = 0x25e19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956752));
    // 0x25e1a0: 0x24e7d710  addiu       $a3, $a3, -0x28F0
    ctx->pc = 0x25e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956816));
    // 0x25e1a4: 0x2508d708  addiu       $t0, $t0, -0x28F8
    ctx->pc = 0x25e1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956808));
    // 0x25e1a8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e1a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e1ac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x25e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25e1b0: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x25e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x25e1b4: 0xc09579e  jal         func_255E78
    ctx->pc = 0x25E1B4u;
    SET_GPR_U32(ctx, 31, 0x25E1BCu);
    ctx->pc = 0x25E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1B4u;
    // 0x25e1b8: 0xaf8285f8  sw          $v0, -0x7A08($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x25E1B4u, 0x25E1BCu)) {
        return;
    }
    ctx->pc = 0x25E1BCu;
label_25e1bc:
    // 0x25e1bc: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e1c0: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e1c4: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25e1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x25e1c8: 0x24c6d750  addiu       $a2, $a2, -0x28B0
    ctx->pc = 0x25e1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956880));
    // 0x25e1cc: 0x24e7d7c0  addiu       $a3, $a3, -0x2840
    ctx->pc = 0x25e1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956992));
    // 0x25e1d0: 0x2508d780  addiu       $t0, $t0, -0x2880
    ctx->pc = 0x25e1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956928));
    // 0x25e1d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e1d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e1d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x25e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25e1dc: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x25e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x25e1e0: 0xc0957b0  jal         func_255EC0
    ctx->pc = 0x25E1E0u;
    SET_GPR_U32(ctx, 31, 0x25E1E8u);
    ctx->pc = 0x25E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1E0u;
    // 0x25e1e4: 0xaf8285fc  sw          $v0, -0x7A04($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255EC0u, 0x25E1E0u, 0x25E1E8u)) {
        return;
    }
    ctx->pc = 0x25E1E8u;
label_25e1e8:
    // 0x25e1e8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e1ec: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e1f0: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25e1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x25e1f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e1f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e1f8: 0x24c6da98  addiu       $a2, $a2, -0x2568
    ctx->pc = 0x25e1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957720));
    // 0x25e1fc: 0x24e7db00  addiu       $a3, $a3, -0x2500
    ctx->pc = 0x25e1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957824));
    // 0x25e200: 0x2508dac0  addiu       $t0, $t0, -0x2540
    ctx->pc = 0x25e200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957760));
    // 0x25e204: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x25e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25e208: 0x24050509  addiu       $a1, $zero, 0x509
    ctx->pc = 0x25e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x25e20c: 0xc095d72  jal         func_2575C8
    ctx->pc = 0x25E20Cu;
    SET_GPR_U32(ctx, 31, 0x25E214u);
    ctx->pc = 0x25E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E20Cu;
    // 0x25e210: 0xaf828600  sw          $v0, -0x7A00($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2575C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2575C8u, 0x25E20Cu, 0x25E214u)) {
        return;
    }
    ctx->pc = 0x25E214u;
label_25e214:
    // 0x25e214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e218: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e21c: 0x2405050e  addiu       $a1, $zero, 0x50E
    ctx->pc = 0x25e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x25e220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e22c: 0xc095b24  jal         func_256C90
    ctx->pc = 0x25E22Cu;
    SET_GPR_U32(ctx, 31, 0x25E234u);
    ctx->pc = 0x25E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E22Cu;
    // 0x25e230: 0xaf828604  sw          $v0, -0x79FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x25E22Cu, 0x25E234u)) {
        return;
    }
    ctx->pc = 0x25E234u;
label_25e234:
    // 0x25e234: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e238: 0x2405050e  addiu       $a1, $zero, 0x50E
    ctx->pc = 0x25e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x25e23c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e244: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e248: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x25E248u;
    SET_GPR_U32(ctx, 31, 0x25E250u);
    ctx->pc = 0x25E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E248u;
    // 0x25e24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x25E248u, 0x25E250u)) {
        return;
    }
    ctx->pc = 0x25E250u;
label_25e250:
    // 0x25e250: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e254: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e258: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e25c: 0x24a5df28  addiu       $a1, $a1, -0x20D8
    ctx->pc = 0x25e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958888));
    // 0x25e260: 0x24c6def8  addiu       $a2, $a2, -0x2108
    ctx->pc = 0x25e260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958840));
    // 0x25e264: 0x24e7df70  addiu       $a3, $a3, -0x2090
    ctx->pc = 0x25e264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958960));
    // 0x25e268: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e268u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e26c: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x25E26Cu;
    SET_GPR_U32(ctx, 31, 0x25E274u);
    ctx->pc = 0x25E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E26Cu;
    // 0x25e270: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x25E26Cu, 0x25E274u)) {
        return;
    }
    ctx->pc = 0x25E274u;
label_25e274:
    // 0x25e274: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e278: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e27c: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e27cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e280: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e284: 0x24a5e0b8  addiu       $a1, $a1, -0x1F48
    ctx->pc = 0x25e284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959288));
    // 0x25e288: 0x24c6e070  addiu       $a2, $a2, -0x1F90
    ctx->pc = 0x25e288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959216));
    // 0x25e28c: 0x24e7e110  addiu       $a3, $a3, -0x1EF0
    ctx->pc = 0x25e28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959376));
    // 0x25e290: 0xc096dfc  jal         func_25B7F0
    ctx->pc = 0x25E290u;
    SET_GPR_U32(ctx, 31, 0x25E298u);
    ctx->pc = 0x25E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E290u;
    // 0x25e294: 0x2404050e  addiu       $a0, $zero, 0x50E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7F0u, 0x25E290u, 0x25E298u)) {
        return;
    }
    ctx->pc = 0x25E298u;
label_25e298:
    // 0x25e298: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e298u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e29c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2a0: 0x24050510  addiu       $a1, $zero, 0x510
    ctx->pc = 0x25e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    // 0x25e2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2ac: 0xc095b24  jal         func_256C90
    ctx->pc = 0x25E2ACu;
    SET_GPR_U32(ctx, 31, 0x25E2B4u);
    ctx->pc = 0x25E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2ACu;
    // 0x25e2b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x25E2ACu, 0x25E2B4u)) {
        return;
    }
    ctx->pc = 0x25E2B4u;
label_25e2b4:
    // 0x25e2b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2b8: 0x24050510  addiu       $a1, $zero, 0x510
    ctx->pc = 0x25e2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    // 0x25e2bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e2c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e2c8: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x25E2C8u;
    SET_GPR_U32(ctx, 31, 0x25E2D0u);
    ctx->pc = 0x25E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2C8u;
    // 0x25e2cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x25E2C8u, 0x25E2D0u)) {
        return;
    }
    ctx->pc = 0x25E2D0u;
label_25e2d0:
    // 0x25e2d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e2d4: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e2d8: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e2dc: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x25e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
    // 0x25e2e0: 0x24c6df90  addiu       $a2, $a2, -0x2070
    ctx->pc = 0x25e2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958992));
    // 0x25e2e4: 0x24e7dfe0  addiu       $a3, $a3, -0x2020
    ctx->pc = 0x25e2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959072));
    // 0x25e2e8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e2e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e2ec: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x25E2ECu;
    SET_GPR_U32(ctx, 31, 0x25E2F4u);
    ctx->pc = 0x25E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2ECu;
    // 0x25e2f0: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x25E2ECu, 0x25E2F4u)) {
        return;
    }
    ctx->pc = 0x25E2F4u;
label_25e2f4:
    // 0x25e2f4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e2f8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25e2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25e2fc: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25e2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25e300: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e304: 0x24a5e020  addiu       $a1, $a1, -0x1FE0
    ctx->pc = 0x25e304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959136));
    // 0x25e308: 0x24c6e000  addiu       $a2, $a2, -0x2000
    ctx->pc = 0x25e308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959104));
    // 0x25e30c: 0x24e7e050  addiu       $a3, $a3, -0x1FB0
    ctx->pc = 0x25e30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959184));
    // 0x25e310: 0xc096dfc  jal         func_25B7F0
    ctx->pc = 0x25E310u;
    SET_GPR_U32(ctx, 31, 0x25E318u);
    ctx->pc = 0x25E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E310u;
    // 0x25e314: 0x24040510  addiu       $a0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7F0u, 0x25E310u, 0x25E318u)) {
        return;
    }
    ctx->pc = 0x25E318u;
label_25e318:
    // 0x25e318: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e31c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x25e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x25e320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e328: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e328u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e32c: 0xc09579e  jal         func_255E78
    ctx->pc = 0x25E32Cu;
    SET_GPR_U32(ctx, 31, 0x25E334u);
    ctx->pc = 0x25E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E32Cu;
    // 0x25e330: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x25E32Cu, 0x25E334u)) {
        return;
    }
    ctx->pc = 0x25E334u;
label_25e334:
    // 0x25e334: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x25e334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x25e338: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25e338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25e33c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25e33cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25e340: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e340u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e344: 0x24a54340  addiu       $a1, $a1, 0x4340
    ctx->pc = 0x25e344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17216));
    // 0x25e348: 0x24c643b8  addiu       $a2, $a2, 0x43B8
    ctx->pc = 0x25e348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
    // 0x25e34c: 0x24e74420  addiu       $a3, $a3, 0x4420
    ctx->pc = 0x25e34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17440));
    // 0x25e350: 0xc0957c2  jal         func_255F08
    ctx->pc = 0x25E350u;
    SET_GPR_U32(ctx, 31, 0x25E358u);
    ctx->pc = 0x25E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E350u;
    // 0x25e354: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F08u, 0x25E350u, 0x25E358u)) {
        return;
    }
    ctx->pc = 0x25E358u;
label_25e358:
    // 0x25e358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e35c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x25e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x25e360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e368: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e368u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e36c: 0xc09731a  jal         func_25CC68
    ctx->pc = 0x25E36Cu;
    SET_GPR_U32(ctx, 31, 0x25E374u);
    ctx->pc = 0x25E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E36Cu;
    // 0x25e370: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CC68u, 0x25E36Cu, 0x25E374u)) {
        return;
    }
    ctx->pc = 0x25E374u;
label_25e374:
    // 0x25e374: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x25e374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x25e378: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25e378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25e37c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25e37cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25e380: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e380u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e384: 0x24a532d0  addiu       $a1, $a1, 0x32D0
    ctx->pc = 0x25e384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13008));
    // 0x25e388: 0x24c63348  addiu       $a2, $a2, 0x3348
    ctx->pc = 0x25e388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13128));
    // 0x25e38c: 0x24e733b0  addiu       $a3, $a3, 0x33B0
    ctx->pc = 0x25e38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13232));
    // 0x25e390: 0xc09732c  jal         func_25CCB0
    ctx->pc = 0x25E390u;
    SET_GPR_U32(ctx, 31, 0x25E398u);
    ctx->pc = 0x25E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E390u;
    // 0x25e394: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CCB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CCB0u, 0x25E390u, 0x25E398u)) {
        return;
    }
    ctx->pc = 0x25E398u;
label_25e398:
    // 0x25e398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e39c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x25e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x25e3a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3a8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e3a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e3ac: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x25E3ACu;
    SET_GPR_U32(ctx, 31, 0x25E3B4u);
    ctx->pc = 0x25E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3ACu;
    // 0x25e3b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x25E3ACu, 0x25E3B4u)) {
        return;
    }
    ctx->pc = 0x25E3B4u;
label_25e3b4:
    // 0x25e3b4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x25e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x25e3b8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25e3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25e3bc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25e3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25e3c0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e3c4: 0x24a533d8  addiu       $a1, $a1, 0x33D8
    ctx->pc = 0x25e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13272));
    // 0x25e3c8: 0x24c63450  addiu       $a2, $a2, 0x3450
    ctx->pc = 0x25e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13392));
    // 0x25e3cc: 0x24e734b8  addiu       $a3, $a3, 0x34B8
    ctx->pc = 0x25e3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13496));
    // 0x25e3d0: 0xc096dfc  jal         func_25B7F0
    ctx->pc = 0x25E3D0u;
    SET_GPR_U32(ctx, 31, 0x25E3D8u);
    ctx->pc = 0x25E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3D0u;
    // 0x25e3d4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7F0u, 0x25E3D0u, 0x25E3D8u)) {
        return;
    }
    ctx->pc = 0x25E3D8u;
label_25e3d8:
    // 0x25e3d8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x25e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x25e3dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e3e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3e4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e3e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e3e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3ec: 0xc095f80  jal         func_257E00
    ctx->pc = 0x25E3ECu;
    SET_GPR_U32(ctx, 31, 0x25E3F4u);
    ctx->pc = 0x25E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3ECu;
    // 0x25e3f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E00u, 0x25E3ECu, 0x25E3F4u)) {
        return;
    }
    ctx->pc = 0x25E3F4u;
label_25e3f4:
    // 0x25e3f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x25e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x25e3f8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25e3fc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25e3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25e400: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e404: 0x24a57a40  addiu       $a1, $a1, 0x7A40
    ctx->pc = 0x25e404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31296));
    // 0x25e408: 0x24c67ab8  addiu       $a2, $a2, 0x7AB8
    ctx->pc = 0x25e408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31416));
    // 0x25e40c: 0x24e77b20  addiu       $a3, $a3, 0x7B20
    ctx->pc = 0x25e40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31520));
    // 0x25e410: 0xc095f92  jal         func_257E48
    ctx->pc = 0x25E410u;
    SET_GPR_U32(ctx, 31, 0x25E418u);
    ctx->pc = 0x25E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E410u;
    // 0x25e414: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E48u, 0x25E410u, 0x25E418u)) {
        return;
    }
    ctx->pc = 0x25E418u;
label_25e418:
    // 0x25e418: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x25e418u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x25e41c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E41Cu;
    {
        const bool branch_taken_0x25e41c = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x25e41c) {
            ctx->pc = 0x25E420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E41Cu;
            // 0x25e420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E430u;
            goto label_25e430;
        }
    }
    ctx->pc = 0x25E424u;
    // 0x25e424: 0xc097be2  jal         func_25EF88
    ctx->pc = 0x25E424u;
    SET_GPR_U32(ctx, 31, 0x25E42Cu);
    ctx->pc = 0x25EF88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EF88u, 0x25E424u, 0x25E42Cu)) {
        return;
    }
    ctx->pc = 0x25E42Cu;
label_25e42c:
    // 0x25e42c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25e42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25e430:
    // 0x25e430: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e438: 0x3e00008  jr          $ra
    ctx->pc = 0x25E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E438u;
        // 0x25e43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E440u;
}
