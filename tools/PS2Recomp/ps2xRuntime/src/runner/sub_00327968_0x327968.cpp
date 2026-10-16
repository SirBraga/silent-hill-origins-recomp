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

// Function: sub_00327968
// Address: 0x327968 - 0x327c10
void sub_00327968_0x327968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327968_0x327968");
#endif

    switch (ctx->pc) {
        case 0x327968u: goto label_327968;
        case 0x32796cu: goto label_32796c;
        case 0x327970u: goto label_327970;
        case 0x327974u: goto label_327974;
        case 0x327978u: goto label_327978;
        case 0x32797cu: goto label_32797c;
        case 0x327980u: goto label_327980;
        case 0x327984u: goto label_327984;
        case 0x327988u: goto label_327988;
        case 0x32798cu: goto label_32798c;
        case 0x327990u: goto label_327990;
        case 0x327994u: goto label_327994;
        case 0x327998u: goto label_327998;
        case 0x32799cu: goto label_32799c;
        case 0x3279a0u: goto label_3279a0;
        case 0x3279a4u: goto label_3279a4;
        case 0x3279a8u: goto label_3279a8;
        case 0x3279acu: goto label_3279ac;
        case 0x3279b0u: goto label_3279b0;
        case 0x3279b4u: goto label_3279b4;
        case 0x3279b8u: goto label_3279b8;
        case 0x3279bcu: goto label_3279bc;
        case 0x3279c0u: goto label_3279c0;
        case 0x3279c4u: goto label_3279c4;
        case 0x3279c8u: goto label_3279c8;
        case 0x3279ccu: goto label_3279cc;
        case 0x3279d0u: goto label_3279d0;
        case 0x3279d4u: goto label_3279d4;
        case 0x3279d8u: goto label_3279d8;
        case 0x3279dcu: goto label_3279dc;
        case 0x3279e0u: goto label_3279e0;
        case 0x3279e4u: goto label_3279e4;
        case 0x3279e8u: goto label_3279e8;
        case 0x3279ecu: goto label_3279ec;
        case 0x3279f0u: goto label_3279f0;
        case 0x3279f4u: goto label_3279f4;
        case 0x3279f8u: goto label_3279f8;
        case 0x3279fcu: goto label_3279fc;
        case 0x327a00u: goto label_327a00;
        case 0x327a04u: goto label_327a04;
        case 0x327a08u: goto label_327a08;
        case 0x327a0cu: goto label_327a0c;
        case 0x327a10u: goto label_327a10;
        case 0x327a14u: goto label_327a14;
        case 0x327a18u: goto label_327a18;
        case 0x327a1cu: goto label_327a1c;
        case 0x327a20u: goto label_327a20;
        case 0x327a24u: goto label_327a24;
        case 0x327a28u: goto label_327a28;
        case 0x327a2cu: goto label_327a2c;
        case 0x327a30u: goto label_327a30;
        case 0x327a34u: goto label_327a34;
        case 0x327a38u: goto label_327a38;
        case 0x327a3cu: goto label_327a3c;
        case 0x327a40u: goto label_327a40;
        case 0x327a44u: goto label_327a44;
        case 0x327a48u: goto label_327a48;
        case 0x327a4cu: goto label_327a4c;
        case 0x327a50u: goto label_327a50;
        case 0x327a54u: goto label_327a54;
        case 0x327a58u: goto label_327a58;
        case 0x327a5cu: goto label_327a5c;
        case 0x327a60u: goto label_327a60;
        case 0x327a64u: goto label_327a64;
        case 0x327a68u: goto label_327a68;
        case 0x327a6cu: goto label_327a6c;
        case 0x327a70u: goto label_327a70;
        case 0x327a74u: goto label_327a74;
        case 0x327a78u: goto label_327a78;
        case 0x327a7cu: goto label_327a7c;
        case 0x327a80u: goto label_327a80;
        case 0x327a84u: goto label_327a84;
        case 0x327a88u: goto label_327a88;
        case 0x327a8cu: goto label_327a8c;
        case 0x327a90u: goto label_327a90;
        case 0x327a94u: goto label_327a94;
        case 0x327a98u: goto label_327a98;
        case 0x327a9cu: goto label_327a9c;
        case 0x327aa0u: goto label_327aa0;
        case 0x327aa4u: goto label_327aa4;
        case 0x327aa8u: goto label_327aa8;
        case 0x327aacu: goto label_327aac;
        case 0x327ab0u: goto label_327ab0;
        case 0x327ab4u: goto label_327ab4;
        case 0x327ab8u: goto label_327ab8;
        case 0x327abcu: goto label_327abc;
        case 0x327ac0u: goto label_327ac0;
        case 0x327ac4u: goto label_327ac4;
        case 0x327ac8u: goto label_327ac8;
        case 0x327accu: goto label_327acc;
        case 0x327ad0u: goto label_327ad0;
        case 0x327ad4u: goto label_327ad4;
        case 0x327ad8u: goto label_327ad8;
        case 0x327adcu: goto label_327adc;
        case 0x327ae0u: goto label_327ae0;
        case 0x327ae4u: goto label_327ae4;
        case 0x327ae8u: goto label_327ae8;
        case 0x327aecu: goto label_327aec;
        case 0x327af0u: goto label_327af0;
        case 0x327af4u: goto label_327af4;
        case 0x327af8u: goto label_327af8;
        case 0x327afcu: goto label_327afc;
        case 0x327b00u: goto label_327b00;
        case 0x327b04u: goto label_327b04;
        case 0x327b08u: goto label_327b08;
        case 0x327b0cu: goto label_327b0c;
        case 0x327b10u: goto label_327b10;
        case 0x327b14u: goto label_327b14;
        case 0x327b18u: goto label_327b18;
        case 0x327b1cu: goto label_327b1c;
        case 0x327b20u: goto label_327b20;
        case 0x327b24u: goto label_327b24;
        case 0x327b28u: goto label_327b28;
        case 0x327b2cu: goto label_327b2c;
        case 0x327b30u: goto label_327b30;
        case 0x327b34u: goto label_327b34;
        case 0x327b38u: goto label_327b38;
        case 0x327b3cu: goto label_327b3c;
        case 0x327b40u: goto label_327b40;
        case 0x327b44u: goto label_327b44;
        case 0x327b48u: goto label_327b48;
        case 0x327b4cu: goto label_327b4c;
        case 0x327b50u: goto label_327b50;
        case 0x327b54u: goto label_327b54;
        case 0x327b58u: goto label_327b58;
        case 0x327b5cu: goto label_327b5c;
        case 0x327b60u: goto label_327b60;
        case 0x327b64u: goto label_327b64;
        case 0x327b68u: goto label_327b68;
        case 0x327b6cu: goto label_327b6c;
        case 0x327b70u: goto label_327b70;
        case 0x327b74u: goto label_327b74;
        case 0x327b78u: goto label_327b78;
        case 0x327b7cu: goto label_327b7c;
        case 0x327b80u: goto label_327b80;
        case 0x327b84u: goto label_327b84;
        case 0x327b88u: goto label_327b88;
        case 0x327b8cu: goto label_327b8c;
        case 0x327b90u: goto label_327b90;
        case 0x327b94u: goto label_327b94;
        case 0x327b98u: goto label_327b98;
        case 0x327b9cu: goto label_327b9c;
        case 0x327ba0u: goto label_327ba0;
        case 0x327ba4u: goto label_327ba4;
        case 0x327ba8u: goto label_327ba8;
        case 0x327bacu: goto label_327bac;
        case 0x327bb0u: goto label_327bb0;
        case 0x327bb4u: goto label_327bb4;
        case 0x327bb8u: goto label_327bb8;
        case 0x327bbcu: goto label_327bbc;
        case 0x327bc0u: goto label_327bc0;
        case 0x327bc4u: goto label_327bc4;
        case 0x327bc8u: goto label_327bc8;
        case 0x327bccu: goto label_327bcc;
        case 0x327bd0u: goto label_327bd0;
        case 0x327bd4u: goto label_327bd4;
        case 0x327bd8u: goto label_327bd8;
        case 0x327bdcu: goto label_327bdc;
        case 0x327be0u: goto label_327be0;
        case 0x327be4u: goto label_327be4;
        case 0x327be8u: goto label_327be8;
        case 0x327becu: goto label_327bec;
        case 0x327bf0u: goto label_327bf0;
        case 0x327bf4u: goto label_327bf4;
        case 0x327bf8u: goto label_327bf8;
        case 0x327bfcu: goto label_327bfc;
        case 0x327c00u: goto label_327c00;
        case 0x327c04u: goto label_327c04;
        case 0x327c08u: goto label_327c08;
        case 0x327c0cu: goto label_327c0c;
        default: break;
    }

    ctx->pc = 0x327968u;

