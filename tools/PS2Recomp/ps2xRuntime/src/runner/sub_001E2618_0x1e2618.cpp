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

// Function: sub_001E2618
// Address: 0x1e2618 - 0x1e28b0
void sub_001E2618_0x1e2618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2618_0x1e2618");
#endif

    switch (ctx->pc) {
        case 0x1e2658u: goto label_1e2658;
        case 0x1e2700u: goto label_1e2700;
        case 0x1e2760u: goto label_1e2760;
        case 0x1e2770u: goto label_1e2770;
        case 0x1e2820u: goto label_1e2820;
        case 0x1e286cu: goto label_1e286c;
        default: break;
    }

    ctx->pc = 0x1e2618u;

    // 0x1e2618: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1e261c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1e261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1e2620: 0x24438d08  addiu       $v1, $v0, -0x72F8
    ctx->pc = 0x1e2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937864));
    // 0x1e2624: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e2624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1e2628: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e2628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1e262c: 0x24650960  addiu       $a1, $v1, 0x960
    ctx->pc = 0x1e262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x1e2630: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1e2630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1e2634: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1e2634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1e2638: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1e2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1e263c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1e263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1e2640: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1e2644: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e2644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e2648: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1e2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1e264c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1e2650: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e2650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e2654: 0x8c82e6dc  lw          $v0, -0x1924($a0)
    ctx->pc = 0x1e2654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E6DCu));
label_1e2658:
    // 0x1e2658: 0xac83e6dc  sw          $v1, -0x1924($a0)
    ctx->pc = 0x1e2658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960860), GPR_U32(ctx, 3));
    // 0x1e265c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e265cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e2660: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1e2660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1e2664: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1e2664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e2668: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E2668u;
    {
        const bool branch_taken_0x1e2668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2668u;
        // 0x1e266c: 0x8c82e6dc  lw          $v0, -0x1924($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2668) {
            ctx->pc = 0x1E2658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2658;
        }
    }
    ctx->pc = 0x1E2670u;
    // 0x1e2670: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e2670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e2674: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e2674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1e2678: 0x24531120  addiu       $s3, $v0, 0x1120
    ctx->pc = 0x1e2678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x1e267c: 0x24741868  addiu       $s4, $v1, 0x1868
    ctx->pc = 0x1e267cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 6248));
    // 0x1e2680: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e2680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e2684: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1e2688: 0x245521a8  addiu       $s5, $v0, 0x21A8
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8616));
    // 0x1e268c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1e268cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1e2690: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e2690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e2694: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e2694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e2698: 0x245e2958  addiu       $fp, $v0, 0x2958
    ctx->pc = 0x1e2698u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 10584));
    // 0x1e269c: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x1e269cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1e26a0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e26a4: 0x24c61230  addiu       $a2, $a2, 0x1230
    ctx->pc = 0x1e26a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4656));
    // 0x1e26a8: 0x24522a40  addiu       $s2, $v0, 0x2A40
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
    // 0x1e26ac: 0x24a52038  addiu       $a1, $a1, 0x2038
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8248));
    // 0x1e26b0: 0x24021101  addiu       $v0, $zero, 0x1101
    ctx->pc = 0x1e26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x1e26b4: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x1e26b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e26b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e26bc: 0x24632078  addiu       $v1, $v1, 0x2078
    ctx->pc = 0x1e26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8312));
    // 0x1e26c0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e26c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e26c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26c8: 0x244228b0  addiu       $v0, $v0, 0x28B0
    ctx->pc = 0x1e26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10416));
    // 0x1e26cc: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1e26ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1e26d0: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x1e26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x1e26d4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1e26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1e26d8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1e26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1e26dc: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1e26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1e26e0: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1e26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1e26e4: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x1e26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x1e26e8: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x1e26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x1e26ec: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1e26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1e26f0: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x1e26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x1e26f4: 0xafb1002c  sw          $s1, 0x2C($sp)
    ctx->pc = 0x1e26f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 17));
    // 0x1e26f8: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E26F8u;
    SET_GPR_U32(ctx, 31, 0x1E2700u);
    ctx->pc = 0x1E26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E26F8u;
    // 0x1e26fc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E26F8u, 0x1E2700u)) {
        return;
    }
    ctx->pc = 0x1E2700u;
label_1e2700:
    // 0x1e2700: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E2700u;
    {
        const bool branch_taken_0x1e2700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2700u;
        // 0x1e2704: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2700) {
            ctx->pc = 0x1E2828u;
            goto label_1e2828;
        }
    }
    ctx->pc = 0x1E2708u;
    // 0x1e2708: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e2708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e270c: 0x24570b18  addiu       $s7, $v0, 0xB18
    ctx->pc = 0x1e270cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2840));
    // 0x1e2710: 0x247608c0  addiu       $s6, $v1, 0x8C0
    ctx->pc = 0x1e2710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 2240));
    // 0x1e2714: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e2714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e2718: 0x24021103  addiu       $v0, $zero, 0x1103
    ctx->pc = 0x1e2718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4355));
    // 0x1e271c: 0x24a51760  addiu       $a1, $a1, 0x1760
    ctx->pc = 0x1e271cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5984));
    // 0x1e2720: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1e2720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e2724: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e2724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e2728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e2728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e272c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1e272cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1e2730: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1e2730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1e2734: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1e2734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1e2738: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1e2738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1e273c: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x1e273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x1e2740: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1e2740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1e2744: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1e2744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1e2748: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1e2748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1e274c: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x1e274cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x1e2750: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x1e2750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x1e2754: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x1e2754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x1e2758: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E2758u;
    SET_GPR_U32(ctx, 31, 0x1E2760u);
    ctx->pc = 0x1E275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2758u;
    // 0x1e275c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E2758u, 0x1E2760u)) {
        return;
    }
    ctx->pc = 0x1E2760u;
