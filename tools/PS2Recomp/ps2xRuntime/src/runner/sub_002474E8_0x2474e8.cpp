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

// Function: sub_002474E8
// Address: 0x2474e8 - 0x247788
void sub_002474E8_0x2474e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002474E8_0x2474e8");
#endif

    switch (ctx->pc) {
        case 0x247530u: goto label_247530;
        default: break;
    }

    ctx->pc = 0x2474e8u;

    // 0x2474e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2474e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2474ec: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2474ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2474f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2474f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2474f4: 0x24431180  addiu       $v1, $v0, 0x1180
    ctx->pc = 0x2474f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x2474f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2474f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2474fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2474fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x247500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247504: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x247504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x247508: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x247508u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5C11A4u));
    // 0x24750c: 0x1220008d  beqz        $s1, . + 4 + (0x8D << 2)
    ctx->pc = 0x24750Cu;
    {
        const bool branch_taken_0x24750c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24750Cu;
        // 0x247510: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24750c) {
            ctx->pc = 0x247744u;
            goto label_247744;
        }
    }
    ctx->pc = 0x247514u;
    // 0x247514: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247518: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x247518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x24751c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24751cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x247520: 0x8c720028  lw          $s2, 0x28($v1)
    ctx->pc = 0x247520u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x247524: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x247524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x247528: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x247528u;
    SET_GPR_U32(ctx, 31, 0x247530u);
    ctx->pc = 0x24752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247528u;
    // 0x24752c: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x247528u, 0x247530u)) {
        return;
    }
    ctx->pc = 0x247530u;
label_247530:
    // 0x247530: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x247530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x247534: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x247534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x247538: 0x34c68004  ori         $a2, $a2, 0x8004
    ctx->pc = 0x247538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32772);
    // 0x24753c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x247540: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x247540u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x247544: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247548: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x247548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x24754c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24754cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x247550: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x247554: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247558: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x247558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24755c: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x24755cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x247560: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247564: 0x9e02000c  lwu         $v0, 0xC($s0)
    ctx->pc = 0x247564u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x247568: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x247568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24756c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x247570: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x247570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x247574: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x247574u;
    {
        const bool branch_taken_0x247574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x247578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247574u;
        // 0x247578: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247574) {
            ctx->pc = 0x2475C0u;
            goto label_2475c0;
        }
    }
    ctx->pc = 0x24757Cu;
    // 0x24757c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247580: 0x8c423524  lw          $v0, 0x3524($v0)
    ctx->pc = 0x247580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3524u));
    // 0x247584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247588u;
    {
        const bool branch_taken_0x247588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247588u;
        // 0x24758c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247588) {
            ctx->pc = 0x247598u;
            goto label_247598;
        }
    }
    ctx->pc = 0x247590u;
    // 0x247590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247590u;
    {
        const bool branch_taken_0x247590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247590u;
        // 0x247594: 0xdc445290  ld          $a0, 0x5290($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 21136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247590) {
            ctx->pc = 0x2475A0u;
            goto label_2475a0;
        }
    }
    ctx->pc = 0x247598u;
label_247598:
    // 0x247598: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x247598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24759c: 0xdc445120  ld          $a0, 0x5120($v0)
    ctx->pc = 0x24759cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x735120u));