label_327968:
    // 0x327968: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x327968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_32796c:
    // 0x32796c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32796cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_327970:
    // 0x327970: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x327970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_327974:
    // 0x327974: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x327974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_327978:
    // 0x327978: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x327978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_32797c:
    // 0x32797c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x32797cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_327980:
    // 0x327980: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x327980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_327984:
    // 0x327984: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x327984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_327988:
    // 0x327988: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x327988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_32798c:
    // 0x32798c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x32798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_327990:
    // 0x327990: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_327994:
    // 0x327994: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_327998:
    // 0x327998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32799c:
    // 0x32799c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32799cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_3279a0:
    // 0x3279a0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3279a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3279a4:
    // 0x3279a4: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_3279a8:
    if (ctx->pc == 0x3279A8u) {
        ctx->pc = 0x3279A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279A4u;
        // 0x3279a8: 0x3c150069  lui         $s5, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279ACu;
        goto label_3279ac;
    }
    ctx->pc = 0x3279A4u;
    {
        const bool branch_taken_0x3279a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279A4u;
        // 0x3279a8: 0x3c150069  lui         $s5, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279a4) {
            ctx->pc = 0x327B18u;
            goto label_327b18;
        }
    }
    ctx->pc = 0x3279ACu;
label_3279ac:
    // 0x3279ac: 0x26a28590  addiu       $v0, $s5, -0x7A70
    ctx->pc = 0x3279acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935952));
