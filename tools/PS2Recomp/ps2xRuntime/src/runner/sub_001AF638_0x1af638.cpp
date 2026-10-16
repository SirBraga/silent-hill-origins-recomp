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

// Function: sub_001AF638
// Address: 0x1af638 - 0x1af8a0
void sub_001AF638_0x1af638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF638_0x1af638");
#endif

    switch (ctx->pc) {
        case 0x1af6e0u: goto label_1af6e0;
        case 0x1af6fcu: goto label_1af6fc;
        case 0x1af720u: goto label_1af720;
        case 0x1af730u: goto label_1af730;
        case 0x1af740u: goto label_1af740;
        case 0x1af750u: goto label_1af750;
        case 0x1af760u: goto label_1af760;
        case 0x1af770u: goto label_1af770;
        case 0x1af7f8u: goto label_1af7f8;
        case 0x1af810u: goto label_1af810;
        case 0x1af834u: goto label_1af834;
        case 0x1af850u: goto label_1af850;
        case 0x1af864u: goto label_1af864;
        case 0x1af878u: goto label_1af878;
        case 0x1af880u: goto label_1af880;
        default: break;
    }

    ctx->pc = 0x1af638u;

    // 0x1af638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1af638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1af63c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1af63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1af640: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1af640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1af644: 0x2442c140  addiu       $v0, $v0, -0x3EC0
    ctx->pc = 0x1af644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951232));
    // 0x1af648: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1af648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1af64c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1af64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af650: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1af650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1af654: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1af654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af65c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1af65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1af660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af664: 0x2463bbe8  addiu       $v1, $v1, -0x4418
    ctx->pc = 0x1af664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949864));
    // 0x1af668: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1af668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1af66c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1af66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1af670: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1af670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1af674: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x1af674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1af678: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1af678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1af67c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1af67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af680: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1af680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1af684: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1af684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af688: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1af688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1af68c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1af68cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1af690: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x1af690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x1af694: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1af694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x1af698: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1af698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1af69c: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x1af69cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x1af6a0: 0xae600138  sw          $zero, 0x138($s3)
    ctx->pc = 0x1af6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 0));
    // 0x1af6a4: 0xae600144  sw          $zero, 0x144($s3)
    ctx->pc = 0x1af6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 0));
    // 0x1af6a8: 0xae600148  sw          $zero, 0x148($s3)
    ctx->pc = 0x1af6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 0));
    // 0x1af6ac: 0xae600154  sw          $zero, 0x154($s3)
    ctx->pc = 0x1af6acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 0));
    // 0x1af6b0: 0xae600158  sw          $zero, 0x158($s3)
    ctx->pc = 0x1af6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 0));
    // 0x1af6b4: 0xae600218  sw          $zero, 0x218($s3)
    ctx->pc = 0x1af6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 0));
    // 0x1af6b8: 0xae60021c  sw          $zero, 0x21C($s3)
    ctx->pc = 0x1af6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 540), GPR_U32(ctx, 0));
    // 0x1af6bc: 0xae600220  sw          $zero, 0x220($s3)
    ctx->pc = 0x1af6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 0));
    // 0x1af6c0: 0xae600224  sw          $zero, 0x224($s3)
    ctx->pc = 0x1af6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 548), GPR_U32(ctx, 0));
    // 0x1af6c4: 0xae600248  sw          $zero, 0x248($s3)
    ctx->pc = 0x1af6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 0));
    // 0x1af6c8: 0xae66014c  sw          $a2, 0x14C($s3)
    ctx->pc = 0x1af6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 332), GPR_U32(ctx, 6));
    // 0x1af6cc: 0xae670150  sw          $a3, 0x150($s3)
    ctx->pc = 0x1af6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 7));
    // 0x1af6d0: 0xae66002c  sw          $a2, 0x2C($s3)
    ctx->pc = 0x1af6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 6));
    // 0x1af6d4: 0xae6600f0  sw          $a2, 0xF0($s3)
    ctx->pc = 0x1af6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 6));
    // 0x1af6d8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1AF6D8u;
    SET_GPR_U32(ctx, 31, 0x1AF6E0u);
    ctx->pc = 0x1AF6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6D8u;
    // 0x1af6dc: 0xae6600f4  sw          $a2, 0xF4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1AF6D8u, 0x1AF6E0u)) {
        return;
    }
    ctx->pc = 0x1AF6E0u;
label_1af6e0:
    // 0x1af6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6e4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1af6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1af6e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1af6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1af6ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1af6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1af6f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1af6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1af6f4: 0xc080888  jal         func_202220
    ctx->pc = 0x1AF6F4u;
    SET_GPR_U32(ctx, 31, 0x1AF6FCu);
    ctx->pc = 0x1AF6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6F4u;
    // 0x1af6f8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x1AF6F4u, 0x1AF6FCu)) {
        return;
    }
    ctx->pc = 0x1AF6FCu;