label_2475a0:
    // 0x2475a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2475a4: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x2475a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x2475a8: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x2475a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x2475ac: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x2475b0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x2475b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2475b4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2475b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2475b8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2475b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2475bc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2475bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2475c0:
    // 0x2475c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2475c4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2475c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2475c8: 0x72200b  movn        $a0, $v1, $s2
    ctx->pc = 0x2475c8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    // 0x2475cc: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x2475ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x2475d0: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2475d4: 0x8ce7412c  lw          $a3, 0x412C($a3)
    ctx->pc = 0x2475d4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2475d8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2475d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2475dc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2475dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2475e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2475e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2475e4: 0xac27412c  sw          $a3, 0x412C($at)
    ctx->pc = 0x2475e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2475e8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2475e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2475ec: 0xdcc634f8  ld          $a2, 0x34F8($a2)
    ctx->pc = 0x2475ecu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34F8u));
    // 0x2475f0: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x2475f4: 0x3442ff3f  ori         $v0, $v0, 0xFF3F
    ctx->pc = 0x2475f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65343);
    // 0x2475f8: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x2475f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x2475fc: 0x34421de3  ori         $v0, $v0, 0x1DE3
    ctx->pc = 0x2475fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7651);
    // 0x247600: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x247600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x247604: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x247604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x247608: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x247608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24760c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24760cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247610: 0xfc2634f8  sd          $a2, 0x34F8($at)
    ctx->pc = 0x247610u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B34F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F8u, _value); } while (0);
    // 0x247614: 0x72200b  movn        $a0, $v1, $s2
    ctx->pc = 0x247614u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    // 0x247618: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x247618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24761c: 0x92050016  lbu         $a1, 0x16($s0)
    ctx->pc = 0x24761cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x247620: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x247620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x247624: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x247624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x247628: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x247628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24762c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x247630: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x247630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x247634: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x247634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x247638: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x247638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x24763c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x24763cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x247640: 0x70862389  pcpyld      $a0, $a0, $a2
    ctx->pc = 0x247640u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x247644: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247648: 0xfc2634f8  sd          $a2, 0x34F8($at)
    ctx->pc = 0x247648u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B34F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F8u, _value); } while (0);
    // 0x24764c: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x24764cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x247650: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x247654: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247658: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x247658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24765c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x24765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x247660: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x247660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x247664: 0x8e651180  lw          $a1, 0x1180($s3)
    ctx->pc = 0x247664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x247668: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x247668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x24766c: 0x31538  dsll        $v0, $v1, 20
    ctx->pc = 0x24766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 20);
    // 0x247670: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x247670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x247674: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x247674u;
    {
        const bool branch_taken_0x247674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x247678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247674u;
        // 0x247678: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247674) {
            ctx->pc = 0x2476E0u;
            goto label_2476e0;
        }
    }
    ctx->pc = 0x24767Cu;
    // 0x24767c: 0x9e03001c  lwu         $v1, 0x1C($s0)
    ctx->pc = 0x24767cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x247680: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x247680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x247684: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x247684u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x247688: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x247688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x24768c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24768cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x247690: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x247690u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x247694: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x247694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x247698: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x247698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x24769c: 0x70451b89  pcpyld      $v1, $v0, $a1
    ctx->pc = 0x24769cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x2476a0: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x2476a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x2476a4: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x2476a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2476a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2476a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2476ac: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2476acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2476b0: 0x9e050020  lwu         $a1, 0x20($s0)
    ctx->pc = 0x2476b0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2476b4: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2476b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2476b8: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x2476b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2476bc: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x2476bcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2476c0: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x2476c0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2476c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2476c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2476c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2476c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2476cc: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x2476ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2476d0: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x2476d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x2476d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2476D4u;
    {
        const bool branch_taken_0x2476d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476D4u;
        // 0x2476d8: 0x7ce30020  sq          $v1, 0x20($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476d4) {
            ctx->pc = 0x247738u;
            goto label_247738;
        }
    }
    ctx->pc = 0x2476DCu;
    // 0x2476dc: 0x0  nop
    ctx->pc = 0x2476dcu;
    // NOP
label_2476e0:
    // 0x2476e0: 0x9e03001c  lwu         $v1, 0x1C($s0)
    ctx->pc = 0x2476e0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2476e4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x2476e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2476e8: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x2476e8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2476ec: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2476ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2476f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2476f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2476f4: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x2476f4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2476f8: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x2476f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2476fc: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x2476fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x247700: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x247700u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x247704: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x247704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x247708: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24770c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x24770cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247710: 0x9e050020  lwu         $a1, 0x20($s0)
    ctx->pc = 0x247710u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x247714: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x247714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x247718: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x247718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x24771c: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x24771cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x247720: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x247720u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x247724: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x247724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x247728: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x247728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x24772c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x24772cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x247730: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x247730u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x247734: 0x0  nop
    ctx->pc = 0x247734u;
    // NOP
label_247738:
    // 0x247738: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x247738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x24773c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24773cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247740: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x247740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
label_247744:
    // 0x247744: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x247744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247748: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x247748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24774c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24774cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247750: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x247750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247758: 0x3e00008  jr          $ra
    ctx->pc = 0x247758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247758u;
        // 0x24775c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247760u;
    // 0x247760: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x247760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x247764: 0x0  nop
    ctx->pc = 0x247764u;
    // NOP
    // 0x247768: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x247768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24776c: 0x0  nop
    ctx->pc = 0x24776cu;
    // NOP
    // 0x247770: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x247770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x247774: 0x0  nop
    ctx->pc = 0x247774u;
    // NOP
    // 0x247778: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x247778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24777c: 0x0  nop
    ctx->pc = 0x24777cu;
    // NOP
    // 0x247780: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x247780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x247784: 0x0  nop
    ctx->pc = 0x247784u;
    // NOP
    ctx->pc = 0x247788u;
}