label_3279b0:
    // 0x3279b0: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x3279b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3279b4:
    // 0x3279b4: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_3279b8:
    if (ctx->pc == 0x3279B8u) {
        ctx->pc = 0x3279B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279B4u;
        // 0x3279b8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279BCu;
        goto label_3279bc;
    }
    ctx->pc = 0x3279B4u;
    {
        const bool branch_taken_0x3279b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279B4u;
        // 0x3279b8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279b4) {
            ctx->pc = 0x327B18u;
            goto label_327b18;
        }
    }
    ctx->pc = 0x3279BCu;
label_3279bc:
    // 0x3279bc: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x3279bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_3279c0:
    // 0x3279c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3279c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3279c4:
    // 0x3279c4: 0x0  nop
    ctx->pc = 0x3279c4u;
    // NOP
label_3279c8:
    // 0x3279c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3279c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3279cc:
    // 0x3279cc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3279ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3279d0:
    // 0x3279d0: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3279d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_3279d4:
    // 0x3279d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3279d4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_3279d8:
    // 0x3279d8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3279d8u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_3279dc:
    // 0x3279dc: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x3279dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3279e0:
    // 0x3279e0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3279e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3279e4:
    // 0x3279e4: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x3279e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_3279e8:
    // 0x3279e8: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x3279e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3279ec:
    // 0x3279ec: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x3279ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_3279f0:
    // 0x3279f0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3279f4:
    if (ctx->pc == 0x3279F4u) {
        ctx->pc = 0x3279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279F0u;
        // 0x3279f4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279F8u;
        goto label_3279f8;
    }
    ctx->pc = 0x3279F0u;
    {
        const bool branch_taken_0x3279f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279F0u;
        // 0x3279f4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279f0) {
            ctx->pc = 0x327A1Cu;
            goto label_327a1c;
        }
    }
    ctx->pc = 0x3279F8u;