label_1af6fc:
    // 0x1af6fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF6FCu;
    {
        const bool branch_taken_0x1af6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6FCu;
        // 0x1af700: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6fc) {
            ctx->pc = 0x1AF70Cu;
            goto label_1af70c;
        }
    }
    ctx->pc = 0x1AF704u;
    // 0x1af704: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1af704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1af708: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1af708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1af70c:
    // 0x1af70c: 0xae700018  sw          $s0, 0x18($s3)
    ctx->pc = 0x1af70cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 16));
    // 0x1af710: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1af710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1af714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af718: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AF718u;
    SET_GPR_U32(ctx, 31, 0x1AF720u);
    ctx->pc = 0x1AF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF718u;
    // 0x1af71c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AF718u, 0x1AF720u)) {
        return;
    }
    ctx->pc = 0x1AF720u;
label_1af720:
    // 0x1af720: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x1af720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x1af724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af728: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AF728u;
    SET_GPR_U32(ctx, 31, 0x1AF730u);
    ctx->pc = 0x1AF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF728u;
    // 0x1af72c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AF728u, 0x1AF730u)) {
        return;
    }
    ctx->pc = 0x1AF730u;
label_1af730:
    // 0x1af730: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x1af730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x1af734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af738: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AF738u;
    SET_GPR_U32(ctx, 31, 0x1AF740u);
    ctx->pc = 0x1AF73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF738u;
    // 0x1af73c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AF738u, 0x1AF740u)) {
        return;
    }
    ctx->pc = 0x1AF740u;
label_1af740:
    // 0x1af740: 0x2664015c  addiu       $a0, $s3, 0x15C
    ctx->pc = 0x1af740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 348));
    // 0x1af744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af748: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AF748u;
    SET_GPR_U32(ctx, 31, 0x1AF750u);
    ctx->pc = 0x1AF74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF748u;
    // 0x1af74c: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AF748u, 0x1AF750u)) {
        return;
    }
    ctx->pc = 0x1AF750u;
label_1af750:
    // 0x1af750: 0x266401d0  addiu       $a0, $s3, 0x1D0
    ctx->pc = 0x1af750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 464));
    // 0x1af754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af758: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AF758u;
    SET_GPR_U32(ctx, 31, 0x1AF760u);
    ctx->pc = 0x1AF75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF758u;
    // 0x1af75c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AF758u, 0x1AF760u)) {
        return;
    }
    ctx->pc = 0x1AF760u;
label_1af760:
    // 0x1af760: 0x266400f8  addiu       $a0, $s3, 0xF8
    ctx->pc = 0x1af760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
    // 0x1af764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af768: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AF768u;
    SET_GPR_U32(ctx, 31, 0x1AF770u);
    ctx->pc = 0x1AF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF768u;
    // 0x1af76c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AF768u, 0x1AF770u)) {
        return;
    }
    ctx->pc = 0x1AF770u;
label_1af770:
    // 0x1af770: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1af770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1af774: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1af774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1af778: 0xa263013c  sb          $v1, 0x13C($s3)
    ctx->pc = 0x1af778u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 316), (uint8_t)GPR_U32(ctx, 3));
    // 0x1af77c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1af77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1af780: 0xa263013e  sb          $v1, 0x13E($s3)
    ctx->pc = 0x1af780u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 318), (uint8_t)GPR_U32(ctx, 3));
    // 0x1af784: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1af784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1af788: 0xa263013d  sb          $v1, 0x13D($s3)
    ctx->pc = 0x1af788u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 317), (uint8_t)GPR_U32(ctx, 3));
    // 0x1af78c: 0x24e7bd28  addiu       $a3, $a3, -0x42D8
    ctx->pc = 0x1af78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950184));
    // 0x1af790: 0xa262013f  sb          $v0, 0x13F($s3)
    ctx->pc = 0x1af790u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 319), (uint8_t)GPR_U32(ctx, 2));
    // 0x1af794: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1af794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1af798: 0x24a9c178  addiu       $t1, $a1, -0x3E88
    ctx->pc = 0x1af798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951288));
    // 0x1af79c: 0x89230003  lwl         $v1, 0x3($t1)
    ctx->pc = 0x1af79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1af7a0: 0x99230000  lwr         $v1, 0x0($t1)
    ctx->pc = 0x1af7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1af7a4: 0xaa630143  swl         $v1, 0x143($s3)
    ctx->pc = 0x1af7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 323); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1af7a8: 0xba630140  swr         $v1, 0x140($s3)
    ctx->pc = 0x1af7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1af7ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af7b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1af7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1af7b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af7b8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1af7bc: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x1af7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
    // 0x1af7c0: 0x248486b8  addiu       $a0, $a0, -0x7948
    ctx->pc = 0x1af7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936248));
    // 0x1af7c4: 0xae600214  sw          $zero, 0x214($s3)
    ctx->pc = 0x1af7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 0));
    // 0x1af7c8: 0x24a5bd38  addiu       $a1, $a1, -0x42C8
    ctx->pc = 0x1af7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950200));
    // 0x1af7cc: 0xae600228  sw          $zero, 0x228($s3)
    ctx->pc = 0x1af7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 552), GPR_U32(ctx, 0));
    // 0x1af7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7d4: 0xae600234  sw          $zero, 0x234($s3)
    ctx->pc = 0x1af7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 564), GPR_U32(ctx, 0));
    // 0x1af7d8: 0xae60022c  sw          $zero, 0x22C($s3)
    ctx->pc = 0x1af7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 556), GPR_U32(ctx, 0));
    // 0x1af7dc: 0xae600238  sw          $zero, 0x238($s3)
    ctx->pc = 0x1af7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 568), GPR_U32(ctx, 0));
    // 0x1af7e0: 0xae600244  sw          $zero, 0x244($s3)
    ctx->pc = 0x1af7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 580), GPR_U32(ctx, 0));
    // 0x1af7e4: 0xae600240  sw          $zero, 0x240($s3)
    ctx->pc = 0x1af7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 576), GPR_U32(ctx, 0));
    // 0x1af7e8: 0xe6600230  swc1        $f0, 0x230($s3)
    ctx->pc = 0x1af7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 560), bits); }
    // 0x1af7ec: 0xae62023c  sw          $v0, 0x23C($s3)
    ctx->pc = 0x1af7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 572), GPR_U32(ctx, 2));
    // 0x1af7f0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1AF7F0u;
    SET_GPR_U32(ctx, 31, 0x1AF7F8u);
    ctx->pc = 0x1AF7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7F0u;
    // 0x1af7f4: 0xae670144  sw          $a3, 0x144($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1AF7F0u, 0x1AF7F8u)) {
        return;
    }
    ctx->pc = 0x1AF7F8u;
