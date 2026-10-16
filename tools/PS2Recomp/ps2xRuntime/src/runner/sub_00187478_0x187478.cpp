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

// Function: sub_00187478
// Address: 0x187478 - 0x187608
void sub_00187478_0x187478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187478_0x187478");
#endif

    switch (ctx->pc) {
        case 0x1874a4u: goto label_1874a4;
        case 0x1874c4u: goto label_1874c4;
        case 0x1874ccu: goto label_1874cc;
        case 0x1874fcu: goto label_1874fc;
        case 0x187518u: goto label_187518;
        case 0x187538u: goto label_187538;
        case 0x187550u: goto label_187550;
        case 0x187570u: goto label_187570;
        case 0x187584u: goto label_187584;
        case 0x187598u: goto label_187598;
        case 0x1875acu: goto label_1875ac;
        default: break;
    }

    ctx->pc = 0x187478u;

    // 0x187478: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x187478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18747c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x187480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187484: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x187484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x187488: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x187488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18748c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187490: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x187490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x187494: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x187494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x187498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18749c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x18749Cu;
    SET_GPR_U32(ctx, 31, 0x1874A4u);
    ctx->pc = 0x1874A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18749Cu;
    // 0x1874a0: 0x26150038  addiu       $s5, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x18749Cu, 0x1874A4u)) {
        return;
    }
    ctx->pc = 0x1874A4u;
label_1874a4:
    // 0x1874a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1874a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1874a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1874a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1874ac: 0x24638978  addiu       $v1, $v1, -0x7688
    ctx->pc = 0x1874acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936952));
    // 0x1874b0: 0x24428930  addiu       $v0, $v0, -0x76D0
    ctx->pc = 0x1874b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936880));
    // 0x1874b4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1874b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1874b8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x1874b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1874bc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1874BCu;
    SET_GPR_U32(ctx, 31, 0x1874C4u);
    ctx->pc = 0x1874C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874BCu;
    // 0x1874c0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1874BCu, 0x1874C4u)) {
        return;
    }
    ctx->pc = 0x1874C4u;
label_1874c4:
    // 0x1874c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1874C4u;
    SET_GPR_U32(ctx, 31, 0x1874CCu);
    ctx->pc = 0x1874C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874C4u;
    // 0x1874c8: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1874C4u, 0x1874CCu)) {
        return;
    }
    ctx->pc = 0x1874CCu;
label_1874cc:
    // 0x1874cc: 0x3c14006a  lui         $s4, 0x6A
    ctx->pc = 0x1874ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)106 << 16));
    // 0x1874d0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1874d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1874d4: 0x269487b0  addiu       $s4, $s4, -0x7850
    ctx->pc = 0x1874d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936496));
    // 0x1874d8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1874d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1874dc: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1874dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1874e0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1874e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1874e4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1874e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1874e8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1874e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1874ec: 0x24a587a0  addiu       $a1, $a1, -0x7860
    ctx->pc = 0x1874ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936480));
    // 0x1874f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1874f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874f4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1874F4u;
    SET_GPR_U32(ctx, 31, 0x1874FCu);
    ctx->pc = 0x1874F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874F4u;
    // 0x1874f8: 0x2484bcf0  addiu       $a0, $a0, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1874F4u, 0x1874FCu)) {
        return;
    }
    ctx->pc = 0x1874FCu;
label_1874fc:
    // 0x1874fc: 0x3c13006d  lui         $s3, 0x6D
    ctx->pc = 0x1874fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
    // 0x187500: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x187504: 0x2673bcf8  addiu       $s3, $s3, -0x4308
    ctx->pc = 0x187504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950136));
    // 0x187508: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x187508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18750c: 0x24a587c0  addiu       $a1, $a1, -0x7840
    ctx->pc = 0x18750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
    // 0x187510: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x187510u;
    SET_GPR_U32(ctx, 31, 0x187518u);
    ctx->pc = 0x187514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187510u;
    // 0x187514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x187510u, 0x187518u)) {
        return;
    }
    ctx->pc = 0x187518u;
label_187518:
    // 0x187518: 0x3c12006d  lui         $s2, 0x6D
    ctx->pc = 0x187518u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)109 << 16));
    // 0x18751c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x187520: 0x2652bd08  addiu       $s2, $s2, -0x42F8
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950152));
    // 0x187524: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x187528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18752c: 0x24a587c8  addiu       $a1, $a1, -0x7838
    ctx->pc = 0x18752cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936520));
    // 0x187530: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x187530u;
    SET_GPR_U32(ctx, 31, 0x187538u);
    ctx->pc = 0x187534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187530u;
    // 0x187534: 0x24c687d8  addiu       $a2, $a2, -0x7828 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x187530u, 0x187538u)) {
        return;
    }
    ctx->pc = 0x187538u;
label_187538:
    // 0x187538: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18753c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18753cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x187540: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x187540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187544: 0x24a587e0  addiu       $a1, $a1, -0x7820
    ctx->pc = 0x187544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936544));
    // 0x187548: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x187548u;
    SET_GPR_U32(ctx, 31, 0x187550u);
    ctx->pc = 0x18754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187548u;
    // 0x18754c: 0x2484bd00  addiu       $a0, $a0, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x187548u, 0x187550u)) {
        return;
    }
    ctx->pc = 0x187550u;
label_187550:
    // 0x187550: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x187554: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x187554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x187558: 0x2631bd10  addiu       $s1, $s1, -0x42F0
    ctx->pc = 0x187558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950160));
    // 0x18755c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x187560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187564: 0x24a587e8  addiu       $a1, $a1, -0x7818
    ctx->pc = 0x187564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936552));
    // 0x187568: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x187568u;
    SET_GPR_U32(ctx, 31, 0x187570u);
    ctx->pc = 0x18756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187568u;
    // 0x18756c: 0x24c687f8  addiu       $a2, $a2, -0x7808 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x187568u, 0x187570u)) {
        return;
    }
    ctx->pc = 0x187570u;
label_187570:
    // 0x187570: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x187570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187574: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x187574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187578: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18757c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18757Cu;
    SET_GPR_U32(ctx, 31, 0x187584u);
    ctx->pc = 0x187580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18757Cu;
    // 0x187580: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18757Cu, 0x187584u)) {
        return;
    }
    ctx->pc = 0x187584u;
label_187584:
    // 0x187584: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187588: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18758c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18758cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187590: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x187590u;
    SET_GPR_U32(ctx, 31, 0x187598u);
    ctx->pc = 0x187594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187590u;
    // 0x187594: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x187590u, 0x187598u)) {
        return;
    }
    ctx->pc = 0x187598u;
label_187598:
    // 0x187598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18759c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18759cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1875a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875a4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1875A4u;
    SET_GPR_U32(ctx, 31, 0x1875ACu);
    ctx->pc = 0x1875A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875A4u;
    // 0x1875a8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1875A4u, 0x1875ACu)) {
        return;
    }
    ctx->pc = 0x1875ACu;
label_1875ac:
    // 0x1875ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1875acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1875b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1875b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875b4: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1875b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1875b8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1875b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1875bc: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1875bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1875c0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1875c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1875c4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1875c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1875c8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1875c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1875cc: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1875ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1875d0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1875d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1875d4: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1875d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1875d8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1875d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1875dc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1875dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x1875e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1875e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1875e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1875e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1875e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1875e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1875ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1875ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1875f0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1875f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1875f4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1875f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1875f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1875f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1875fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1875FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875FCu;
        // 0x187600: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1875FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187604u;
    // 0x187604: 0x0  nop
    ctx->pc = 0x187604u;
    // NOP
    ctx->pc = 0x187608u;
}