label_3279f8:
    // 0x3279f8: 0xde828590  ld          $v0, -0x7A70($s4)
    ctx->pc = 0x3279f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294935952)));
label_3279fc:
    // 0x3279fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3279fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_327a00:
    // 0x327a00: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x327a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_327a04:
    // 0x327a04: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x327a04u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_327a08:
    // 0x327a08: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x327a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_327a0c:
    // 0x327a0c: 0xc0c9d40  jal         func_327500
label_327a10:
    if (ctx->pc == 0x327A10u) {
        ctx->pc = 0x327A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A0Cu;
        // 0x327a10: 0xfe828590  sd          $v0, -0x7A70($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294935952), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A14u;
        goto label_327a14;
    }
    ctx->pc = 0x327A0Cu;
    SET_GPR_U32(ctx, 31, 0x327A14u);
    ctx->pc = 0x327A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A0Cu;
    // 0x327a10: 0xfe828590  sd          $v0, -0x7A70($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294935952), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327500u, 0x327A0Cu, 0x327A14u)) {
        return;
    }
    ctx->pc = 0x327A14u;
label_327a14:
    // 0x327a14: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x327a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_327a18:
    // 0x327a18: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x327a18u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_327a1c:
    // 0x327a1c: 0xde848590  ld          $a0, -0x7A70($s4)
    ctx->pc = 0x327a1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294935952)));
label_327a20:
    // 0x327a20: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x327a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_327a24:
    // 0x327a24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x327a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_327a28:
    // 0x327a28: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x327a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_327a2c:
    // 0x327a2c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x327a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_327a30:
    // 0x327a30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_327a34:
    // 0x327a34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x327a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_327a38:
    // 0x327a38: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x327a38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_327a3c:
    // 0x327a3c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x327a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_327a40:
    // 0x327a40: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_327a44:
    if (ctx->pc == 0x327A44u) {
        ctx->pc = 0x327A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A40u;
        // 0x327a44: 0x26928590  addiu       $s2, $s4, -0x7A70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A48u;
        goto label_327a48;
    }
    ctx->pc = 0x327A40u;
    {
        const bool branch_taken_0x327a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A40u;
        // 0x327a44: 0x26928590  addiu       $s2, $s4, -0x7A70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a40) {
            ctx->pc = 0x327B18u;
            goto label_327b18;
        }
    }
    ctx->pc = 0x327A48u;
label_327a48:
    // 0x327a48: 0xc0c9e4c  jal         func_327930
label_327a4c:
    if (ctx->pc == 0x327A4Cu) {
        ctx->pc = 0x327A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A48u;
        // 0x327a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A50u;
        goto label_327a50;
    }
    ctx->pc = 0x327A48u;
    SET_GPR_U32(ctx, 31, 0x327A50u);
    ctx->pc = 0x327A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A48u;
    // 0x327a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327930u, 0x327A48u, 0x327A50u)) {
        return;
    }
    ctx->pc = 0x327A50u;
label_327a50:
    // 0x327a50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x327a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327a54:
    // 0x327a54: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x327a54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_327a58:
    // 0x327a58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x327a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327a5c:
    // 0x327a5c: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x327a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_327a60:
    // 0x327a60: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x327a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_327a64:
    // 0x327a64: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x327a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_327a68:
    // 0x327a68: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x327a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_327a6c:
    // 0x327a6c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x327a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_327a70:
    // 0x327a70: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x327a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_327a74:
    // 0x327a74: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x327a74u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_327a78:
    // 0x327a78: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x327a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327a7c:
    // 0x327a7c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x327a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_327a80:
    // 0x327a80: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x327a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_327a84:
    // 0x327a84: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x327a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_327a88:
    // 0x327a88: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x327a88u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_327a8c:
    // 0x327a8c: 0x40f809  jalr        $v0