label_1af7f8:
    // 0x1af7f8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1af7fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1af7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1af800: 0x24a5bd48  addiu       $a1, $a1, -0x42B8
    ctx->pc = 0x1af800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950216));
    // 0x1af804: 0x248486c0  addiu       $a0, $a0, -0x7940
    ctx->pc = 0x1af804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936256));
    // 0x1af808: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1AF808u;
    SET_GPR_U32(ctx, 31, 0x1AF810u);
    ctx->pc = 0x1AF80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF808u;
    // 0x1af80c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1AF808u, 0x1AF810u)) {
        return;
    }
    ctx->pc = 0x1AF810u;
label_1af810:
    // 0x1af810: 0x3c12006d  lui         $s2, 0x6D
    ctx->pc = 0x1af810u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)109 << 16));
    // 0x1af814: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x1af818: 0x2631bd68  addiu       $s1, $s1, -0x4298
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950248));
    // 0x1af81c: 0x2652bcf0  addiu       $s2, $s2, -0x4310
    ctx->pc = 0x1af81cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950128));
    // 0x1af820: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1af820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1af824: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1af824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af828: 0x24a5bd58  addiu       $a1, $a1, -0x42A8
    ctx->pc = 0x1af828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950232));
    // 0x1af82c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1AF82Cu;
    SET_GPR_U32(ctx, 31, 0x1AF834u);
    ctx->pc = 0x1AF830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF82Cu;
    // 0x1af830: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1AF82Cu, 0x1AF834u)) {
        return;
    }
    ctx->pc = 0x1AF834u;
label_1af834:
    // 0x1af834: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x1af834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x1af838: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1af838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1af83c: 0x2610bcf8  addiu       $s0, $s0, -0x4308
    ctx->pc = 0x1af83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950136));
    // 0x1af840: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af848: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1AF848u;
    SET_GPR_U32(ctx, 31, 0x1AF850u);
    ctx->pc = 0x1AF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF848u;
    // 0x1af84c: 0x24a5bd78  addiu       $a1, $a1, -0x4288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1AF848u, 0x1AF850u)) {
        return;
    }
    ctx->pc = 0x1AF850u;
label_1af850:
    // 0x1af850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1af850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af85c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1AF85Cu;
    SET_GPR_U32(ctx, 31, 0x1AF864u);
    ctx->pc = 0x1AF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF85Cu;
    // 0x1af860: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1AF85Cu, 0x1AF864u)) {
        return;
    }
    ctx->pc = 0x1AF864u;
label_1af864:
    // 0x1af864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af868: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af86c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af870: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1AF870u;
    SET_GPR_U32(ctx, 31, 0x1AF878u);
    ctx->pc = 0x1AF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF870u;
    // 0x1af874: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1AF870u, 0x1AF878u)) {
        return;
    }
    ctx->pc = 0x1AF878u;
label_1af878:
    // 0x1af878: 0xc06cae8  jal         func_1B2BA0
    ctx->pc = 0x1AF878u;
    SET_GPR_U32(ctx, 31, 0x1AF880u);
    ctx->pc = 0x1AF87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF878u;
    // 0x1af87c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2BA0u, 0x1AF878u, 0x1AF880u)) {
        return;
    }
    ctx->pc = 0x1AF880u;
label_1af880:
    // 0x1af880: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1af880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af884: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1af884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af888: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1af888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af890: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1af890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af898: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF898u;
        // 0x1af89c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF8A0u;
}