label_1e2760:
    // 0x1e2760: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E2760u;
    {
        const bool branch_taken_0x1e2760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2760u;
        // 0x1e2764: 0x3c0444a0  lui         $a0, 0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17568 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2760) {
            ctx->pc = 0x1E2828u;
            goto label_1e2828;
        }
    }
    ctx->pc = 0x1E2768u;
    // 0x1e2768: 0xc09d7cc  jal         func_275F30
    ctx->pc = 0x1E2768u;
    SET_GPR_U32(ctx, 31, 0x1E2770u);
    ctx->pc = 0x1E276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2768u;
    // 0x1e276c: 0x34847195  ori         $a0, $a0, 0x7195 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29077);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275F30u, 0x1E2768u, 0x1E2770u)) {
        return;
    }
    ctx->pc = 0x1E2770u;
label_1e2770:
    // 0x1e2770: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1E2770u;
    {
        const bool branch_taken_0x1e2770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2770) {
            ctx->pc = 0x1E2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2770u;
            // 0x1e2774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E287Cu;
            goto label_1e287c;
        }
    }
    ctx->pc = 0x1E2778u;
    // 0x1e2778: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x1e2778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e277c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x1e277cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e2780: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x1e2780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e2784: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x1e2784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e2788: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x1e2788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e278c: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x1e278cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e2790: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x1e2790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e2794: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x1e2794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e2798: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e2798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e279c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e279cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27a0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1e27a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27a4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1e27a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27a8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1e27a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27ac: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1e27acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27b0: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1e27b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27b4: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1e27b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27b8: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x1e27b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e27bc: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x1e27bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e27c0: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x1e27c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e27c4: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x1e27c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e27c8: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1e27c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e27cc: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1e27ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27d0: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1e27d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27d4: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x1e27d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27d8: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x1e27d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e27dc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e27dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e27e0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1e27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1e27e4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1e27e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1e27e8: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e27e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e27ec: 0x24031102  addiu       $v1, $zero, 0x1102
    ctx->pc = 0x1e27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x1e27f0: 0xaca28d00  sw          $v0, -0x7300($a1)
    ctx->pc = 0x1e27f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8D00u, _value); } while (0);
    // 0x1e27f4: 0x24c62078  addiu       $a2, $a2, 0x2078
    ctx->pc = 0x1e27f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8312));
    // 0x1e27f8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e27fc: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x1e27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x1e2800: 0x24a528b0  addiu       $a1, $a1, 0x28B0
    ctx->pc = 0x1e2800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10416));
    // 0x1e2804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e2804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2808: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e2808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e280c: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1e280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1e2810: 0xafb1002c  sw          $s1, 0x2C($sp)
    ctx->pc = 0x1e2810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 17));
    // 0x1e2814: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e2814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e2818: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E2818u;
    SET_GPR_U32(ctx, 31, 0x1E2820u);
    ctx->pc = 0x1E281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2818u;
    // 0x1e281c: 0xafb20028  sw          $s2, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E2818u, 0x1E2820u)) {
        return;
    }
    ctx->pc = 0x1E2820u;
label_1e2820:
    // 0x1e2820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2820u;
    {
        const bool branch_taken_0x1e2820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2820u;
        // 0x1e2824: 0x24041104  addiu       $a0, $zero, 0x1104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2820) {
            ctx->pc = 0x1E2830u;
            goto label_1e2830;
        }
    }
    ctx->pc = 0x1E2828u;
label_1e2828:
    // 0x1e2828: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E2828u;
    {
        const bool branch_taken_0x1e2828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2828u;
        // 0x1e282c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2828) {
            ctx->pc = 0x1E287Cu;
            goto label_1e287c;
        }
    }
    ctx->pc = 0x1E2830u;
label_1e2830:
    // 0x1e2830: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e2830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e2834: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1e2838: 0x24421a38  addiu       $v0, $v0, 0x1A38
    ctx->pc = 0x1e2838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
    // 0x1e283c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1e283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e2840: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e2840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e2844: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1e2844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1e2848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e2848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e284c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1e284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1e2850: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x1e2850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x1e2854: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x1e2854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x1e2858: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x1e2858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x1e285c: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x1e285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x1e2860: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1e2860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1e2864: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E2864u;
    SET_GPR_U32(ctx, 31, 0x1E286Cu);
    ctx->pc = 0x1E2868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2864u;
    // 0x1e2868: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E2864u, 0x1E286Cu)) {
        return;
    }
    ctx->pc = 0x1E286Cu;
label_1e286c:
    // 0x1e286c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e286cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2870: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2870u;
    {
        const bool branch_taken_0x1e2870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2870u;
        // 0x1e2874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2870) {
            ctx->pc = 0x1E287Cu;
            goto label_1e287c;
        }
    }
    ctx->pc = 0x1E2878u;
    // 0x1e2878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e287c:
    // 0x1e287c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e287cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e2880: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e2880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e2884: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1e2884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e2888: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1e2888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e288c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1e288cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e2890: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e2890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2894: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e2894u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e2898: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1e2898u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e289c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e289cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e28a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e28a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e28a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E28A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28A4u;
        // 0x1e28a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E28A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E28ACu;
    // 0x1e28ac: 0x0  nop
    ctx->pc = 0x1e28acu;
    // NOP
    ctx->pc = 0x1e28b0u;
}