label_327a90:
    if (ctx->pc == 0x327A90u) {
        ctx->pc = 0x327A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A8Cu;
        // 0x327a90: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A94u;
        goto label_327a94;
    }
    ctx->pc = 0x327A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327A94u);
        ctx->pc = 0x327A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A8Cu;
        // 0x327a90: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327A8Cu, 0x327A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327A94u;
label_327a94:
    // 0x327a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327a98:
    // 0x327a98: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_327a9c:
    if (ctx->pc == 0x327A9Cu) {
        ctx->pc = 0x327A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A98u;
        // 0x327a9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AA0u;
        goto label_327aa0;
    }
    ctx->pc = 0x327A98u;
    {
        const bool branch_taken_0x327a98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x327A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A98u;
        // 0x327a9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a98) {
            ctx->pc = 0x327AB8u;
            goto label_327ab8;
        }
    }
    ctx->pc = 0x327AA0u;
label_327aa0:
    // 0x327aa0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x327aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_327aa4:
    // 0x327aa4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x327aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_327aa8:
    // 0x327aa8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x327aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_327aac:
    // 0x327aac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x327aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_327ab0:
    // 0x327ab0: 0x10000014  b           . + 4 + (0x14 << 2)
label_327ab4:
    if (ctx->pc == 0x327AB4u) {
        ctx->pc = 0x327AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB0u;
        // 0x327ab4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AB8u;
        goto label_327ab8;
    }
    ctx->pc = 0x327AB0u;
    {
        const bool branch_taken_0x327ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB0u;
        // 0x327ab4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ab0) {
            ctx->pc = 0x327B04u;
            goto label_327b04;
        }
    }
    ctx->pc = 0x327AB8u;
label_327ab8:
    // 0x327ab8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_327abc:
    if (ctx->pc == 0x327ABCu) {
        ctx->pc = 0x327ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB8u;
        // 0x327abc: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AC0u;
        goto label_327ac0;
    }
    ctx->pc = 0x327AB8u;
    {
        const bool branch_taken_0x327ab8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x327ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB8u;
        // 0x327abc: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ab8) {
            ctx->pc = 0x327AE8u;
            goto label_327ae8;
        }
    }
    ctx->pc = 0x327AC0u;
label_327ac0:
    // 0x327ac0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x327ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_327ac4:
    // 0x327ac4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x327ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_327ac8:
    // 0x327ac8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x327ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_327acc:
    // 0x327acc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x327accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_327ad0:
    // 0x327ad0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x327ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_327ad4:
    // 0x327ad4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_327ad8:
    // 0x327ad8: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x327ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_327adc:
    // 0x327adc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x327adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_327ae0:
    // 0x327ae0: 0x10000009  b           . + 4 + (0x9 << 2)
label_327ae4:
    if (ctx->pc == 0x327AE4u) {
        ctx->pc = 0x327AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AE0u;
        // 0x327ae4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AE8u;
        goto label_327ae8;
    }
    ctx->pc = 0x327AE0u;
    {
        const bool branch_taken_0x327ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AE0u;
        // 0x327ae4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ae0) {
            ctx->pc = 0x327B08u;
            goto label_327b08;
        }
    }
    ctx->pc = 0x327AE8u;
label_327ae8:
    // 0x327ae8: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x327ae8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_327aec:
    // 0x327aec: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x327aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_327af0:
    // 0x327af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327af4:
    // 0x327af4: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x327af4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23));
label_327af8:
    // 0x327af8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x327af8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_327afc:
    // 0x327afc: 0xc0c9e2a  jal         func_3278A8
label_327b00:
    if (ctx->pc == 0x327B00u) {
        ctx->pc = 0x327B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AFCu;
        // 0x327b00: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B04u;
        goto label_327b04;
    }
    ctx->pc = 0x327AFCu;
    SET_GPR_U32(ctx, 31, 0x327B04u);
    ctx->pc = 0x327B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327AFCu;
    // 0x327b00: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3278A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3278A8u, 0x327AFCu, 0x327B04u)) {
        return;
    }
    ctx->pc = 0x327B04u;
label_327b04:
    // 0x327b04: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x327b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327b08:
    // 0x327b08: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_327b0c:
    if (ctx->pc == 0x327B0Cu) {
        ctx->pc = 0x327B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B08u;
        // 0x327b0c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B10u;
        goto label_327b10;
    }
    ctx->pc = 0x327B08u;
    {
        const bool branch_taken_0x327b08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x327B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B08u;
        // 0x327b0c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b08) {
            ctx->pc = 0x3279C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3279c8;
        }
    }
    ctx->pc = 0x327B10u;
label_327b10:
    // 0x327b10: 0x10000002  b           . + 4 + (0x2 << 2)
label_327b14:
    if (ctx->pc == 0x327B14u) {
        ctx->pc = 0x327B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B10u;
        // 0x327b14: 0x26a48590  addiu       $a0, $s5, -0x7A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B18u;
        goto label_327b18;
    }
    ctx->pc = 0x327B10u;
    {
        const bool branch_taken_0x327b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B10u;
        // 0x327b14: 0x26a48590  addiu       $a0, $s5, -0x7A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b10) {
            ctx->pc = 0x327B1Cu;
            goto label_327b1c;
        }
    }
    ctx->pc = 0x327B18u;
label_327b18:
    // 0x327b18: 0x26a48590  addiu       $a0, $s5, -0x7A70
    ctx->pc = 0x327b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935952));
label_327b1c:
    // 0x327b1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x327b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_327b20:
    // 0x327b20: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x327b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_327b24:
    // 0x327b24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x327b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_327b28:
    // 0x327b28: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x327b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_327b2c:
    // 0x327b2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x327b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_327b30:
    // 0x327b30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x327b30u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_327b34:
    // 0x327b34: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x327b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_327b38:
    // 0x327b38: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x327b38u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_327b3c:
    // 0x327b3c: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x327b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_327b40:
    // 0x327b40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_327b44:
    if (ctx->pc == 0x327B44u) {
        ctx->pc = 0x327B48u;
        goto label_327b48;
    }
    ctx->pc = 0x327B40u;
    {
        const bool branch_taken_0x327b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b40) {
            ctx->pc = 0x327B6Cu;
            goto label_327b6c;
        }
    }
    ctx->pc = 0x327B48u;
label_327b48:
    // 0x327b48: 0xdea28590  ld          $v0, -0x7A70($s5)
    ctx->pc = 0x327b48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294935952)));
label_327b4c:
    // 0x327b4c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x327b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_327b50:
    // 0x327b50: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x327b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_327b54:
    // 0x327b54: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x327b54u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_327b58:
    // 0x327b58: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x327b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_327b5c:
    // 0x327b5c: 0xc0c9d40  jal         func_327500
label_327b60:
    if (ctx->pc == 0x327B60u) {
        ctx->pc = 0x327B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B5Cu;
        // 0x327b60: 0xfea28590  sd          $v0, -0x7A70($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294935952), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B64u;
        goto label_327b64;
    }
    ctx->pc = 0x327B5Cu;
    SET_GPR_U32(ctx, 31, 0x327B64u);
    ctx->pc = 0x327B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B5Cu;
    // 0x327b60: 0xfea28590  sd          $v0, -0x7A70($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294935952), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327500u, 0x327B5Cu, 0x327B64u)) {
        return;
    }
    ctx->pc = 0x327B64u;
label_327b64:
    // 0x327b64: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x327b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_327b68:
    // 0x327b68: 0x8c841000  lw          $a0, 0x1000($a0)
    ctx->pc = 0x327b68u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 4096))); // MMIO: 0x10001000
label_327b6c:
    // 0x327b6c: 0xdea28590  ld          $v0, -0x7A70($s5)
    ctx->pc = 0x327b6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294935952)));
label_327b70:
    // 0x327b70: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x327b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_327b74:
    // 0x327b74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x327b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_327b78:
    // 0x327b78: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x327b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_327b7c:
    // 0x327b7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x327b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_327b80:
    // 0x327b80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x327b80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_327b84:
    // 0x327b84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x327b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_327b88:
    // 0x327b88: 0xc0c9dc6  jal         func_327718
label_327b8c:
    if (ctx->pc == 0x327B8Cu) {
        ctx->pc = 0x327B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B88u;
        // 0x327b8c: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B90u;
        goto label_327b90;
    }
    ctx->pc = 0x327B88u;
    SET_GPR_U32(ctx, 31, 0x327B90u);
    ctx->pc = 0x327B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B88u;
    // 0x327b8c: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327718u, 0x327B88u, 0x327B90u)) {
        return;
    }
    ctx->pc = 0x327B90u;
label_327b90:
    // 0x327b90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x327b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_327b94:
    // 0x327b94: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x327b94u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_327b98:
    // 0x327b98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x327b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_327b9c:
    // 0x327b9c: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x327b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_327ba0:
    // 0x327ba0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x327ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_327ba4:
    // 0x327ba4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_327ba8:
    if (ctx->pc == 0x327BA8u) {
        ctx->pc = 0x327BACu;
        goto label_327bac;
    }
    ctx->pc = 0x327BA4u;
    {
        const bool branch_taken_0x327ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ba4) {
            ctx->pc = 0x327BD0u;
            goto label_327bd0;
        }
    }
    ctx->pc = 0x327BACu;
label_327bac:
    // 0x327bac: 0xdea28590  ld          $v0, -0x7A70($s5)
    ctx->pc = 0x327bacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294935952)));
label_327bb0:
    // 0x327bb0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x327bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_327bb4:
    // 0x327bb4: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x327bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_327bb8:
    // 0x327bb8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x327bb8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_327bbc:
    // 0x327bbc: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x327bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_327bc0:
    // 0x327bc0: 0xc0c9d40  jal         func_327500
label_327bc4:
    if (ctx->pc == 0x327BC4u) {
        ctx->pc = 0x327BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BC0u;
        // 0x327bc4: 0xfea28590  sd          $v0, -0x7A70($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294935952), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327BC8u;
        goto label_327bc8;
    }
    ctx->pc = 0x327BC0u;
    SET_GPR_U32(ctx, 31, 0x327BC8u);
    ctx->pc = 0x327BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327BC0u;
    // 0x327bc4: 0xfea28590  sd          $v0, -0x7A70($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294935952), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327500u, 0x327BC0u, 0x327BC8u)) {
        return;
    }
    ctx->pc = 0x327BC8u;
label_327bc8:
    // 0x327bc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x327bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_327bcc:
    // 0x327bcc: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x327bccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_327bd0:
    // 0x327bd0: 0xdea28590  ld          $v0, -0x7A70($s5)
    ctx->pc = 0x327bd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294935952)));
label_327bd4:
    // 0x327bd4: 0xf  sync
    ctx->pc = 0x327bd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_327bd8:
    // 0x327bd8: 0x42000038  ei
    ctx->pc = 0x327bd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_327bdc:
    // 0x327bdc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x327bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_327be0:
    // 0x327be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327be4:
    // 0x327be4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x327be4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_327be8:
    // 0x327be8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x327be8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_327bec:
    // 0x327bec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x327becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_327bf0:
    // 0x327bf0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x327bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_327bf4:
    // 0x327bf4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x327bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_327bf8:
    // 0x327bf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x327bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327bfc:
    // 0x327bfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327c00:
    // 0x327c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_327c04:
    // 0x327c04: 0x3e00008  jr          $ra
label_327c08:
    if (ctx->pc == 0x327C08u) {
        ctx->pc = 0x327C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C04u;
        // 0x327c08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C0Cu;
        goto label_327c0c;
    }
    ctx->pc = 0x327C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C04u;
        // 0x327c08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C0Cu;
label_327c0c:
    // 0x327c0c: 0x0  nop
    ctx->pc = 0x327c0cu;
    // NOP
    ctx->pc = 0x327c10u;
}
